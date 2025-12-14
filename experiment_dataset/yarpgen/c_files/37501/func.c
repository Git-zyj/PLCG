/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37501
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
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned int i_3 = 1; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_16 = (~(max((((((/* implicit */_Bool) 2842789716U)) ? (32767U) : (var_11))), (arr_0 [i_0 + 3]))));
                            var_17 = ((/* implicit */unsigned int) max((var_17), (2842789716U)));
                            /* LoopSeq 2 */
                            for (unsigned int i_4 = 3; i_4 < 23; i_4 += 3) 
                            {
                                var_18 = ((/* implicit */unsigned int) min((var_18), (4294967281U)));
                                var_19 = ((/* implicit */unsigned int) max((var_19), ((+(var_8)))));
                            }
                            for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
                            {
                                arr_16 [i_3] [i_3] [8U] = 1452177580U;
                                var_20 = ((((/* implicit */_Bool) 4294967281U)) ? (2842789721U) : (1452177579U));
                                var_21 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2697721304U)) ? (arr_7 [i_1 - 3] [i_1 - 1] [i_1 - 3] [i_1 + 1]) : (2842789716U)))) ? (arr_7 [i_1 + 1] [i_1 - 4] [i_1 - 1] [i_1 - 2]) : (2576091875U));
                                arr_17 [i_2] [i_3] [i_2] = arr_8 [i_3] [i_3];
                                arr_18 [9U] [i_1 + 1] [13U] [i_3 - 1] [i_5] [i_3] = 8388607U;
                            }
                            var_22 = var_3;
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    arr_22 [i_6] [i_1] [i_1 - 3] = min((min((min((arr_0 [3U]), (arr_19 [i_6] [i_6] [i_6]))), (arr_14 [6U] [i_6] [i_6] [i_6] [i_6]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (2842789721U) : (3707474617U)))) ? (var_7) : (((arr_20 [i_0 + 3] [i_1 - 4]) & (var_2))))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 1; i_7 < 22; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 24; i_8 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) max((var_23), (((((/* implicit */_Bool) var_13)) ? (((unsigned int) 2842789715U)) : (((((2842789705U) * (3560329444U))) / (1452177575U)))))));
                                var_24 = ((/* implicit */unsigned int) max((var_24), (min((((unsigned int) arr_25 [i_1 - 2] [i_8] [i_1 - 3] [i_1 - 1])), (((var_10) << (((((unsigned int) var_13)) - (4124283362U)))))))));
                                var_25 = ((min((var_4), (arr_24 [i_6] [i_1 + 1] [i_6]))) * (((67108863U) / (var_1))));
                                arr_29 [i_6] [5U] = ((unsigned int) ((unsigned int) (-(734637852U))));
                            }
                        } 
                    } 
                }
                var_26 &= ((((8U) >= (2842789716U))) ? (arr_13 [i_0 + 3] [i_0] [i_0 - 1] [i_1] [i_1] [i_1 - 1] [2U]) : (max((2842789719U), (arr_13 [i_0 + 3] [i_0 - 1] [i_0 - 1] [22U] [i_1 + 1] [i_1 - 1] [4U]))));
                var_27 = arr_10 [i_0] [i_0] [i_1 - 4] [i_1];
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_9 = 0; i_9 < 12; i_9 += 1) 
    {
        for (unsigned int i_10 = 0; i_10 < 12; i_10 += 1) 
        {
            for (unsigned int i_11 = 0; i_11 < 12; i_11 += 3) 
            {
                {
                    var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_2) : (arr_15 [i_10] [4U] [8U] [i_10] [8U] [12U] [i_9])))) ? (arr_25 [16U] [4U] [4U] [i_9]) : (2508596747U))) <= ((+(var_1))))))));
                    var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((var_0) != (734637865U)))))) >> ((((-(((((/* implicit */_Bool) 1452177577U)) ? (var_4) : (3746096270U))))) - (1964770680U))))))));
                    arr_40 [i_9] = (i_9 % 2 == 0) ? (((((((/* implicit */_Bool) arr_6 [i_9] [i_9] [11U])) ? (arr_38 [i_9] [i_10] [i_10] [i_10]) : (arr_6 [7U] [i_10] [i_11]))) << (((((arr_38 [i_9] [i_10] [i_11] [i_11]) & (var_1))) - (279424U))))) : (((((((/* implicit */_Bool) arr_6 [i_9] [i_9] [11U])) ? (arr_38 [i_9] [i_10] [i_10] [i_10]) : (arr_6 [7U] [i_10] [i_11]))) << (((((((arr_38 [i_9] [i_10] [i_11] [i_11]) & (var_1))) - (279424U))) - (12844692U)))));
                }
            } 
        } 
    } 
}
