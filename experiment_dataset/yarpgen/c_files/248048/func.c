/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248048
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            var_14 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))) + (var_7));
            var_15 = ((/* implicit */short) var_2);
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((_Bool) var_12));
        }
        /* LoopNest 2 */
        for (short i_2 = 4; i_2 < 20; i_2 += 3) 
        {
            for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                {
                    var_16 -= arr_3 [i_2 + 1] [i_2 - 3];
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        var_17 = var_9;
                        /* LoopSeq 4 */
                        for (int i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
                        {
                            var_18 += ((/* implicit */long long int) var_9);
                            var_19 &= ((/* implicit */unsigned char) ((long long int) arr_13 [i_2] [i_2 - 1] [i_2] [i_2 + 1]));
                            var_20 = ((/* implicit */unsigned short) arr_3 [i_0] [i_0]);
                        }
                        for (int i_6 = 0; i_6 < 22; i_6 += 4) /* same iter space */
                        {
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_2 - 1] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */int) (!(arr_3 [i_0] [i_6])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_6])))))));
                            arr_20 [i_0] = ((/* implicit */long long int) arr_14 [i_0] [i_2]);
                            var_22 = ((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_0]);
                            var_23 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_14 [i_0] [i_2]))));
                        }
                        for (int i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
                        {
                            arr_23 [i_0] [i_0] [i_0] [i_0] [i_7] [i_4] [i_7] &= ((/* implicit */long long int) ((((arr_3 [i_0] [i_0]) ? (arr_12 [i_3] [i_3] [i_7]) : (((/* implicit */unsigned long long int) 4294967275U)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
                            arr_24 [i_3] [i_3] [i_3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_2)))) <= (((3166767288U) >> (((16738643256585042847ULL) - (16738643256585042816ULL)))))));
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_7 [i_0])) : (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (arr_8 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_17 [i_0] [i_3] [i_3] [i_0] [i_0]))))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 4) 
                        {
                            var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967271U)) ? (arr_13 [i_3] [i_3] [i_3] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_4] [i_8])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 12U)) && (((/* implicit */_Bool) 1470571262U)))))) : (((unsigned int) arr_3 [i_8] [i_4])));
                            var_26 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)43502)) ? (((((/* implicit */_Bool) var_10)) ? (arr_13 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) arr_1 [i_8])))) : (((/* implicit */long long int) (~(26U))))));
                        }
                    }
                }
            } 
        } 
        var_27 = ((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_0] [i_0])) <= (((/* implicit */int) arr_14 [i_0] [i_0]))));
    }
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
    {
        var_28 = ((/* implicit */unsigned int) ((min((((/* implicit */int) arr_4 [i_9 - 1] [i_9] [i_9 - 1])), (arr_25 [i_9] [i_9] [i_9]))) <= (((/* implicit */int) ((((/* implicit */int) ((signed char) (short)-26627))) != (((/* implicit */int) (unsigned char)1)))))));
        var_29 = ((/* implicit */unsigned char) (((~(((((/* implicit */_Bool) (unsigned char)94)) ? (((/* implicit */int) (unsigned short)22268)) : (arr_25 [i_9] [i_9] [i_9]))))) * (((/* implicit */int) ((unsigned short) ((var_12) == (((/* implicit */unsigned long long int) 7725924646433922102LL))))))));
    }
    for (unsigned long long int i_10 = 3; i_10 < 20; i_10 += 2) 
    {
        var_30 = ((/* implicit */short) 153989213U);
        arr_33 [i_10] [i_10] = ((((/* implicit */_Bool) ((arr_15 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]) + (arr_15 [i_10] [i_10] [i_10 - 1] [i_10 - 1] [i_10] [i_10])))) ? (((/* implicit */unsigned int) min((arr_15 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10 - 1]), (arr_15 [i_10] [i_10 + 1] [i_10] [i_10] [i_10] [i_10])))) : (((((/* implicit */_Bool) 3754356468U)) ? (4294967294U) : (var_0))));
        /* LoopSeq 1 */
        for (unsigned short i_11 = 2; i_11 < 18; i_11 += 4) 
        {
            var_31 = ((/* implicit */unsigned int) ((((arr_26 [i_10 - 2] [i_11] [i_10 - 2] [i_11 + 1] [i_11 + 1] [i_10] [i_10 - 2]) >> (((4294967292U) - (4294967264U))))) * (((arr_26 [i_11] [i_11 + 3] [i_11] [i_11 + 1] [i_11 + 3] [i_10 - 2] [i_10 - 2]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
            var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((4294967279U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_10 + 1])))))) < (((((/* implicit */_Bool) arr_18 [i_11] [i_11])) ? (((/* implicit */int) (short)32765)) : (((/* implicit */int) arr_4 [i_11 + 2] [i_11 + 1] [i_10 - 1]))))));
            var_33 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) var_3))));
            var_34 = ((/* implicit */_Bool) ((arr_26 [i_11] [i_11] [i_11] [i_10 - 1] [i_11] [i_10 - 1] [i_10]) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_7 [i_11]) <= (((/* implicit */unsigned int) arr_15 [i_10] [i_10] [i_11] [i_10] [i_10] [i_11])))))) <= (((unsigned int) var_1))))))));
            var_35 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_32 [i_11 + 3])) < (arr_2 [i_10 - 3]))))));
        }
        arr_36 [i_10] [i_10] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_10] [i_10] [i_10 - 2])) <= (((/* implicit */int) arr_34 [i_10 - 1] [i_10 - 3])))))) : (18446744073709551615ULL)));
    }
    for (unsigned int i_12 = 0; i_12 < 22; i_12 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_14 = 0; i_14 < 22; i_14 += 4) 
            {
                arr_45 [i_12] [i_13] [i_13] [i_12] = ((/* implicit */unsigned int) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) << (((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (6ULL)))) ? (((/* implicit */unsigned long long int) min((-7725924646433922100LL), (((/* implicit */long long int) var_6))))) : (((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)63))))))) - (10720819427275629516ULL)))));
                var_36 = ((/* implicit */int) var_9);
            }
            for (unsigned short i_15 = 3; i_15 < 19; i_15 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_16 = 0; i_16 < 22; i_16 += 2) 
                {
                    var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_12] [i_12] [i_12] [i_12])) ? (arr_42 [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */_Bool) 2199023255551ULL)) ? (((/* implicit */int) arr_4 [i_12] [i_13] [i_15])) : (((/* implicit */int) var_10)))) : (((/* implicit */int) ((_Bool) (_Bool)1))))))));
                    arr_51 [i_12] [i_12] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_15 + 2] [i_15 + 2] [i_15 + 2] [i_15 + 2] [i_15 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (6ULL)));
                }
                arr_52 [i_12] [i_12] [i_13] [i_12] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) (_Bool)1)))));
                arr_53 [i_12] [i_13] [i_13] [i_15] = ((/* implicit */short) (signed char)-98);
            }
            /* vectorizable */
            for (unsigned short i_17 = 3; i_17 < 19; i_17 += 1) /* same iter space */
            {
                var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) ((((/* implicit */int) ((arr_43 [i_12]) <= (1576096165136157359LL)))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_55 [i_13] [i_13] [i_12]))))))))));
                /* LoopSeq 1 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    var_39 *= ((/* implicit */long long int) ((((/* implicit */int) arr_57 [i_13])) >> (((4294967295U) - (4294967273U)))));
                    var_40 = ((/* implicit */short) var_1);
                    var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 8457816068299215744LL)) < (arr_44 [i_17 - 3] [i_17] [i_17 + 2])));
                }
                var_42 *= ((/* implicit */unsigned int) ((unsigned char) 3788743535U));
            }
            arr_59 [i_12] [i_12] [i_12] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_13 [i_12] [i_12] [i_13] [i_13])) ? (arr_13 [i_12] [i_12] [i_12] [i_12]) : (arr_13 [i_12] [i_12] [i_13] [i_13]))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_12] [i_13])) ? (((/* implicit */int) arr_28 [i_12] [i_13])) : (((/* implicit */int) arr_28 [i_13] [i_12])))))));
            arr_60 [i_13] [i_13] [i_13] &= ((/* implicit */signed char) (-(var_13)));
            var_43 = ((/* implicit */short) (!(((/* implicit */_Bool) ((long long int) var_5)))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_19 = 0; i_19 < 22; i_19 += 2) 
        {
            var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_43 [i_12]) - (arr_43 [i_19])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17199))) : (min((var_5), (((/* implicit */unsigned long long int) arr_43 [i_19]))))));
            arr_63 [i_12] = ((/* implicit */_Bool) ((unsigned int) arr_18 [i_12] [i_12]));
            /* LoopSeq 1 */
            for (int i_20 = 0; i_20 < 22; i_20 += 2) 
            {
                var_45 = ((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) var_0)))) || (((/* implicit */_Bool) ((unsigned long long int) arr_66 [i_12] [i_12] [i_19] [i_20]))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_15 [i_19] [i_19] [i_19] [i_19] [i_12] [i_12])))))) <= (min((arr_43 [i_20]), (((/* implicit */long long int) (unsigned short)58710))))))) : (((/* implicit */int) ((unsigned short) var_12)))));
                arr_67 [i_19] [i_19] [i_12] = ((/* implicit */unsigned int) ((unsigned short) (_Bool)1));
                var_46 = ((/* implicit */unsigned short) max((((var_9) * (((/* implicit */unsigned int) ((/* implicit */int) arr_66 [i_12] [i_12] [i_20] [i_20]))))), (((/* implicit */unsigned int) (!(arr_66 [i_12] [i_19] [i_19] [i_12]))))));
                arr_68 [i_20] = ((/* implicit */short) -11LL);
            }
            var_47 = ((/* implicit */short) min((((arr_27 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19]) ? (((/* implicit */int) arr_27 [i_19] [i_19] [i_19] [i_19] [i_19] [i_12])) : (((/* implicit */int) arr_27 [i_12] [i_12] [i_12] [i_19] [i_19] [i_12])))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_19]))) & (var_7)))))))));
        }
        /* LoopSeq 1 */
        for (unsigned int i_21 = 0; i_21 < 22; i_21 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_22 = 0; i_22 < 22; i_22 += 4) 
            {
                for (short i_23 = 0; i_23 < 22; i_23 += 4) 
                {
                    for (int i_24 = 0; i_24 < 22; i_24 += 4) 
                    {
                        {
                            var_48 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_19 [i_12] [i_21] [i_23])) < (((((/* implicit */int) (short)14555)) << (((((/* implicit */int) var_3)) - (1870)))))))) << (((((((/* implicit */_Bool) arr_50 [i_12] [i_12] [i_21] [i_22] [i_21] [i_12])) ? (((/* implicit */int) arr_18 [i_21] [i_22])) : (arr_50 [i_12] [i_12] [i_12] [i_12] [i_12] [i_24]))) + (23550)))));
                            var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) ((6833031354986075331ULL) + (((/* implicit */unsigned long long int) -4122583998818471431LL))))) ? (((/* implicit */int) min((arr_6 [i_21] [i_21] [i_21]), (((/* implicit */short) arr_40 [i_21]))))) : (((/* implicit */int) var_1)))) : (((((/* implicit */int) arr_66 [i_12] [i_12] [i_12] [i_12])) / (((/* implicit */int) var_8))))));
                        }
                    } 
                } 
            } 
            var_50 = 12ULL;
            var_51 = ((/* implicit */signed char) ((_Bool) min((6U), (1856413540U))));
        }
        arr_79 [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))) <= (((((/* implicit */_Bool) -1610110973738849307LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_64 [i_12] [i_12] [i_12]))) : (var_12)))))) : (((/* implicit */int) ((((/* implicit */int) arr_73 [i_12])) < (((/* implicit */int) arr_73 [i_12])))))));
    }
    var_52 &= ((/* implicit */long long int) var_9);
}
