/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222322
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
    var_14 ^= ((/* implicit */short) var_10);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 7; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    arr_7 [i_0] = ((/* implicit */unsigned long long int) ((int) arr_2 [i_2 - 1] [i_0] [i_0]));
                    var_15 = ((/* implicit */long long int) var_10);
                    var_16 *= (short)32256;
                }
                for (short i_3 = 0; i_3 < 11; i_3 += 4) /* same iter space */
                {
                    arr_10 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */int) (unsigned short)48751);
                    arr_11 [i_0] [(_Bool)1] [i_3] [0] = ((/* implicit */unsigned char) ((_Bool) ((-800010632) / (((/* implicit */int) arr_8 [i_1 - 2] [i_1 + 4] [i_1 - 2])))));
                    arr_12 [i_0] [i_0] = ((/* implicit */unsigned short) var_9);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 10; i_4 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~(arr_3 [i_1 + 4] [i_1 - 1])));
                            arr_19 [(unsigned short)5] [i_0] [i_4] [i_5] = ((/* implicit */int) ((_Bool) arr_5 [i_0] [i_0] [i_4 - 2]));
                        }
                        for (unsigned char i_6 = 3; i_6 < 10; i_6 += 2) 
                        {
                            arr_23 [(unsigned char)0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((int) -800010644));
                            arr_24 [i_0] [i_1] [(_Bool)1] [i_4] [2] = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_0]))));
                        }
                        for (signed char i_7 = 0; i_7 < 11; i_7 += 2) 
                        {
                            var_17 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)84)) % (((/* implicit */int) arr_13 [i_0] [i_1 + 2] [i_1 + 4] [i_0]))));
                            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) var_7))));
                        }
                        arr_29 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) -2137906779));
                        var_19 = ((/* implicit */unsigned long long int) arr_26 [i_3] [i_0] [i_4 - 2] [i_4] [i_4]);
                    }
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */signed char) var_2);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_9 = 0; i_9 < 11; i_9 += 2) 
                        {
                            arr_34 [(unsigned char)3] [(unsigned char)3] [i_0] [i_8 - 1] [i_9] = ((/* implicit */short) ((unsigned char) ((var_4) % (((/* implicit */int) arr_21 [i_9] [i_8] [i_3] [i_0] [i_0])))));
                            arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((short) (unsigned short)13211))) ? (arr_2 [i_8 - 1] [i_0] [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_1 - 2] [i_1 + 3] [i_1 - 1] [i_8 - 1] [i_8 - 1]))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_10 = 2; i_10 < 8; i_10 += 2) /* same iter space */
                        {
                            var_21 += ((/* implicit */unsigned char) arr_14 [i_0] [i_8 - 1] [i_8 - 1] [i_10]);
                            arr_38 [i_0] [i_0] [i_1] [i_3] [i_1] [i_0] = ((/* implicit */_Bool) ((unsigned char) arr_15 [i_8] [i_8] [i_8 - 1] [i_8 - 1] [i_8]));
                        }
                        for (unsigned long long int i_11 = 2; i_11 < 8; i_11 += 2) /* same iter space */
                        {
                            arr_41 [i_0] [1U] [i_3] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_9 [i_0] [(unsigned char)9] [i_3]), ((unsigned char)41)))) ? (arr_4 [i_3] [i_8 - 1]) : (((/* implicit */unsigned long long int) ((long long int) var_2)))))) ? (max((var_9), (((/* implicit */unsigned int) arr_27 [4LL] [i_11 + 3] [i_0] [i_11] [i_11 + 3] [i_11] [i_11 + 3])))) : (((/* implicit */unsigned int) ((int) arr_33 [i_1 - 2] [i_1 - 2] [i_0] [i_3] [i_8])))));
                            arr_42 [i_0] [3ULL] [i_0] [i_0] [3ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)52335)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23168))) : (arr_4 [i_1] [i_11 + 1])))) ? (((/* implicit */int) max(((unsigned char)11), (arr_5 [i_3] [i_0] [i_11])))) : (((/* implicit */int) arr_16 [(unsigned char)0] [i_8 - 1] [i_1 - 2] [(unsigned char)0] [i_0] [i_1 - 2] [i_0]))))) ? (max((min((-800010642), (((/* implicit */int) (unsigned char)152)))), (((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_1 + 4] [i_0] [i_0] [i_8] [i_0])) ? (((/* implicit */int) (unsigned short)13217)) : (((/* implicit */int) arr_30 [i_1] [i_0])))))) : (min((((/* implicit */int) arr_16 [i_0] [i_3] [i_3] [i_8] [i_0] [(short)5] [(unsigned char)2])), (-800010651)))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)253)) - (((((/* implicit */_Bool) ((long long int) arr_13 [i_0] [i_0] [i_3] [i_0]))) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */_Bool) arr_26 [i_11 - 1] [i_0] [i_3] [i_0] [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_5 [i_11] [i_0] [i_3]))))))));
                            arr_43 [(unsigned char)6] [i_1 - 2] [i_11] [i_1 - 2] &= ((/* implicit */unsigned char) ((int) -800010627));
                        }
                        arr_44 [i_0] [i_0] [i_3] [i_8] [i_8 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_3 [(_Bool)1] [i_1 - 1]), (((/* implicit */int) arr_20 [i_8 - 1] [i_8 - 1] [i_0] [i_0] [6ULL] [i_1 + 4]))))) ? ((+(((/* implicit */int) arr_20 [i_8 - 1] [i_1] [i_0] [i_0] [i_1 - 1] [i_1 + 4])))) : (((/* implicit */int) ((unsigned short) arr_3 [i_0] [i_1 + 4])))));
                        arr_45 [i_0] [i_8 - 1] [i_8 - 1] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_36 [i_0] [i_0] [i_1 + 3] [i_1] [i_8 - 1]))))) ? (max((((/* implicit */int) arr_36 [i_8] [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 1])), (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_3] [(short)1])) : (((/* implicit */int) arr_36 [i_8] [i_3] [5] [5] [5])))))) : (((/* implicit */int) var_2))));
                        /* LoopSeq 1 */
                        for (short i_12 = 1; i_12 < 9; i_12 += 4) 
                        {
                            arr_49 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)17414)), (arr_3 [3] [i_1 + 3])))) ? (((long long int) arr_3 [i_1] [i_1 + 3])) : (((/* implicit */long long int) max((((/* implicit */int) var_13)), (arr_3 [i_1] [i_1 + 4]))))));
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) var_4))));
                            arr_50 [i_0] [i_0] [i_0] [i_0] [i_8] [i_0] [10ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_12 + 2] [i_8 - 1] [2U] [i_12] [i_8 - 1] [i_8 - 1] [(_Bool)1])) ? (((((/* implicit */_Bool) arr_37 [i_1 + 3] [i_8 - 1] [i_12 + 1])) ? (((/* implicit */int) arr_28 [i_0] [i_1 + 2] [i_1 - 1])) : (((/* implicit */int) (unsigned char)15)))) : (((/* implicit */int) var_10))));
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_47 [i_0] [i_1] [i_13 - 1])) ? (var_4) : (((/* implicit */int) var_7)))) / (arr_40 [i_13] [(unsigned char)10] [(short)2] [i_13 - 1] [i_13 - 1])));
                        arr_53 [i_0] [i_0] [i_0] [i_3] [i_13 - 1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)114))));
                        var_25 = ((/* implicit */int) max((var_25), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_8 [i_0] [i_3] [i_13]))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)235)))) : (((/* implicit */int) arr_37 [i_1 + 2] [i_13 - 1] [(short)3]))))));
                    }
                }
                for (short i_14 = 0; i_14 < 11; i_14 += 4) /* same iter space */
                {
                    arr_57 [i_0] [i_0] [i_14] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_31 [i_0] [i_0] [3] [i_0] [3])) - (((var_4) * (((/* implicit */int) arr_0 [i_0]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_15 = 1; i_15 < 10; i_15 += 2) 
                    {
                        arr_60 [i_0] [i_1] [i_14] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) var_3))));
                        var_26 ^= ((/* implicit */unsigned long long int) ((long long int) ((long long int) arr_1 [(_Bool)1] [i_14])));
                        arr_61 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_52 [(signed char)10] [(signed char)10] [(signed char)10] [(signed char)10] [i_14] [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_21 [i_0] [i_1] [i_14] [i_14] [i_1]))))));
                        arr_62 [i_0] [i_0] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 3719058685232335806LL)) ? (((/* implicit */int) ((signed char) var_7))) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_15 + 1]))));
                        arr_63 [(unsigned char)3] [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_14 [i_0] [i_0] [i_1 - 1] [i_15 + 1]) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_14 [i_0] [i_1] [i_1 - 2] [i_15 + 1]))));
                    }
                    arr_64 [i_0] [i_14] = ((/* implicit */unsigned char) -800010644);
                    var_27 -= ((/* implicit */short) arr_15 [i_0] [i_1] [i_14] [i_1 + 2] [i_14]);
                }
                for (short i_16 = 0; i_16 < 11; i_16 += 4) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned short) arr_2 [i_1] [i_0] [i_1 - 1]))), (max((2020384935), (((/* implicit */int) arr_33 [i_1] [i_1] [i_0] [i_1 + 4] [i_1 + 4]))))));
                    arr_67 [i_0] = ((/* implicit */unsigned char) (+(((unsigned long long int) arr_55 [i_0] [i_1 - 1] [i_16]))));
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_0])) ? (arr_65 [i_1 - 1] [i_1 - 1] [i_16] [i_16]) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [i_16]))) : (arr_2 [i_0] [i_0] [i_0])));
                    arr_68 [i_0] [i_1] [i_0] [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)52299)) - (((/* implicit */int) var_10))))) ? (((/* implicit */long long int) max((((/* implicit */int) (_Bool)0)), (arr_52 [i_1] [i_1 + 2] [i_1] [i_1] [i_1] [i_0])))) : (((((/* implicit */_Bool) arr_28 [i_0] [i_1 - 2] [i_0])) ? (72057576858058752LL) : (((/* implicit */long long int) ((/* implicit */int) arr_66 [i_1 - 1] [i_16] [i_1 - 1] [i_0])))))));
                }
                /* LoopSeq 2 */
                for (signed char i_17 = 3; i_17 < 10; i_17 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_18 = 0; i_18 < 11; i_18 += 4) 
                    {
                        arr_74 [i_0] [i_0] [i_17 + 1] [i_18] &= ((((/* implicit */_Bool) 3719058685232335806LL)) ? ((~(((/* implicit */int) arr_16 [i_0] [i_1] [i_17] [0] [i_0] [i_1] [i_0])))) : (((/* implicit */int) ((unsigned short) var_7))));
                        var_30 = ((/* implicit */_Bool) ((arr_55 [i_1 + 4] [i_17] [i_1 + 4]) ? (1274237757) : (arr_52 [i_1 - 2] [i_17 - 1] [i_17] [i_17] [(unsigned char)9] [i_0])));
                    }
                    arr_75 [i_0] [i_0] [i_1] &= ((((int) (~(((/* implicit */int) arr_28 [i_1] [i_1] [i_17 - 1]))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) -800010651)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) : (var_0)))) ? (((/* implicit */int) ((arr_46 [i_1]) < (((/* implicit */unsigned int) var_5))))) : (var_4))));
                    arr_76 [i_0] [i_0] [9ULL] = ((short) max((((/* implicit */int) (unsigned char)9)), (((((/* implicit */int) (_Bool)1)) - (6)))));
                }
                for (signed char i_19 = 3; i_19 < 10; i_19 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_20 = 0; i_20 < 11; i_20 += 4) 
                    {
                        var_31 = ((/* implicit */unsigned long long int) 1048575LL);
                        arr_81 [i_0] [i_19] [i_0] [i_0] = ((/* implicit */signed char) min((8045086791514885897ULL), (2298524612209790579ULL)));
                    }
                    var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_54 [i_0]))))) ? ((+(var_4))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)80)))))));
                    var_33 = ((/* implicit */_Bool) var_6);
                    /* LoopSeq 1 */
                    for (long long int i_21 = 0; i_21 < 11; i_21 += 1) 
                    {
                        arr_86 [i_21] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) var_7);
                        var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) max((((/* implicit */int) arr_51 [i_0] [i_0] [i_19 - 2] [i_21])), (max((max((((/* implicit */int) var_11)), (var_4))), (((/* implicit */int) arr_9 [i_1] [i_1] [i_1])))))))));
                        arr_87 [i_0] [i_1] [i_19] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)117)) : (((/* implicit */int) var_1))))) && (((_Bool) arr_31 [i_0] [9] [i_0] [i_1 + 4] [i_19 - 3]))));
                    }
                }
                /* LoopNest 2 */
                for (int i_22 = 2; i_22 < 8; i_22 += 4) 
                {
                    for (unsigned char i_23 = 2; i_23 < 10; i_23 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (long long int i_24 = 2; i_24 < 10; i_24 += 2) 
                            {
                                arr_97 [i_0] [i_1] [i_0] [i_23] [1U] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 16148219461499761034ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [4ULL] [i_1 + 1] [i_0] [i_1] [i_1] [i_1 - 2]))) : (((var_10) ? (var_9) : (arr_2 [i_0] [i_0] [i_1 - 1]))))), (((((/* implicit */_Bool) arr_36 [i_1 + 3] [i_22 - 2] [2ULL] [i_23] [i_23 + 1])) ? (((unsigned int) arr_93 [i_0] [i_1 - 1] [i_22 - 2] [(short)5])) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)253)))))));
                                arr_98 [i_0] [i_0] [i_1] [i_22 - 1] [2ULL] [i_24 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (var_2)))) ? (((/* implicit */int) arr_73 [i_24] [i_1] [i_22 + 3] [i_1])) : (((/* implicit */int) arr_73 [i_0] [3] [3] [i_24 + 1]))))) ? ((~(((((/* implicit */_Bool) (short)5406)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10)))))) : (((/* implicit */int) var_6))));
                            }
                            for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
                            {
                                var_35 = ((/* implicit */int) max((min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_15 [(signed char)8] [i_1 - 2] [i_22 - 2] [i_1 - 2] [i_25 - 1]))))), (var_9))), (((/* implicit */unsigned int) ((unsigned char) 707519254)))));
                                arr_103 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) -1048562LL))) ? (min((2147483645), (((/* implicit */int) var_3)))) : (((/* implicit */int) ((((/* implicit */int) arr_96 [i_0])) < (((/* implicit */int) arr_70 [i_0] [i_22 - 1])))))))) % (((((/* implicit */_Bool) (unsigned char)104)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_70 [i_0] [(_Bool)1])))) : (arr_89 [i_1 - 2] [i_22 + 1] [i_0] [i_25 - 1])))));
                                var_36 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)221)) : (((/* implicit */int) (unsigned short)31))))) ? (max((var_0), (((/* implicit */int) (unsigned char)57)))) : (((/* implicit */int) ((short) (unsigned short)58752)))))) ? (((/* implicit */unsigned long long int) ((int) var_3))) : (arr_89 [i_0] [i_22] [i_22] [i_25 - 1])));
                            }
                            var_37 = ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) -1992552751)) ? (var_0) : (arr_85 [i_0] [i_1 + 2])))))));
                            var_38 ^= ((/* implicit */short) (~(((/* implicit */int) min((arr_9 [i_1] [i_22] [i_1]), (arr_9 [i_1] [(short)10] [i_22 + 3]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
