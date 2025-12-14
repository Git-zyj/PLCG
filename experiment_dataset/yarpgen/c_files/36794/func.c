/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36794
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
    var_17 = ((unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_8) : (843780202U))))));
    var_18 = var_4;
    var_19 = var_4;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 2; i_2 < 20; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 3; i_3 < 19; i_3 += 4) 
                    {
                        arr_12 [i_1] [i_1] [i_2] [i_2 - 2] [i_3] = arr_0 [i_2];
                        var_20 -= (~(((((/* implicit */_Bool) 3451187094U)) ? (arr_1 [i_0] [i_0]) : (3675645138U))));
                        var_21 = ((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_1 - 3] [i_2 - 1] [i_2 - 1])) ? (arr_9 [i_1 + 1] [i_1 - 3] [i_2 - 1] [i_2 + 1]) : (arr_9 [i_1 - 2] [i_1 + 2] [i_2 + 1] [i_2 - 2]));
                        var_22 -= ((((/* implicit */_Bool) 3451187094U)) ? (2587831551U) : (4294967295U));
                    }
                    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        var_23 = ((((unsigned int) 4294967280U)) ^ (((((/* implicit */_Bool) var_11)) ? (2722025057U) : (3255066164U))));
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 1) 
                        {
                            arr_18 [i_0] [i_1] [i_2 - 1] [i_4] [i_5] = (-(((((/* implicit */_Bool) 2876404745U)) ? (3451187113U) : (2660390723U))));
                            var_24 = (((!(((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_4] [i_2] [i_1] [i_0])))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (3451187094U) : (arr_13 [i_0] [i_1] [i_1 + 2] [i_1 + 2] [i_4] [i_0]))) : ((~(arr_0 [i_0]))));
                            arr_19 [i_0] [i_1] [i_4] [i_4] [i_5] &= ((unsigned int) 1039901131U);
                        }
                    }
                    arr_20 [i_0] [i_1] = ((((unsigned int) 1451260378U)) ^ (var_8));
                    arr_21 [i_0] [i_1] = ((unsigned int) 2125685933U);
                }
                /* vectorizable */
                for (unsigned int i_6 = 2; i_6 < 20; i_6 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_8 = 1; i_8 < 20; i_8 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned int) min((var_25), (var_6)));
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 65535U)) || (((/* implicit */_Bool) 3451187094U))));
                        }
                        for (unsigned int i_9 = 0; i_9 < 21; i_9 += 4) 
                        {
                            var_27 = (+(arr_16 [i_0] [i_1] [i_6] [i_7] [i_1 - 1] [i_6]));
                            arr_32 [i_0] [i_1] [i_6] [i_9] = ((/* implicit */unsigned int) ((arr_24 [i_1 - 3] [i_1] [i_6 + 1]) != (arr_8 [i_1] [i_1 - 2] [i_1] [i_1])));
                            var_28 = ((unsigned int) ((((/* implicit */_Bool) arr_30 [i_1] [i_0] [i_6 - 2] [i_0] [i_1])) ? (arr_31 [i_1] [i_7] [i_6] [i_1 + 1] [i_1]) : (arr_1 [i_0] [i_0])));
                            var_29 |= ((((((/* implicit */_Bool) 16U)) ? (arr_10 [i_0] [i_1] [i_6 - 1] [i_1]) : (arr_27 [i_1] [i_6] [i_7] [i_9]))) >> (((((unsigned int) arr_24 [i_1] [i_6] [i_9])) - (866080888U))));
                        }
                        var_30 |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 4294967292U)) || (((/* implicit */_Bool) arr_3 [i_0] [i_1 + 1] [i_0])))) && (((/* implicit */_Bool) 3675645109U))));
                        var_31 = ((((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_6 - 2])) ? (arr_25 [i_0] [i_1 - 3] [i_6 + 1] [i_6] [i_7] [i_0]) : (arr_23 [i_7] [i_7] [i_7]));
                        /* LoopSeq 1 */
                        for (unsigned int i_10 = 1; i_10 < 19; i_10 += 4) 
                        {
                            var_32 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) 4113275201U)))));
                            var_33 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_22 [i_6] [i_10 + 1] [i_6] [i_1 + 2]))));
                            var_34 = ((((unsigned int) arr_4 [i_0] [i_1] [i_6])) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 15U)) || (((/* implicit */_Bool) var_16)))))));
                            arr_36 [i_0] [i_0] [i_0] [i_0] [i_1] = ((((/* implicit */_Bool) (-(arr_27 [15U] [i_1] [i_7] [i_10])))) ? (((arr_8 [i_0] [0U] [i_1] [i_7]) >> (((arr_9 [i_0] [i_10 + 2] [i_6] [i_7]) - (1305936151U))))) : ((+(12U))));
                        }
                    }
                    for (unsigned int i_11 = 0; i_11 < 21; i_11 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_12 = 0; i_12 < 21; i_12 += 4) 
                        {
                            var_35 = ((arr_1 [i_6 - 1] [i_1 - 1]) % (arr_1 [i_6 - 1] [i_1 - 3]));
                            var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) 2041272071U))))))));
                        }
                        var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
                    }
                    for (unsigned int i_13 = 0; i_13 < 21; i_13 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_14 = 1; i_14 < 17; i_14 += 3) 
                        {
                            var_38 |= (((+(arr_7 [i_0] [i_1] [i_6] [i_14]))) << (((/* implicit */int) ((var_4) >= (3255066157U)))));
                            var_39 = ((((/* implicit */_Bool) (-(4052936793U)))) ? (arr_41 [i_14] [i_14] [i_14 - 1] [i_14 - 1] [i_14]) : ((+(3451187113U))));
                            var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_24 [i_6 - 2] [i_6] [i_1 - 3])))))));
                            var_41 = ((((/* implicit */_Bool) ((arr_2 [i_0] [i_0]) | (arr_22 [i_13] [i_6] [10U] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((3451187113U) < (arr_2 [i_1] [1U]))))) : (((((/* implicit */_Bool) 446344504U)) ? (1039901125U) : (arr_4 [i_0] [i_1] [i_14]))));
                        }
                        for (unsigned int i_15 = 0; i_15 < 21; i_15 += 2) 
                        {
                            var_42 = ((/* implicit */unsigned int) min((var_42), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_15] [i_0] [i_6] [i_0] [i_0])) ? (242030501U) : (242030521U)))) ? (arr_3 [i_1 - 3] [i_6 + 1] [i_13]) : (var_12)))));
                            arr_49 [i_0] [i_1] [i_6] [i_6] [i_15] [i_6] [i_1] = arr_2 [i_15] [i_1];
                        }
                        for (unsigned int i_16 = 0; i_16 < 21; i_16 += 4) 
                        {
                            arr_52 [i_1] [i_1] = ((((/* implicit */_Bool) arr_31 [i_1] [i_6] [i_6 - 2] [i_6 - 2] [i_6])) ? (arr_45 [i_6] [i_6] [i_6 + 1] [i_6] [i_6]) : (arr_45 [i_6] [17U] [i_6 - 2] [i_6] [i_6]));
                            var_43 = ((/* implicit */unsigned int) ((arr_23 [i_1 + 1] [i_6 - 2] [i_6 - 2]) > (((((/* implicit */_Bool) var_4)) ? (4052936795U) : (arr_33 [i_0] [i_1 - 3] [i_6 - 1] [i_13] [i_16])))));
                            arr_53 [i_0] [i_1] [i_1] = ((1246207989U) & (2507351515U));
                        }
                        for (unsigned int i_17 = 2; i_17 < 20; i_17 += 1) 
                        {
                            arr_57 [i_0] [i_0] [i_6] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(4052936794U))))));
                            arr_58 [16U] [17U] [i_1] [i_13] [9U] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3021637879U))));
                            arr_59 [i_0] [i_1] = ((unsigned int) arr_8 [i_13] [i_1] [i_1] [i_0]);
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_18 = 1; i_18 < 19; i_18 += 1) /* same iter space */
                        {
                            arr_64 [i_0] [i_0] [i_1] [i_0] = ((unsigned int) arr_61 [i_0] [i_1 + 1] [i_6 - 2] [i_13] [i_13] [i_18 - 1]);
                            var_44 = ((/* implicit */unsigned int) min((var_44), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_0] [i_1 + 1] [i_6 - 1] [i_6 - 1] [i_13])) && (((/* implicit */_Bool) arr_7 [i_18 - 1] [i_1 + 2] [i_6 - 1] [i_13])))))));
                            var_45 = ((unsigned int) arr_30 [i_0] [i_0] [i_6 + 1] [i_13] [i_1]);
                            arr_65 [i_1] [13U] [13U] = arr_7 [i_0] [i_0] [i_0] [19U];
                        }
                        for (unsigned int i_19 = 1; i_19 < 19; i_19 += 1) /* same iter space */
                        {
                            var_46 = ((unsigned int) ((unsigned int) 3451187113U));
                            var_47 = ((/* implicit */unsigned int) max((var_47), (((unsigned int) arr_16 [i_0] [i_0] [i_1] [i_6] [i_6] [i_19]))));
                            arr_68 [i_19] [i_1] [i_6] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(3970006421U))))));
                            arr_69 [i_6] [i_1] = (~(arr_14 [i_0] [i_1] [i_6] [i_13] [i_19 + 2]));
                        }
                        var_48 = ((unsigned int) ((unsigned int) arr_13 [i_0] [i_1] [i_13] [i_13] [i_13] [i_1]));
                    }
                    var_49 = ((/* implicit */unsigned int) max((var_49), (arr_17 [i_0] [i_0])));
                }
                var_50 = (~((~(max((3188828147U), (1039901103U))))));
                var_51 = arr_67 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
                arr_70 [i_1] [i_1] = arr_5 [i_1] [i_0];
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_20 = 0; i_20 < 15; i_20 += 4) 
    {
        var_52 = (+(((((/* implicit */_Bool) 3637887605U)) ? (((unsigned int) arr_39 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20])) : (3387679984U))));
        var_53 = min((((/* implicit */unsigned int) ((arr_9 [i_20] [i_20] [i_20] [i_20]) == (arr_9 [i_20] [i_20] [i_20] [i_20])))), (((arr_9 [i_20] [i_20] [i_20] [i_20]) * (907287322U))));
        var_54 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) 15U))))))));
    }
}
