/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42668
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
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (var_12)))) : (((var_11) - (var_1))))), (((/* implicit */unsigned long long int) ((long long int) (unsigned char)38)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_18 = (-(((((/* implicit */_Bool) arr_2 [i_0])) ? (var_9) : (((/* implicit */unsigned long long int) 0)))));
            /* LoopSeq 2 */
            for (int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                var_19 = ((/* implicit */int) var_14);
                arr_10 [i_0] [i_1] [11LL] = var_9;
                var_20 = ((/* implicit */int) 281406257233920LL);
            }
            for (int i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    var_21 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_14)) * (((/* implicit */int) arr_4 [i_1]))))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_5 = 2; i_5 < 15; i_5 += 4) 
                    {
                        arr_19 [i_0] [i_0] [i_0] [i_4] [i_5] [i_0 + 1] = ((/* implicit */unsigned char) 35865103);
                        var_22 = var_9;
                        var_23 = ((/* implicit */int) var_15);
                        var_24 = var_8;
                    }
                    for (long long int i_6 = 1; i_6 < 14; i_6 += 3) /* same iter space */
                    {
                        var_25 = ((/* implicit */_Bool) (~(-1)));
                        var_26 = ((((/* implicit */_Bool) -1)) ? (arr_18 [11ULL] [i_6 + 1] [2] [i_4] [i_6 + 1] [i_4] [i_3]) : (((var_8) | (var_6))));
                        var_27 ^= ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) 35865103)) : (var_8));
                    }
                    for (long long int i_7 = 1; i_7 < 14; i_7 += 3) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0 - 1] [2] [i_0 - 3] [i_0 - 1] [i_0 + 1] [i_0 - 1])) ? (arr_14 [i_0 - 1] [i_0 - 1] [i_0] [(unsigned char)10] [i_0 - 1] [i_0 - 1]) : (arr_14 [i_0 - 2] [3] [i_0 - 1] [i_0 - 1] [i_0] [i_0])));
                        var_29 = ((/* implicit */unsigned long long int) arr_16 [i_4] [i_1] [i_7 + 3] [i_1] [4] [i_0 - 1]);
                    }
                    for (long long int i_8 = 1; i_8 < 14; i_8 += 3) /* same iter space */
                    {
                        arr_28 [i_0] [i_0 - 3] = arr_25 [i_8] [i_1] [i_3] [i_1] [i_0 + 1];
                        arr_29 [i_0] [i_1] [i_1] [i_3] [i_3] [i_3] [0LL] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
                        var_30 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -35865106)))))) * ((-(17690827830009326909ULL))));
                        arr_30 [i_0] = ((/* implicit */int) (-(var_2)));
                    }
                    var_31 = ((/* implicit */long long int) ((arr_22 [i_0] [i_0 - 3] [i_0 - 3] [(unsigned char)13] [i_1] [i_4]) ? (((/* implicit */int) arr_22 [i_0] [i_0 - 2] [i_0 - 1] [i_3] [i_4] [i_4])) : (((/* implicit */int) arr_22 [i_0] [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_4] [i_0 - 1]))));
                    /* LoopSeq 1 */
                    for (int i_9 = 0; i_9 < 17; i_9 += 2) 
                    {
                        var_32 = ((/* implicit */long long int) ((unsigned char) arr_12 [(unsigned char)9] [i_0] [(unsigned char)9] [i_0 - 3]));
                        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_3 [i_0 - 2]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (var_0) : (((((/* implicit */_Bool) 12927826332475639936ULL)) ? (arr_17 [i_3] [10LL] [i_3] [i_1] [i_1] [10LL]) : (((/* implicit */unsigned long long int) arr_14 [i_0 - 3] [i_1] [i_3] [i_4] [i_1] [i_3]))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 2; i_10 < 15; i_10 += 3) 
                    {
                        arr_35 [i_0] [i_3] [i_1] [i_0] = ((/* implicit */int) arr_1 [10ULL]);
                        arr_36 [i_0] [i_0] [i_3] [i_4] [2ULL] = ((((/* implicit */_Bool) (~(var_3)))) ? (var_1) : (var_2));
                    }
                }
                var_34 = ((/* implicit */int) var_4);
                /* LoopSeq 1 */
                for (unsigned long long int i_11 = 1; i_11 < 15; i_11 += 2) 
                {
                    var_35 = (~(((((/* implicit */int) var_10)) & (((/* implicit */int) var_10)))));
                    /* LoopSeq 1 */
                    for (long long int i_12 = 2; i_12 < 16; i_12 += 2) 
                    {
                        var_36 = ((/* implicit */int) var_11);
                        arr_41 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_16)) != (((/* implicit */int) (_Bool)1))));
                        arr_42 [i_0] [i_0 - 3] [i_0 - 2] [i_0] [i_0] = ((/* implicit */unsigned char) -2820282012992565399LL);
                        arr_43 [i_0] = ((/* implicit */int) 432278897115509801LL);
                        var_37 = ((((/* implicit */_Bool) arr_20 [i_11 + 2] [i_0 + 1] [i_3] [i_11 + 2] [i_0 + 1])) ? (6ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_0]))));
                    }
                }
                /* LoopNest 2 */
                for (long long int i_13 = 1; i_13 < 15; i_13 += 4) 
                {
                    for (int i_14 = 0; i_14 < 17; i_14 += 3) 
                    {
                        {
                            var_38 = (~(arr_15 [i_13 + 1]));
                            var_39 = ((((/* implicit */_Bool) var_13)) ? ((-(var_9))) : (((((/* implicit */_Bool) arr_16 [i_0 + 1] [i_1] [i_3] [15ULL] [i_0] [i_14])) ? (((/* implicit */unsigned long long int) arr_15 [2])) : (arr_3 [i_3]))));
                            arr_50 [i_0] [i_1] [i_0 - 3] [i_3] [i_14] = ((/* implicit */int) (+(arr_37 [i_0 + 1] [i_0])));
                        }
                    } 
                } 
                arr_51 [i_0] [i_0] [i_0 - 1] [i_0 + 1] = ((/* implicit */_Bool) var_11);
            }
        }
        arr_52 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1504224973)) ? (18446744073709551609ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)24)))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_15 = 0; i_15 < 19; i_15 += 4) 
    {
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            {
                var_40 = ((/* implicit */_Bool) min((((-1265409697365172131LL) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_4)))))))), (((/* implicit */long long int) max((arr_56 [i_15] [i_15]), (((/* implicit */int) arr_54 [i_15])))))));
                var_41 = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((min((-35865106), (1073741824))), (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_56 [i_16] [i_15])) + (arr_53 [i_15])))) ? (min((((/* implicit */unsigned long long int) arr_55 [i_15] [i_15])), (var_8))) : (min((var_11), (((/* implicit */unsigned long long int) arr_56 [i_15] [i_15]))))))));
                var_42 = ((/* implicit */unsigned long long int) ((var_6) > (min(((+(var_0))), (var_0)))));
                var_43 *= ((/* implicit */unsigned long long int) arr_54 [i_16]);
                /* LoopNest 3 */
                for (int i_17 = 0; i_17 < 19; i_17 += 3) 
                {
                    for (int i_18 = 0; i_18 < 19; i_18 += 4) 
                    {
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            {
                                var_44 = ((/* implicit */int) max((var_44), (((/* implicit */int) ((((/* implicit */_Bool) max((((arr_63 [i_19] [i_18] [i_17] [i_16]) | (((/* implicit */unsigned long long int) arr_66 [i_15] [i_16] [i_17] [i_15] [i_17])))), (min((var_11), (((/* implicit */unsigned long long int) var_16))))))) ? (((unsigned long long int) var_9)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))))));
                                var_45 = ((27ULL) >> (min((((((/* implicit */_Bool) arr_61 [i_19] [i_18] [i_17] [i_16] [i_15])) ? (var_6) : (var_9))), (((unsigned long long int) 0ULL)))));
                                arr_67 [11ULL] [i_16] [i_16] = var_5;
                                var_46 ^= ((((/* implicit */_Bool) arr_66 [i_15] [5ULL] [i_15] [i_15] [i_15])) ? (max((var_2), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_66 [i_15] [i_16] [i_17] [i_16] [i_19])) < (16703009221043362347ULL)))))) : (((unsigned long long int) (-(((/* implicit */int) (_Bool)1))))));
                                arr_68 [i_15] [i_16] [i_15] [i_17] [i_17] [i_15] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_9) + (((/* implicit */unsigned long long int) max((arr_66 [i_18] [i_16] [i_16] [i_16] [i_17]), (((/* implicit */long long int) arr_54 [i_15]))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
