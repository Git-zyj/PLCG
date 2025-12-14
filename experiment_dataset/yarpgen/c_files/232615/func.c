/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232615
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))));
                var_11 -= ((/* implicit */unsigned char) max(((-(((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) arr_4 [i_0] [i_1]))));
                var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)937)) : (((/* implicit */int) (signed char)74)))) << (((((/* implicit */int) var_9)) - (43)))))) ? (((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */short) arr_2 [i_0])), (arr_4 [i_0] [i_0])))) / (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_1])) : (((/* implicit */int) var_7))))))) : (max((arr_1 [i_0]), (arr_1 [i_0])))));
                var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (~(min((var_0), (((/* implicit */unsigned int) arr_4 [(signed char)8] [i_1])))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        var_14 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)116))))) ? (((/* implicit */long long int) arr_6 [i_2])) : (min((arr_7 [i_2]), (arr_1 [i_2])))));
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 2; i_5 < 11; i_5 += 2) 
                {
                    {
                        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_2] [i_3])) * (((/* implicit */int) arr_3 [i_2] [i_2]))))) ? ((~(((((/* implicit */int) (unsigned char)189)) - (((/* implicit */int) arr_2 [i_2])))))) : ((~(((/* implicit */int) var_5))))));
                        var_16 = ((/* implicit */signed char) (~(((((/* implicit */long long int) ((/* implicit */int) ((short) var_9)))) / (arr_14 [i_5] [i_3])))));
                        arr_17 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_4] [i_4])) ? (((var_6) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)180))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24643)))));
                        var_17 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_10 [i_5 + 1] [i_5 - 2] [i_5 + 1] [i_5 - 1])) ? (((/* implicit */int) arr_10 [i_5 - 2] [i_5 - 2] [i_5 - 1] [i_5 + 1])) : (((/* implicit */int) var_8)))) + (2147483647))) >> (((((/* implicit */int) var_7)) - (157)))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_6 = 3; i_6 < 16; i_6 += 1) 
    {
        arr_21 [i_6 - 3] [i_6 + 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_19 [i_6 - 3]), (arr_19 [i_6 - 2]))))));
        var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((unsigned int) var_7)) % (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))), ((~(max((((/* implicit */unsigned long long int) var_9)), (var_6)))))));
        var_19 &= ((/* implicit */unsigned long long int) arr_19 [i_6]);
        arr_22 [i_6 - 1] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_0 [i_6 - 1] [i_6 - 2])), ((-(((/* implicit */int) arr_5 [i_6 + 1] [(short)22] [i_6 - 3]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (signed char)74)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-24396))) : (var_0)))));
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_7))));
    }
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) - (((/* implicit */int) var_7))));
    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) var_4))));
    /* LoopSeq 4 */
    for (short i_8 = 3; i_8 < 17; i_8 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_9 = 0; i_9 < 18; i_9 += 4) 
        {
            for (unsigned int i_10 = 3; i_10 < 17; i_10 += 4) 
            {
                for (unsigned int i_11 = 0; i_11 < 18; i_11 += 4) 
                {
                    {
                        var_24 = ((/* implicit */signed char) ((unsigned int) ((short) (signed char)99)));
                        var_25 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -6072571175865338102LL)) ? (((/* implicit */int) min((var_9), (var_9)))) : (((/* implicit */int) var_9)))) == (((/* implicit */int) ((var_2) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)44))))))));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((var_6) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_8 - 3] [i_8] [i_8 + 1] [i_8 + 1])) ? (((/* implicit */int) arr_30 [i_8 - 3] [i_8 - 3] [i_8 - 2] [i_8 - 2])) : (((/* implicit */int) arr_32 [i_8] [i_8 - 2] [i_8 - 2] [i_8]))))))))));
        /* LoopNest 2 */
        for (long long int i_12 = 2; i_12 < 17; i_12 += 4) 
        {
            for (short i_13 = 1; i_13 < 16; i_13 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 0; i_14 < 18; i_14 += 3) 
                    {
                        for (unsigned int i_15 = 0; i_15 < 18; i_15 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_40 [i_12] [11ULL] [i_13 + 2] [i_13 + 2])))) ? (max((((/* implicit */unsigned long long int) ((arr_1 [i_13]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)72)))))), (min((((/* implicit */unsigned long long int) arr_4 [i_12 - 1] [i_13 - 1])), (var_6))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) << (((((/* implicit */int) arr_33 [i_15] [i_14] [i_8] [(signed char)11] [i_8])) + (132)))))) ? (arr_36 [i_13 + 2] [i_8 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
                                arr_48 [i_8] [i_8 + 1] [i_13] [i_8 - 1] [i_8 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) arr_34 [7U] [i_13] [(short)13] [i_15])) : (2479834484563174715LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)25599))) | (arr_18 [i_12 - 2] [i_13 + 2])))) : (min((((/* implicit */unsigned long long int) (unsigned char)65)), (var_6)))));
                                arr_49 [(signed char)10] [i_13] [(unsigned short)13] [i_14] [3LL] [3LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_20 [i_8])) ? (((((/* implicit */_Bool) var_9)) ? (arr_1 [i_15]) : (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_8 - 3] [i_12] [i_13] [i_12] [i_15]))))) : (max((arr_25 [i_8] [13LL]), (((/* implicit */long long int) arr_28 [i_13 - 1] [i_13 - 1])))))) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) (signed char)-81)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 0; i_16 < 18; i_16 += 1) 
                    {
                        for (long long int i_17 = 1; i_17 < 17; i_17 += 4) 
                        {
                            {
                                arr_54 [i_12] [i_12 + 1] [i_16] [i_13] = ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) 722160334U)) & (9223372036854775785LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_27 [i_8 - 1])) / (((/* implicit */int) arr_50 [i_13] [i_13] [i_16] [14LL])))))));
                                var_28 = ((/* implicit */short) ((long long int) arr_36 [i_8 - 3] [i_8]));
                                var_29 = ((((((/* implicit */int) var_5)) > (((/* implicit */int) ((var_2) <= (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))) ? (min((var_6), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))));
                                var_30 &= ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_52 [i_8 - 3] [i_12 - 1] [i_12] [i_12] [i_17 + 1]), (arr_52 [i_8 - 3] [i_12 - 1] [i_12] [i_12] [i_17 + 1])))) ? (var_0) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_4)))))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)189)) & (((/* implicit */int) var_1))))), (max(((+(var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) << (((((/* implicit */int) var_1)) - (100))))))))));
                }
            } 
        } 
        arr_55 [(signed char)1] = ((/* implicit */short) (+(((/* implicit */int) (((-(12005463749457404871ULL))) > (arr_40 [i_8 - 2] [(short)14] [(short)16] [i_8 + 1]))))));
    }
    for (long long int i_18 = 0; i_18 < 16; i_18 += 2) /* same iter space */
    {
        var_32 &= ((/* implicit */unsigned char) max((((var_2) >> (((((/* implicit */int) arr_0 [i_18] [i_18])) - (40))))), ((~(var_0)))));
        var_33 = (-(arr_43 [i_18] [i_18] [2U] [i_18] [i_18] [(short)0]));
        var_34 *= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)75)) * (((/* implicit */int) (unsigned char)106)))))))) & (((/* implicit */int) (!(((/* implicit */_Bool) 633128151U)))))));
        arr_58 [i_18] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_18] [i_18] [i_18] [i_18] [i_18]))))), (var_2)));
        var_35 -= ((/* implicit */signed char) ((unsigned char) (+(arr_53 [14U] [i_18] [14U] [i_18] [i_18] [i_18] [i_18]))));
    }
    for (long long int i_19 = 0; i_19 < 16; i_19 += 2) /* same iter space */
    {
        arr_62 [i_19] = ((/* implicit */signed char) arr_45 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19]);
        /* LoopNest 3 */
        for (unsigned char i_20 = 0; i_20 < 16; i_20 += 3) 
        {
            for (long long int i_21 = 0; i_21 < 16; i_21 += 2) 
            {
                for (unsigned int i_22 = 0; i_22 < 16; i_22 += 4) 
                {
                    {
                        arr_72 [i_19] [13U] [i_19] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_65 [i_20] [i_20]))) / (((arr_40 [i_19] [i_19] [i_19] [i_19]) / (((/* implicit */unsigned long long int) 4294967295U))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))) : (((unsigned int) var_2))));
                        var_36 = ((/* implicit */unsigned char) arr_66 [i_20] [i_20] [i_19]);
                        arr_73 [i_19] [i_19] [i_20] [(unsigned char)12] [i_21] [i_19] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (signed char)37)) ? (((/* implicit */int) var_5)) : ((+(((/* implicit */int) (signed char)37)))))), (min((((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */int) (signed char)-109)) : (((/* implicit */int) arr_33 [i_19] [i_20] [i_21] [i_21] [i_22])))), (((/* implicit */int) var_8))))));
                    }
                } 
            } 
        } 
        arr_74 [i_19] [i_19] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((var_3) & (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))), (var_6)))) ? (((/* implicit */unsigned long long int) min((var_0), (arr_34 [0ULL] [i_19] [i_19] [i_19])))) : (arr_40 [(short)17] [i_19] [i_19] [(short)5])));
    }
    /* vectorizable */
    for (long long int i_23 = 0; i_23 < 16; i_23 += 2) /* same iter space */
    {
        arr_79 [i_23] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_78 [i_23] [i_23]))));
        var_37 = ((/* implicit */unsigned char) ((short) (!(((/* implicit */_Bool) var_0)))));
        var_38 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_75 [i_23] [1LL])))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))));
        arr_80 [i_23] = ((/* implicit */unsigned char) arr_41 [i_23]);
    }
}
