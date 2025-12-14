/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228246
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 1] [i_0])) ? (788457246) : (((/* implicit */int) arr_4 [i_0] [i_1 + 1] [i_0]))))))));
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    arr_9 [i_2] [i_1] [i_1] = ((/* implicit */short) arr_4 [0LL] [12ULL] [4U]);
                    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((unsigned long long int) ((min((2147483647), (((/* implicit */int) arr_7 [i_0])))) % ((~(((/* implicit */int) arr_7 [i_0]))))))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!((_Bool)1))) ? (((((/* implicit */_Bool) (signed char)-109)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2]))) : (arr_3 [7] [7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)9)))))) ? ((-(0LL))) : (((/* implicit */long long int) (-(arr_8 [i_0] [i_0] [i_2] [i_0]))))));
                        var_14 = ((/* implicit */unsigned char) (~((-(((/* implicit */int) arr_13 [i_1 - 2]))))));
                    }
                    for (int i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
                        {
                            var_15 = ((/* implicit */signed char) min((min((min((var_4), (((/* implicit */long long int) 788457258)))), (arr_12 [i_1 + 2] [i_1 + 2] [i_5] [i_5] [i_5]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 + 2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_1 - 1])))))));
                            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) max(((~((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) (signed char)-100)))))));
                            var_17 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_5] [0ULL])) ? (arr_8 [i_0] [i_1] [i_4] [(short)22]) : (arr_8 [i_0] [i_1 - 1] [i_0] [i_0]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5)))))));
                        }
                        for (long long int i_6 = 2; i_6 < 23; i_6 += 1) 
                        {
                            arr_22 [i_0] [i_2] [i_0] = ((/* implicit */_Bool) min((((unsigned int) 4177434432U)), (((/* implicit */unsigned int) ((arr_18 [i_0] [i_0] [i_1 - 2] [i_4] [i_6 - 2]) < (arr_18 [i_0] [i_1] [i_1 + 2] [i_0] [i_6 + 1]))))));
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)818)), (18446744073709551615ULL)))) ? (min((18446744073709551614ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) -5162228185154303607LL))));
                            arr_23 [i_0] [i_0] [i_0] [i_4] [i_4] [i_2] [i_6] = var_3;
                            arr_24 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
                        }
                        for (unsigned short i_7 = 1; i_7 < 22; i_7 += 4) 
                        {
                            arr_27 [i_0] [i_4] [i_2] = ((/* implicit */unsigned long long int) ((signed char) max((arr_8 [i_2] [i_2] [i_2] [i_1 - 1]), (((/* implicit */unsigned int) arr_17 [i_1 - 2])))));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((788457258) - (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) arr_1 [i_1 + 1])) : (((/* implicit */int) max(((unsigned char)0), (((/* implicit */unsigned char) arr_7 [i_2])))))))) == (min((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_25 [i_2])) : (((/* implicit */int) arr_5 [i_0] [i_2]))))), (max((var_7), (((/* implicit */unsigned int) 331543161))))))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 1) 
                        {
                            arr_30 [i_0] [i_4] [i_2] [i_1] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (-(arr_20 [i_0] [i_1] [i_1] [i_1] [i_1 - 1]))))));
                        }
                        var_21 += arr_6 [i_4] [i_1 - 2] [i_1 - 1];
                        var_22 = ((/* implicit */signed char) 5064402028188780169ULL);
                    }
                    for (unsigned int i_9 = 0; i_9 < 25; i_9 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (788457241)));
                        arr_33 [i_0] [i_0] [i_2] [i_9] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 13382342045520771446ULL)))) ? (((/* implicit */unsigned long long int) -2147483646)) : (((((/* implicit */_Bool) min((-105068086), (((/* implicit */int) arr_16 [i_2] [i_1] [i_1] [i_9]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_10 [i_0] [i_1] [i_1] [(signed char)14]), (((/* implicit */short) (unsigned char)15)))))) : (arr_3 [i_1] [(unsigned char)9])))));
                    }
                }
                for (int i_10 = 0; i_10 < 25; i_10 += 3) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_11 = 0; i_11 < 25; i_11 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_26 [i_11] [i_0] [i_0] [i_0] [i_0])) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_0] [(_Bool)1] [i_1 + 1])))))));
                        var_25 |= ((/* implicit */unsigned short) 788457241);
                        var_26 = ((/* implicit */signed char) arr_39 [i_0] [i_0] [i_0]);
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 0; i_12 < 25; i_12 += 4) 
                    {
                        var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_28 [i_1] [(_Bool)1] [i_1] [(_Bool)1] [i_1] [i_1] [i_1 + 1])), (arr_40 [i_0] [i_0] [(signed char)9] [i_0] [i_0] [i_0]))))));
                        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((max((-1170961269068866441LL), (((/* implicit */long long int) (_Bool)1)))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0])))))))))));
                        var_29 |= ((/* implicit */int) 65535U);
                    }
                }
                /* vectorizable */
                for (unsigned short i_13 = 0; i_13 < 25; i_13 += 4) 
                {
                    arr_49 [i_0] = ((/* implicit */unsigned short) arr_44 [i_0] [i_0]);
                    var_30 = ((/* implicit */unsigned char) 9944263064714983699ULL);
                    var_31 = ((/* implicit */unsigned char) arr_29 [i_0] [i_0] [i_1 - 1] [i_0] [i_13] [i_0] [i_1 - 1]);
                }
                var_32 *= ((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_6 [i_1 - 2] [i_1 + 2] [i_0]))))), (arr_6 [i_1 - 2] [i_1] [i_0])));
            }
        } 
    } 
    var_33 = ((/* implicit */_Bool) var_3);
    /* LoopNest 3 */
    for (long long int i_14 = 0; i_14 < 22; i_14 += 4) 
    {
        for (unsigned int i_15 = 0; i_15 < 22; i_15 += 2) 
        {
            for (signed char i_16 = 0; i_16 < 22; i_16 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_17 = 3; i_17 < 21; i_17 += 2) 
                    {
                        for (unsigned short i_18 = 0; i_18 < 22; i_18 += 3) 
                        {
                            {
                                var_34 = ((/* implicit */long long int) arr_63 [i_14] [i_16]);
                                var_35 -= min((((/* implicit */long long int) ((_Bool) 4024608551238318137LL))), (min((((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_14] [23LL] [i_17] [i_14])) < (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) arr_15 [i_14] [i_15] [2] [i_17] [i_17] [i_18])) ? (arr_41 [i_17] [i_17 - 1] [i_17] [i_17] [i_17]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_14]))))))));
                            }
                        } 
                    } 
                    var_36 = ((/* implicit */_Bool) min((var_36), ((!(((/* implicit */_Bool) ((1030806339) << (((((/* implicit */int) arr_34 [i_14] [i_14] [i_14])) - (15959))))))))));
                }
            } 
        } 
    } 
}
