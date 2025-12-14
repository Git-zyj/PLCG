/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223687
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))))) : (var_6)))) ? (((((/* implicit */_Bool) ((int) arr_0 [i_0]))) ? (arr_2 [i_0] [i_0]) : (((((/* implicit */_Bool) 1097213380U)) ? (3758096384U) : (3810231405U))))) : (((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-91))))), (arr_0 [i_0])))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_3 = 4; i_3 < 24; i_3 += 3) 
                    {
                        var_10 = var_8;
                        var_11 = ((/* implicit */int) ((var_2) % (min((var_8), (((/* implicit */unsigned int) arr_9 [i_3 - 4] [i_3] [i_3] [i_2]))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_4 = 2; i_4 < 22; i_4 += 3) 
                        {
                            arr_12 [i_2] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (4294705152U) : (var_6))))));
                            arr_13 [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_3) : (var_0))))));
                            arr_14 [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_4 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)55))) : (2146959360U)));
                            var_12 = ((/* implicit */unsigned int) ((int) var_6));
                            arr_15 [i_0] [i_0] [i_2] [i_0] [i_3] [i_0] [i_4 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_3] [i_3] [i_3] [i_3] [i_3 - 3])) ? (var_3) : (arr_8 [i_3] [i_3] [i_3] [9] [i_3 - 3])));
                        }
                        var_13 = ((/* implicit */int) var_6);
                        /* LoopSeq 2 */
                        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 2) 
                        {
                            arr_18 [i_0] [i_2] [i_2] [i_3 + 1] [i_5] = (((+(arr_16 [i_5] [i_3 - 3] [i_3] [i_2] [i_1] [i_0] [i_0]))) >> ((((-(arr_8 [i_1] [i_1] [(signed char)20] [i_3] [i_3]))) - (3064198015U))));
                            var_14 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */unsigned int) -298902224)) : (536870912U))));
                        }
                        for (signed char i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            var_15 = ((/* implicit */unsigned int) arr_20 [i_0] [i_0] [i_2]);
                            arr_23 [i_0] [i_2] = 0U;
                        }
                    }
                    /* vectorizable */
                    for (signed char i_7 = 0; i_7 < 25; i_7 += 3) 
                    {
                        var_16 = ((/* implicit */int) ((unsigned int) arr_1 [i_0]));
                        arr_27 [i_2] = ((/* implicit */unsigned int) 1);
                        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_9 [i_0] [i_2] [5U] [i_2])) & (787527437U)))) ? (var_3) : (arr_16 [i_0] [i_1] [i_1] [i_2] [i_2] [i_2] [i_7])));
                    }
                    for (int i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_9 = 0; i_9 < 25; i_9 += 3) 
                        {
                            arr_33 [i_0] [i_1] [i_2] [i_2] [i_9] [i_9] = ((/* implicit */unsigned int) arr_7 [i_0] [i_2] [i_0]);
                            var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_4)))) ? (((/* implicit */unsigned int) arr_24 [i_0] [i_1] [i_8] [i_8])) : (((((/* implicit */_Bool) (signed char)-8)) ? (var_0) : (3507439858U)))))) ? (((unsigned int) arr_7 [i_9] [i_2] [i_9])) : (((unsigned int) arr_24 [i_1] [i_1] [i_1] [i_1])));
                            var_19 = ((/* implicit */signed char) 0U);
                        }
                        for (unsigned int i_10 = 4; i_10 < 24; i_10 += 1) 
                        {
                            var_20 = ((((/* implicit */_Bool) arr_32 [8U] [i_1] [i_1] [i_1] [i_1])) ? ((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_10 - 1] [i_1] [i_0] [i_2] [i_10 - 4] [i_8] [i_2]))) : (var_3))))) : (((/* implicit */unsigned int) (~(arr_10 [i_0] [i_0] [i_2] [i_10 - 2] [i_10])))));
                            var_21 = ((/* implicit */signed char) ((var_4) << (((787527437U) - (787527437U)))));
                            var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (1U) : (arr_1 [i_10 + 1])))) ? ((~(arr_25 [i_10 - 2] [i_2] [i_2] [i_10 - 3]))) : (min((arr_25 [i_10 - 3] [i_2] [i_2] [i_10 - 1]), (var_9))));
                        }
                        var_23 = ((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                    }
                    arr_36 [i_0] [i_0] [i_1] [i_2] = ((int) var_5);
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 2; i_11 < 21; i_11 += 4) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 25; i_12 += 2) 
                        {
                            {
                                arr_42 [i_0] [i_11] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_40 [i_11] [i_11 + 1] [i_11] [i_11 - 2] [i_11 + 2] [i_11]) >> (((var_9) - (1747084707U))))))));
                                arr_43 [i_2] [i_12] = var_5;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 3; i_13 < 24; i_13 += 2) 
                    {
                        for (unsigned int i_14 = 2; i_14 < 24; i_14 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((var_0), (arr_40 [i_14] [i_0] [i_2] [i_2] [i_1] [i_0])))) ? (min((var_6), (arr_26 [i_2] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) & (var_6)));
                                var_25 = ((/* implicit */unsigned int) ((4294967295U) >= (max(((~(133955584U))), (((/* implicit */unsigned int) (signed char)-112))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_49 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_29 [i_0]) : (((/* implicit */unsigned int) var_4)))) > (((((/* implicit */_Bool) arr_29 [i_0])) ? (4294967289U) : (arr_29 [i_0])))));
    }
    for (unsigned int i_15 = 0; i_15 < 25; i_15 += 2) /* same iter space */
    {
        var_26 = 298902224;
        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)29))) : (((((/* implicit */_Bool) 819539159)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [2] [i_15] [i_15]))) : (4294967295U)))));
        var_28 = max((arr_21 [i_15] [i_15] [i_15]), (((/* implicit */unsigned int) (signed char)-74)));
    }
    for (unsigned int i_16 = 0; i_16 < 25; i_16 += 2) /* same iter space */
    {
        var_29 = (+(max((arr_21 [i_16] [i_16] [i_16]), (arr_21 [i_16] [i_16] [i_16]))));
        arr_55 [i_16] [i_16] = ((/* implicit */int) arr_1 [i_16]);
        arr_56 [i_16] = var_9;
        arr_57 [i_16] = arr_11 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] [i_16];
    }
    var_30 = ((((/* implicit */_Bool) (~(3758096384U)))) ? ((+(2485202693U))) : (var_1));
    var_31 = ((/* implicit */int) ((1120192022U) >> ((((~(((/* implicit */int) (signed char)-108)))) - (98)))));
    var_32 = (+(min((4294967295U), (4294967295U))));
}
