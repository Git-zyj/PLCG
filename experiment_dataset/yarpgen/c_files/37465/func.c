/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37465
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
    var_16 -= ((/* implicit */unsigned char) var_6);
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) min(((unsigned char)152), ((unsigned char)148)));
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) arr_1 [i_0 - 1]))));
        var_19 = ((/* implicit */_Bool) arr_0 [i_0]);
        var_20 &= ((/* implicit */signed char) min((arr_0 [i_0 - 2]), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [(signed char)3])))))) ? (arr_0 [i_0 - 1]) : (arr_0 [12ULL])))));
    }
    for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_2 = 3; i_2 < 21; i_2 += 3) 
        {
            var_21 = ((/* implicit */unsigned long long int) var_1);
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [(short)15] [i_2 + 1] [i_2])) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_2 + 1]))))))))));
        }
        for (unsigned short i_3 = 1; i_3 < 20; i_3 += 2) 
        {
            var_23 *= ((/* implicit */unsigned long long int) var_8);
            var_24 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3 + 3] [i_3 - 1])) ? (((/* implicit */int) var_2)) : (arr_5 [i_3 + 2] [i_3 + 2])))) ? (((/* implicit */unsigned long long int) ((arr_9 [i_1] [i_3 - 1] [i_3 + 2]) ? (((/* implicit */int) arr_9 [i_1] [i_3 - 1] [i_3])) : (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) var_14)) : ((-(arr_4 [i_1])))))));
            arr_13 [i_3] [i_1] [i_1] = ((/* implicit */unsigned char) ((((arr_5 [i_3 + 2] [i_3 + 2]) + (2147483647))) >> (((max((arr_5 [i_3 + 1] [i_3 + 1]), (arr_5 [i_3 + 2] [i_3 + 3]))) + (958718884)))));
        }
        for (unsigned long long int i_4 = 3; i_4 < 20; i_4 += 4) 
        {
            var_25 = (+(arr_7 [i_1] [i_4 + 1] [i_1]));
            arr_17 [i_4] [i_4] = ((/* implicit */long long int) min((arr_5 [i_1] [i_4]), (((/* implicit */int) min((arr_12 [i_4 + 1] [i_4 + 2]), (var_13))))));
        }
        /* LoopSeq 2 */
        for (signed char i_5 = 3; i_5 < 20; i_5 += 2) 
        {
            arr_20 [i_5] [i_5 - 2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_1] [i_5 - 3] [i_1])) > (((((/* implicit */int) arr_10 [4] [i_5 + 2] [i_1])) | (((/* implicit */int) arr_10 [i_1] [i_5 + 2] [i_1]))))));
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 2; i_7 < 19; i_7 += 3) 
                {
                    {
                        arr_26 [i_6] = ((/* implicit */unsigned char) var_14);
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_24 [i_1] [i_1] [i_1] [i_7] [i_6])) && (((/* implicit */_Bool) arr_19 [i_6] [(_Bool)1] [9])))))) ? (arr_19 [i_7 + 3] [i_7 + 2] [i_7]) : (arr_19 [i_7 + 4] [i_7] [i_5 + 1])));
                        var_27 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_1] [i_5] [i_1])) ? (((((/* implicit */_Bool) (short)-23387)) ? (((/* implicit */int) (short)23378)) : (-1002613696))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_5 - 1] [i_7 - 1])))))));
                        var_28 += ((/* implicit */short) (~(((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_23 [i_1]))))), (var_3))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned short i_8 = 3; i_8 < 22; i_8 += 3) 
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 23; i_9 += 2) 
                {
                    for (unsigned long long int i_10 = 3; i_10 < 22; i_10 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */signed char) arr_8 [i_9]);
                            arr_35 [i_1] [i_5] [i_5 + 2] [i_8] [i_9] [i_10 - 2] = ((/* implicit */long long int) (+((-(((/* implicit */int) (unsigned char)168))))));
                            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) min((((/* implicit */int) ((signed char) arr_31 [i_8 - 3] [i_8] [11LL] [22LL] [i_8] [i_8 - 2]))), (arr_31 [i_8 + 1] [i_8] [i_8] [i_8] [i_8] [i_8 - 3]))))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */signed char) arr_25 [i_5 - 2] [(signed char)9] [i_8] [(signed char)9] [i_8]);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_11 = 1; i_11 < 21; i_11 += 4) 
                {
                    arr_39 [i_8] = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)115))));
                    arr_40 [i_8 - 3] = var_11;
                }
                /* vectorizable */
                for (unsigned short i_12 = 2; i_12 < 22; i_12 += 3) 
                {
                    arr_44 [4LL] [i_12] [i_12 + 1] [i_12] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */int) arr_22 [i_8] [i_12])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_1] [(unsigned short)9] [5ULL] [i_1])))))));
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_5 - 1] [i_5 - 1] [i_8 + 1])) ? (((/* implicit */int) arr_18 [i_5 - 2])) : (((/* implicit */int) arr_36 [i_8 - 3] [i_8 - 1] [i_8 - 3] [i_8]))));
                }
            }
            for (unsigned long long int i_13 = 1; i_13 < 22; i_13 += 3) 
            {
                var_33 ^= arr_29 [i_1] [(unsigned short)8] [i_1] [i_5] [i_1];
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 0; i_14 < 23; i_14 += 3) 
                {
                    for (unsigned char i_15 = 2; i_15 < 21; i_15 += 2) 
                    {
                        {
                            var_34 = ((unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_5 - 1] [i_15 - 2])) ? (((/* implicit */int) arr_12 [i_5 + 3] [i_15 + 2])) : (((/* implicit */int) arr_12 [i_5 - 3] [i_15 + 1]))));
                            var_35 = ((/* implicit */short) (~(max((((/* implicit */unsigned long long int) max((arr_23 [i_13]), (((/* implicit */long long int) arr_34 [i_1] [i_5] [i_13] [i_14] [i_15]))))), (min((((/* implicit */unsigned long long int) arr_6 [i_1] [i_5] [i_13])), (arr_4 [18U])))))));
                            var_36 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_1] [i_5 + 2] [i_13] [i_14] [i_15])) ? (((/* implicit */unsigned long long int) arr_7 [i_1] [i_5] [i_13 + 1])) : (arr_4 [i_1])))) || (((/* implicit */_Bool) arr_18 [i_13 - 1])))) ? (((((/* implicit */int) arr_42 [i_5] [i_5 + 2] [i_5 - 1])) / (((/* implicit */int) arr_42 [21ULL] [i_5 + 2] [i_5 - 1])))) : ((~(1002613714)))));
                            var_37 = ((/* implicit */short) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) arr_6 [i_1] [i_13] [(unsigned short)3])))))))));
                        }
                    } 
                } 
                var_38 = ((/* implicit */unsigned char) ((((/* implicit */long long int) 0)) >= (max((arr_23 [i_13]), (((/* implicit */long long int) arr_47 [i_13] [i_13] [i_13 + 1] [i_1] [i_1] [i_1]))))));
            }
            var_39 = ((/* implicit */unsigned short) (+(((((((/* implicit */int) arr_14 [i_1])) == (arr_33 [i_1] [i_1] [i_5]))) ? (((((/* implicit */int) arr_22 [i_1] [7LL])) * (((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_6 [i_1] [i_1] [i_5 + 1])) : (((/* implicit */int) arr_30 [0] [(_Bool)1] [0] [i_1] [i_5 - 1] [i_1]))))))));
        }
        for (unsigned int i_16 = 0; i_16 < 23; i_16 += 4) 
        {
            arr_55 [i_1] &= ((/* implicit */int) arr_47 [i_1] [i_16] [i_16] [i_16] [i_16] [i_1]);
            var_40 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) (unsigned char)104)) : (arr_11 [i_16] [i_16]))) / (min((var_0), (((/* implicit */int) arr_14 [i_16]))))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) arr_4 [i_17]))));
            arr_58 [i_1] [i_17] [12] = ((/* implicit */unsigned long long int) arr_23 [i_1]);
            var_42 = ((/* implicit */_Bool) arr_8 [i_1]);
        }
        for (signed char i_18 = 0; i_18 < 23; i_18 += 3) 
        {
            var_43 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-((+(arr_33 [i_1] [i_1] [i_18])))))) - (((((/* implicit */unsigned long long int) arr_54 [i_1] [i_1] [i_18])) - (arr_43 [i_1] [14ULL] [i_1] [i_18])))));
            var_44 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)14071)) >> (((-7082878028880261231LL) + (7082878028880261239LL)))))) ? (((/* implicit */unsigned long long int) (+(arr_59 [i_1] [(short)6] [i_1])))) : (arr_38 [i_1] [i_1] [i_18] [i_18]))))));
            /* LoopNest 2 */
            for (long long int i_19 = 0; i_19 < 23; i_19 += 3) 
            {
                for (long long int i_20 = 4; i_20 < 22; i_20 += 3) 
                {
                    {
                        arr_67 [i_19] [7] [i_19] [i_19] [7] = ((/* implicit */_Bool) min((arr_49 [i_1] [(_Bool)1] [i_19] [i_19]), (((unsigned long long int) arr_49 [i_20 - 1] [i_20 - 4] [i_20] [i_19]))));
                        var_45 = ((/* implicit */unsigned long long int) var_7);
                    }
                } 
            } 
            var_46 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_52 [i_1] [i_18] [i_18] [i_1] [i_1]))))) ? ((+(((/* implicit */int) arr_47 [i_18] [i_18] [i_18] [i_1] [i_1] [i_1])))) : (((((/* implicit */_Bool) arr_16 [i_18] [i_18] [i_1])) ? (arr_16 [i_18] [i_18] [i_1]) : (arr_16 [i_1] [i_18] [i_18])))));
            var_47 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) arr_36 [4] [i_18] [i_18] [4])) <= (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_22 [i_1] [i_18])) : (((/* implicit */int) var_11)))))))));
        }
    }
    /* vectorizable */
    for (signed char i_21 = 0; i_21 < 22; i_21 += 4) 
    {
        arr_70 [i_21] [i_21] = ((((/* implicit */_Bool) arr_27 [5ULL] [i_21] [i_21] [i_21])) ? (-7082878028880261238LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-18345))));
        arr_71 [i_21] = ((/* implicit */short) arr_5 [i_21] [i_21]);
        arr_72 [i_21] = ((/* implicit */unsigned short) arr_42 [(_Bool)1] [i_21] [i_21]);
    }
}
