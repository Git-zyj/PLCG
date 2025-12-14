/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201961
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
    for (int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [i_0] = (-(((/* implicit */int) (!(((/* implicit */_Bool) ((arr_0 [i_0] [i_1]) >> (((arr_1 [i_1] [i_1]) + (1430526395))))))))));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 17; i_2 += 4) 
                {
                    for (int i_3 = 4; i_3 < 17; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_3 - 1] = arr_10 [i_1 + 1] [i_2 + 1] [i_2 + 1];
                            /* LoopSeq 2 */
                            for (int i_4 = 2; i_4 < 15; i_4 += 1) 
                            {
                                arr_14 [i_4] [i_3] [i_4] [i_4] [i_4] = (-(((int) ((int) var_6))));
                                var_18 = var_16;
                                arr_15 [i_0 + 2] [i_4] [i_0 + 2] [i_3 - 3] [i_4 + 1] = (~((~(arr_0 [i_3 - 2] [i_4 + 2]))));
                                var_19 = ((((((int) (~(arr_9 [i_0] [i_0] [i_0] [i_0 - 1] [i_0])))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_4] [i_4] [i_2 + 2] [i_4 + 2] [i_4 + 3] [i_4]))))));
                                arr_16 [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) -443297348))));
                            }
                            for (int i_5 = 1; i_5 < 18; i_5 += 1) 
                            {
                                arr_19 [i_0] = ((((arr_2 [i_0 + 1]) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) -398678480))))));
                                var_20 = min((max((var_2), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1]))))))), (((((/* implicit */_Bool) min((var_1), (arr_8 [i_3])))) ? (((arr_3 [i_0] [i_0 - 2]) - (var_13))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (-1877792198) : (arr_0 [i_1] [i_5]))))));
                                var_21 = arr_17 [i_1 + 3];
                            }
                            var_22 = ((max((((((/* implicit */_Bool) 2147483646)) ? (arr_7 [i_0] [i_0] [i_0]) : (arr_8 [i_0 - 2]))), (((((/* implicit */_Bool) arr_8 [i_0 + 2])) ? (arr_12 [i_2 + 1] [i_3]) : (var_15))))) + (((((/* implicit */_Bool) arr_2 [i_3 - 4])) ? (389146860) : (arr_2 [i_0 - 1]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_2))) ? (((int) var_3)) : (var_5))))));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 24; i_6 += 2) 
    {
        for (int i_7 = 0; i_7 < 24; i_7 += 3) 
        {
            {
                arr_25 [i_7] = -443297348;
                /* LoopSeq 1 */
                for (int i_8 = 4; i_8 < 23; i_8 += 2) 
                {
                    var_24 = max((max((min((var_13), (arr_27 [i_6] [i_7] [i_8 - 1] [i_8 - 2]))), (max((arr_24 [i_8]), (2027865238))))), ((~(min((var_1), (arr_20 [i_8]))))));
                    /* LoopSeq 3 */
                    for (int i_9 = 0; i_9 < 24; i_9 += 3) 
                    {
                        arr_33 [i_6] [i_6] [i_8 - 3] [i_9] = min((((((/* implicit */_Bool) arr_26 [i_8 - 1] [i_7] [i_7])) ? (arr_26 [i_8 - 1] [i_7] [i_7]) : (1267330395))), (min((var_4), (arr_26 [i_8 - 2] [i_8 - 2] [i_8 + 1]))));
                        arr_34 [i_6] [i_8 - 4] [i_8 - 2] [i_9] [i_6] = ((/* implicit */int) ((var_17) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                    }
                    /* vectorizable */
                    for (int i_10 = 2; i_10 < 23; i_10 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_11 = 0; i_11 < 24; i_11 += 2) 
                        {
                            var_25 = var_13;
                            arr_41 [i_6] [i_7] [i_8 - 3] [i_11] [i_11] [i_10] = var_16;
                        }
                        /* LoopSeq 2 */
                        for (int i_12 = 3; i_12 < 22; i_12 += 2) /* same iter space */
                        {
                            arr_44 [i_6] [i_10] [i_6] [i_6] [i_12 - 2] [i_7] [i_6] = arr_20 [i_6];
                            arr_45 [i_10] [i_7] [i_7] [i_10 - 1] [i_12 + 2] = ((int) arr_37 [i_12] [i_12 + 1] [i_10] [i_12 - 1]);
                        }
                        for (int i_13 = 3; i_13 < 22; i_13 += 2) /* same iter space */
                        {
                            arr_48 [i_6] [i_10] [i_8] [i_8] [i_13 - 3] = ((((/* implicit */_Bool) 2147483646)) ? (arr_31 [i_10 + 1]) : (2147483636));
                            arr_49 [i_10] = (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))));
                        }
                    }
                    for (int i_14 = 2; i_14 < 22; i_14 += 2) 
                    {
                        arr_53 [i_6] [i_7] [i_14 - 1] [i_14] [i_6] = (((+(((((/* implicit */_Bool) arr_39 [i_6] [i_7] [i_6] [i_6] [i_7])) ? (var_17) : (1242123883))))) | (((((/* implicit */int) ((arr_52 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) != (1296309513)))) - (max((var_12), (var_12))))));
                        arr_54 [i_6] [i_7] [i_7] = ((((/* implicit */_Bool) min((((int) var_0)), (arr_20 [i_8 - 4])))) ? ((+(min((arr_46 [i_6] [i_6] [i_7] [i_8 - 4] [i_14 - 1]), (arr_36 [i_6] [i_14 + 2] [i_14 + 2] [i_7] [i_8 - 3] [i_14 + 2]))))) : (((/* implicit */int) ((((int) arr_35 [i_6] [i_6] [i_6] [i_6] [i_7] [i_6])) != (((var_17) / (var_2)))))));
                        var_26 = var_1;
                        arr_55 [i_8] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) (-(var_0))))) || (((/* implicit */_Bool) min((arr_42 [i_8] [i_7] [i_8 - 1] [i_14 - 2]), (((int) 2147483647)))))));
                        arr_56 [i_14 - 1] [i_14 - 1] = var_15;
                    }
                }
                arr_57 [i_6] [i_6] = ((int) max(((-(245760))), (((int) arr_37 [i_6] [i_6] [i_6] [i_6]))));
            }
        } 
    } 
}
