/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196642
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
    /* LoopSeq 2 */
    for (short i_0 = 4; i_0 < 15; i_0 += 2) 
    {
        var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_8)))) ? ((-(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) var_11);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_18 [i_3] [i_2] [i_5] [i_5] [i_2] = ((/* implicit */unsigned int) min(((+(((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_7 [i_5] [i_4])) : (((/* implicit */int) ((arr_13 [i_1] [i_2] [i_1]) && (((/* implicit */_Bool) var_7)))))))));
                            var_14 *= (!(var_2));
                        }
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_21 [i_1] [i_2] [i_1] = (!(arr_10 [i_6] [i_2] [i_3]));
                            arr_22 [i_2] [i_4] |= ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_11)))))));
                            var_15 = ((/* implicit */_Bool) ((var_3) ? (((((/* implicit */int) var_7)) / (((/* implicit */int) var_12)))) : (((/* implicit */int) arr_8 [i_2] [i_2]))));
                            arr_23 [i_1] [i_2] [i_3] [i_3] [i_2] = ((/* implicit */_Bool) arr_17 [i_3] [i_2] [i_3] [i_3]);
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_16 = (!(var_11));
                            arr_26 [i_1] [i_1] [i_2] [i_2] [i_4] [i_7] [i_7] = (_Bool)1;
                            var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_1] [i_2] [i_3])) & (((/* implicit */int) var_6))))) ? (((var_2) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) ((short) (_Bool)1))))))));
                        }
                        arr_27 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1]))) % (1887891937U)));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_8 = 0; i_8 < 21; i_8 += 1) 
                        {
                            arr_31 [i_1] [i_1] [i_2] [i_3] [i_4] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_2] [i_4])) != (((/* implicit */int) arr_24 [i_8] [i_4] [i_3] [i_2] [i_1] [i_1]))));
                            var_18 = ((/* implicit */short) var_1);
                            var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_24 [i_1] [i_3] [i_3] [i_4] [i_3] [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10))));
                        }
                        for (unsigned int i_9 = 1; i_9 < 18; i_9 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_6 [0U] [i_4])) : (((/* implicit */int) arr_13 [(_Bool)1] [(_Bool)1] [i_2]))))), (var_1)))) ? (((/* implicit */int) ((var_1) < (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_1] [17U] [i_1] [i_1] [i_2] [i_9 + 1])))))) : (((/* implicit */int) var_4))));
                            arr_35 [i_1] [i_2] = ((/* implicit */_Bool) max((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))), ((-((+(((/* implicit */int) var_5))))))));
                            var_21 *= ((/* implicit */unsigned int) ((((((/* implicit */int) (short)7227)) >> (((var_8) - (2595660181U))))) >= (((var_2) ? (((/* implicit */int) (short)24770)) : (((/* implicit */int) arr_15 [i_9 + 1] [i_9 + 3] [i_9] [i_9 + 2] [i_9] [i_9 + 3]))))));
                            arr_36 [i_1] [i_1] [i_2] [i_3] [(short)10] [i_4] [i_9] = ((/* implicit */short) (-(((/* implicit */int) var_4))));
                        }
                        /* vectorizable */
                        for (short i_10 = 0; i_10 < 21; i_10 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_19 [i_1] [i_2] [i_3] [i_2] [i_1]))));
                            arr_39 [i_1] [i_10] [i_3] [i_3] [i_4] [i_10] |= ((/* implicit */_Bool) var_8);
                            arr_40 [i_4] [i_2] [(short)18] = ((((/* implicit */_Bool) 2749289130U)) && ((_Bool)1));
                        }
                        var_23 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) arr_11 [i_1] [i_4]))))))) ? (max((var_1), (arr_17 [i_1] [i_4] [i_3] [i_4]))) : (((arr_13 [i_1] [i_2] [i_4]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_2] [i_2]))) : (var_8)))));
                        arr_41 [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_32 [i_1] [i_2] [i_3] [i_3] [i_2] [i_4]))))) ? (((/* implicit */int) var_6)) : ((-(((/* implicit */int) arr_32 [i_4] [i_4] [(_Bool)1] [i_4] [i_2] [i_4]))))));
                    }
                } 
            } 
        } 
        var_24 &= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [0U] [i_1]))))) & (((((/* implicit */_Bool) 3094647412U)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))))));
        var_25 *= ((_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_13 [i_1] [i_1] [i_1]))))) : (((var_8) + (var_8)))));
        /* LoopSeq 1 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_26 = ((/* implicit */unsigned int) (+(((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)-32742))))));
            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) * (((/* implicit */int) arr_8 [i_11] [i_11]))))) ? (((((/* implicit */_Bool) arr_8 [i_11] [i_11])) ? (((/* implicit */int) arr_8 [i_11] [i_11])) : (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) arr_8 [i_11] [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_8 [i_11] [i_11]))))));
            /* LoopNest 3 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (unsigned int i_13 = 0; i_13 < 21; i_13 += 1) 
                {
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)24770)) ? (2595476418U) : (1865074416U)));
                            var_29 ^= (!(((/* implicit */_Bool) max((((var_8) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_1] [(short)4] [i_13] [i_14])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12)))))))));
                        }
                    } 
                } 
            } 
            arr_51 [i_1] [i_11] = ((unsigned int) ((((/* implicit */int) var_9)) * (((/* implicit */int) arr_38 [i_1] [i_11] [i_1] [i_11] [i_1]))));
            var_30 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_1] [i_11]))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((arr_11 [i_11] [i_11]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))))));
        }
    }
    var_31 = ((/* implicit */unsigned int) min(((~(((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) (!(var_9))))))));
}
