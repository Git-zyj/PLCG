/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201980
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? ((+((+(var_0))))) : (((/* implicit */long long int) ((((/* implicit */int) max((var_8), (var_8)))) * (((/* implicit */int) var_18)))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 1) /* same iter space */
    {
        var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_0]))) ? (((((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */unsigned long long int) var_4))))) ? ((~(((/* implicit */int) arr_0 [i_0 - 1])))) : (((/* implicit */int) arr_0 [i_0 - 2])))) : (((/* implicit */int) ((_Bool) arr_2 [i_0])))));
        var_22 -= var_14;
    }
    /* vectorizable */
    for (unsigned char i_1 = 3; i_1 < 15; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1 - 1] = ((long long int) (-(((/* implicit */int) arr_0 [i_1]))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            for (unsigned short i_3 = 2; i_3 < 14; i_3 += 3) 
            {
                {
                    var_23 &= ((/* implicit */long long int) var_15);
                    var_24 = ((/* implicit */long long int) (+(((int) arr_2 [i_3 + 1]))));
                }
            } 
        } 
        arr_12 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_9 [i_1]) : (arr_2 [i_1])))) ? (((((/* implicit */int) var_4)) ^ (((/* implicit */int) arr_10 [i_1 - 2] [i_1] [i_1] [i_1])))) : (((((((/* implicit */int) arr_6 [i_1])) + (2147483647))) >> (((/* implicit */int) (_Bool)1))))));
    }
    /* vectorizable */
    for (unsigned char i_4 = 3; i_4 < 15; i_4 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_4 + 1])) ? (arr_2 [i_4]) : (((/* implicit */unsigned long long int) (-(-6901032613654927445LL)))))))));
        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (+(arr_5 [i_4 - 3]))))));
        /* LoopSeq 2 */
        for (unsigned int i_5 = 3; i_5 < 13; i_5 += 2) 
        {
            /* LoopNest 2 */
            for (short i_6 = 4; i_6 < 14; i_6 += 4) 
            {
                for (long long int i_7 = 0; i_7 < 16; i_7 += 1) 
                {
                    {
                        arr_24 [i_7] [13U] [i_7] [i_7] [i_4] [i_4] = ((arr_17 [i_4] [i_4] [i_4 - 2]) + (arr_17 [i_4 - 2] [i_4 - 1] [i_4]));
                        var_27 = ((/* implicit */int) (-(arr_16 [i_4 + 1])));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (short i_8 = 4; i_8 < 15; i_8 += 4) 
            {
                arr_28 [i_4] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_19)))) ? (arr_16 [i_8 + 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6901032613654927472LL)) ? (4552953145039979415LL) : (-6901032613654927472LL))))));
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    for (long long int i_10 = 0; i_10 < 16; i_10 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-1))));
                            var_29 *= ((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_4 - 2] [i_5 + 3])) % (((/* implicit */int) arr_8 [i_4 + 1] [i_5 - 3]))));
                            var_30 = ((/* implicit */long long int) ((unsigned short) (+(9223372036854775807LL))));
                            var_31 *= ((/* implicit */int) ((arr_15 [i_10]) == (arr_15 [i_9 + 1])));
                        }
                    } 
                } 
                var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) (-(((/* implicit */int) arr_4 [i_8 - 3] [i_5 - 3])))))));
                var_33 = ((/* implicit */unsigned long long int) arr_29 [i_4 - 1] [i_5 + 3] [i_5] [i_8 - 4] [i_8 + 1]);
                arr_33 [i_4] [i_4] [i_5] [i_8] = ((/* implicit */unsigned long long int) -2147483646);
            }
        }
        for (long long int i_11 = 1; i_11 < 15; i_11 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned int i_12 = 4; i_12 < 14; i_12 += 2) 
            {
                for (long long int i_13 = 0; i_13 < 16; i_13 += 1) 
                {
                    for (unsigned int i_14 = 0; i_14 < 16; i_14 += 3) 
                    {
                        {
                            var_34 = (~((~(-6901032613654927473LL))));
                            arr_44 [i_4 - 1] [i_12 - 1] [i_12] [i_14] |= (+(((/* implicit */int) (short)-3881)));
                            arr_45 [i_12] [i_4] [i_12 - 2] [i_13] [i_14] = ((/* implicit */long long int) (-(arr_9 [i_4 + 1])));
                            arr_46 [i_13] [i_12] [i_12] [i_12 + 2] [i_12 + 2] [i_12] [i_12] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 4294967290U)) ? (((/* implicit */int) arr_18 [i_11] [i_11])) : (arr_15 [i_11]))) < ((-(((/* implicit */int) arr_18 [i_14] [i_11 + 1]))))));
                        }
                    } 
                } 
            } 
            var_35 = ((/* implicit */int) ((short) (~(var_12))));
        }
    }
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 13; i_15 += 1) 
    {
        for (long long int i_16 = 0; i_16 < 13; i_16 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_17 = 0; i_17 < 13; i_17 += 2) 
                {
                    for (signed char i_18 = 3; i_18 < 12; i_18 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned char i_19 = 1; i_19 < 12; i_19 += 1) 
                            {
                                arr_62 [i_15] [i_15] [i_16] [i_18] [i_19] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_10 [i_18 + 1] [i_18 + 1] [i_18 + 1] [i_18 - 3]))) ? (((long long int) arr_22 [i_18 + 1] [i_18 + 1] [i_18 + 1] [i_18 - 3] [i_18 - 2])) : (((/* implicit */long long int) ((/* implicit */int) max((arr_22 [i_18 + 1] [i_18 + 1] [i_18 + 1] [i_18 - 3] [i_18 - 2]), (arr_22 [i_18 + 1] [i_18 + 1] [i_18 + 1] [i_18 - 3] [i_18 - 2])))))));
                                arr_63 [i_19 - 1] [(_Bool)1] [i_15] [(_Bool)1] [i_15] [i_15] [i_15] = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) ((long long int) -1036656923587378128LL))))));
                            }
                            for (unsigned char i_20 = 1; i_20 < 10; i_20 += 2) 
                            {
                                var_36 -= ((/* implicit */unsigned char) ((((-6901032613654927441LL) + (9223372036854775807LL))) >> (((min((((/* implicit */int) arr_37 [i_18 - 3] [i_20 + 1])), ((-(((/* implicit */int) (signed char)-97)))))) - (41)))));
                                var_37 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) max((var_10), (arr_57 [i_15] [i_20])))) ? (((/* implicit */int) var_18)) : (((int) arr_11 [i_16] [i_16] [i_16])))));
                                var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_23 [6LL] [i_16] [i_17] [i_18] [i_17] [i_20 + 2])) ? (((/* implicit */int) arr_23 [i_15] [i_16] [i_15] [i_15] [i_15] [i_15])) : (((/* implicit */int) arr_23 [i_20] [i_17] [i_17] [(unsigned char)12] [i_17] [i_15])))) >> (((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)1513)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_23 [i_15] [i_17] [i_17] [i_16] [i_18 - 3] [i_15]))))) ^ (((((/* implicit */_Bool) -242912638)) ? (var_12) : (((/* implicit */unsigned long long int) var_13)))))) - (6308211741903175593ULL))))))));
                            }
                            arr_66 [i_15] = ((/* implicit */short) (-((-(min((((/* implicit */unsigned long long int) arr_6 [i_15])), (3372791646333721973ULL)))))));
                        }
                    } 
                } 
                arr_67 [i_15] [i_15] = ((/* implicit */long long int) min((((/* implicit */int) ((((((/* implicit */_Bool) -381186271)) ? (arr_9 [i_15]) : (((/* implicit */unsigned long long int) -242912635)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_52 [i_15] [i_15] [i_15]))))))), (((((/* implicit */_Bool) arr_41 [i_16] [i_15] [i_16] [i_16] [i_15] [i_15])) ? (((/* implicit */int) arr_41 [i_15] [i_15] [i_15] [i_16] [i_15] [i_16])) : (((/* implicit */int) var_1))))));
            }
        } 
    } 
    var_39 = ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (unsigned char)245))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) & (66846720U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ^ (var_17));
    var_40 = ((/* implicit */long long int) ((((unsigned int) (~(((/* implicit */int) var_16))))) != (((/* implicit */unsigned int) ((/* implicit */int) min((var_1), (var_9)))))));
}
