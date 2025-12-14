/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202734
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
    var_15 = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (var_1))));
    var_16 = ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((_Bool) ((unsigned int) (short)-9888)));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            var_17 = (_Bool)1;
            arr_8 [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0] [i_1]))));
            var_18 = arr_7 [i_0] [i_0] [i_0];
            var_19 = ((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_1]);
            /* LoopSeq 2 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_2 - 1])) ? (((/* implicit */int) arr_7 [i_0] [i_2 - 1] [i_2 - 1])) : ((-(((/* implicit */int) (short)9910))))));
                var_21 = ((arr_5 [i_2 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (1624659807U));
                arr_12 [i_2 - 1] [i_1] [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((unsigned int) (short)9887));
                arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) (short)9888)) >= (((/* implicit */int) (short)9887)))))));
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_2 - 1])) ^ (((/* implicit */int) var_7))));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_4 = 4; i_4 < 19; i_4 += 1) 
                {
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_3 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))))) || (arr_15 [i_0] [i_4 - 2] [(_Bool)1] [(_Bool)1])));
                    arr_18 [i_0] [i_0] = ((unsigned int) arr_11 [i_0] [i_1] [i_3] [i_4 + 1]);
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 3; i_5 < 19; i_5 += 4) 
                    {
                        var_24 |= ((/* implicit */short) arr_11 [i_5 - 1] [i_4 - 2] [i_4 - 2] [i_4 - 1]);
                        var_25 = var_11;
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_26 += ((/* implicit */_Bool) 1132962701U);
                        arr_25 [i_0] [i_6] [i_0] = arr_2 [i_0] [i_1];
                        var_27 = ((((/* implicit */_Bool) arr_3 [i_4 - 1] [i_4 - 1])) && (((/* implicit */_Bool) (short)-32758)));
                        var_28 = ((/* implicit */_Bool) var_6);
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        var_29 += ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((/* implicit */_Bool) (short)15344)) ? (arr_22 [i_4 - 1] [5ULL] [i_4 - 2] [i_4] [i_4 - 3] [i_4 - 1] [(short)8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_7 + 1]))))))));
                    }
                    for (short i_8 = 1; i_8 < 20; i_8 += 3) 
                    {
                        var_31 = ((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1] [6ULL])) & (((/* implicit */int) arr_19 [i_4 - 1] [i_4 - 1] [i_8 - 1]))));
                        arr_31 [i_0] [i_1] [i_3] [i_4 - 3] [i_8] = (_Bool)1;
                        var_32 = ((short) 0U);
                        var_33 += ((/* implicit */unsigned long long int) ((56U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_8 + 1] [i_8 + 1] [i_8 - 1])))));
                    }
                    var_34 = ((/* implicit */_Bool) arr_1 [i_0]);
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_10 = 0; i_10 < 21; i_10 += 3) 
                    {
                        var_35 -= ((/* implicit */_Bool) (~(((/* implicit */int) arr_35 [i_0] [i_0] [i_3] [i_9] [i_3]))));
                        arr_38 [i_0] [i_9] [i_3] [i_9] [i_10] [i_10] [i_10] = ((/* implicit */short) ((arr_21 [i_0] [i_1] [i_3] [i_9] [i_10] [i_10]) ? (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [(short)16])) : (((/* implicit */int) arr_21 [i_0] [i_1] [i_3] [i_9] [i_9] [i_10]))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_42 [i_0] [i_1] [i_3] [i_9] [i_11] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                        var_36 = ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) < (2290997438U)));
                        arr_43 [i_9] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) arr_6 [i_11]))));
                        arr_44 [i_0] [i_9] [i_3] = ((/* implicit */_Bool) (-(4193961359U)));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 2) 
                    {
                        arr_49 [i_9] [i_1] [i_3] [i_9] [i_12] = ((/* implicit */_Bool) arr_16 [8ULL] [8ULL] [8ULL] [8ULL]);
                        arr_50 [i_0] [i_1] [i_3] [i_9] [i_9] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_41 [i_0] [i_1] [i_3] [i_9] [i_9] [i_12] [i_12]))));
                    }
                    var_37 = ((/* implicit */_Bool) (short)-1);
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    arr_53 [i_0] [i_0] [i_1] [i_3] [i_13] = ((/* implicit */_Bool) arr_45 [i_0] [i_1] [i_3] [i_13]);
                    var_38 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_0]))));
                    arr_54 [i_1] [(short)6] = ((/* implicit */_Bool) 0U);
                }
                arr_55 [i_0] [1ULL] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) var_13)) * (((/* implicit */int) arr_17 [i_3]))));
                var_39 = ((/* implicit */unsigned int) (((~(((/* implicit */int) var_2)))) * (((/* implicit */int) arr_39 [i_0] [i_1] [i_1] [i_3] [i_3]))));
                arr_56 [i_0] [i_1] [i_1] [(_Bool)0] = ((/* implicit */_Bool) ((arr_30 [i_1]) ? (((/* implicit */int) arr_23 [i_0] [i_0] [i_1] [i_3] [(_Bool)1])) : (((/* implicit */int) arr_30 [i_0]))));
            }
        }
        for (unsigned int i_14 = 0; i_14 < 21; i_14 += 1) 
        {
            var_40 = ((/* implicit */_Bool) arr_58 [i_0] [(_Bool)1] [i_14]);
            var_41 += arr_41 [7U] [(_Bool)1] [i_0] [(short)8] [7U] [(_Bool)1] [i_14];
        }
        /* LoopNest 2 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_17 = 0; i_17 < 21; i_17 += 1) 
                    {
                        for (unsigned long long int i_18 = 0; i_18 < 21; i_18 += 1) 
                        {
                            {
                                var_42 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1132962701U)) ? (((/* implicit */int) arr_5 [i_17])) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_6 [i_15]))));
                                arr_71 [i_0] [i_15] [i_16 - 1] [i_17] [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_70 [i_0] [i_0] [(_Bool)1] [i_16 - 1] [i_17] [i_18])) || (((/* implicit */_Bool) arr_63 [i_0] [i_15]))));
                                var_43 *= ((/* implicit */_Bool) 4042577999U);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
                    {
                        for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                        {
                            {
                                arr_76 [i_19] [i_19] [i_20] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-9888))));
                                arr_77 [i_0] [i_19] = ((/* implicit */short) var_5);
                            }
                        } 
                    } 
                    var_44 = ((/* implicit */unsigned int) ((_Bool) (_Bool)1));
                }
            } 
        } 
        arr_78 [7ULL] = var_5;
        /* LoopSeq 1 */
        for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_22 = 0; i_22 < 21; i_22 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) 
                {
                    for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) 
                    {
                        {
                            var_45 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                            arr_91 [(_Bool)1] |= ((((/* implicit */_Bool) arr_70 [i_21 - 1] [i_21] [i_22] [i_22] [(_Bool)1] [i_23 + 1])) ? (arr_11 [i_0] [i_21 - 1] [i_22] [i_23]) : (((arr_60 [14U] [i_21 - 1] [i_24 + 1]) ? (arr_0 [i_0] [i_21 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)4))))));
                            arr_92 [i_21] [i_21] [1U] [i_23 + 1] [i_0] = ((arr_35 [i_21] [i_21 - 1] [i_22] [i_23 + 1] [i_24 + 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-9888))) : (((((/* implicit */_Bool) 3935416589529489323ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_21 - 1] [i_22] [i_24]))) : (arr_59 [i_21] [i_24]))));
                        }
                    } 
                } 
                var_46 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_27 [i_0] [(_Bool)1] [i_21 - 1] [i_22] [i_22]))))) : ((~(16426195808973363493ULL)))));
                var_47 = ((/* implicit */unsigned int) ((unsigned long long int) 2209323961152233292ULL));
                arr_93 [i_21] = ((/* implicit */_Bool) arr_82 [i_22] [i_21 - 1]);
            }
            var_48 = ((/* implicit */short) ((arr_10 [i_21] [i_21 - 1] [i_21 - 1]) ? (((/* implicit */int) ((short) (short)22358))) : (((/* implicit */int) arr_7 [18U] [i_21 - 1] [i_21 - 1]))));
            var_49 = ((/* implicit */short) max((var_49), (((/* implicit */short) ((var_0) && (arr_21 [18U] [i_21 - 1] [18U] [i_21 - 1] [i_21] [i_21]))))));
        }
    }
    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
    {
        arr_97 [i_25] = ((/* implicit */_Bool) (short)-9887);
        var_50 = ((/* implicit */_Bool) max((var_50), (((/* implicit */_Bool) (-(((unsigned long long int) arr_94 [i_25])))))));
    }
    var_51 = ((/* implicit */unsigned int) var_7);
    var_52 &= ((/* implicit */unsigned int) (_Bool)1);
}
