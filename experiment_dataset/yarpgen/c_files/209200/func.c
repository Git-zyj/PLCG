/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209200
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        arr_10 [i_0] [i_0] = max((((unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_3] [i_3])) ? (var_7) : (arr_6 [i_0] [0U] [6U] [i_3])))), (((((/* implicit */_Bool) ((var_14) | (var_13)))) ? (min((var_15), (var_6))) : (arr_9 [i_3] [i_1]))));
                        var_16 = ((((min((var_12), (var_9))) + (49152U))) / (((unsigned int) ((unsigned int) var_15))));
                        var_17 -= ((/* implicit */unsigned int) ((max((max((var_13), (arr_6 [6U] [i_1] [i_2] [6U]))), (141918837U))) == (((((/* implicit */_Bool) max((var_4), (var_12)))) ? (var_15) : (((var_15) >> (((var_2) - (1686900690U)))))))));
                    }
                    var_18 += ((((/* implicit */_Bool) ((max((var_3), (var_4))) ^ (arr_6 [i_0] [5U] [10U] [i_2])))) ? (arr_9 [i_1] [9U]) : (((((/* implicit */_Bool) arr_2 [i_0] [6U])) ? (arr_4 [i_0] [i_0] [8U]) : (arr_9 [i_1] [i_2]))));
                    /* LoopSeq 3 */
                    for (unsigned int i_4 = 2; i_4 < 10; i_4 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_3 [i_0]), (4294918141U)))) ? (((1471145801U) + (arr_5 [i_0]))) : (((1471145801U) / (var_2))))))));
                        arr_14 [i_0] [i_1] [i_2] [i_0] = min((min((arr_1 [i_0] [i_4 + 1]), (2447646843U))), (max((arr_6 [i_0] [0U] [i_0] [i_4]), (var_13))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_5 = 3; i_5 < 11; i_5 += 4) 
                        {
                            var_20 = ((arr_4 [i_4 - 1] [i_5 - 3] [8U]) ^ (arr_16 [i_2]));
                            var_21 = arr_12 [i_4] [i_1] [i_0] [6U];
                            arr_18 [0U] [0U] [9U] [0U] [i_0] = var_1;
                        }
                    }
                    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        arr_21 [i_0] [i_1] [i_1] [i_2] [i_0] [i_6] = var_5;
                        var_22 = var_1;
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            arr_24 [i_0] [i_1] = min((var_3), (((arr_12 [i_0] [i_1] [i_0] [i_6]) + (var_6))));
                            var_23 = ((unsigned int) min((2526948922U), (arr_5 [i_0])));
                            arr_25 [i_0] [i_1] [i_2] [i_6] [i_0] = ((unsigned int) var_7);
                            var_24 |= ((((/* implicit */_Bool) 2823821495U)) ? (max((var_14), (4294918143U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_6] [i_7]) <= (((unsigned int) 2823821513U)))))));
                        }
                        for (unsigned int i_8 = 1; i_8 < 11; i_8 += 1) 
                        {
                            var_25 += min((((arr_27 [i_8 + 1] [i_8 + 1] [i_2] [i_2] [i_8 + 1]) ^ (arr_22 [i_8 + 1] [i_6] [i_6] [i_6] [i_8 + 1]))), (var_2));
                            var_26 -= ((/* implicit */unsigned int) ((((/* implicit */int) ((var_2) > (min((var_4), (var_5)))))) << (((min((((((/* implicit */_Bool) var_6)) ? (arr_7 [i_8 + 1] [i_1] [i_1]) : (2823821495U))), (var_12))) - (1615512443U)))));
                            arr_29 [i_0] [i_1] [i_2] [i_2] [i_0] = max((min((var_6), (arr_15 [2U] [i_1] [i_2] [i_0] [i_8 - 1]))), (min((var_12), (var_6))));
                            arr_30 [i_0] [i_1] [i_0] [i_0] [i_2] [i_6] [i_8 - 1] = ((((/* implicit */_Bool) (-(arr_2 [i_1] [i_0])))) ? (min((arr_23 [i_0] [i_8 - 1] [i_0] [i_6] [11U]), (var_14))) : (var_0));
                        }
                        var_27 |= min((4294967295U), (max((var_11), (var_12))));
                        var_28 = min((((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0])) ? (min((var_4), (var_0))) : (max((arr_6 [i_0] [i_0] [i_2] [i_6]), (var_8))))), (arr_11 [i_0] [i_1] [i_2] [i_2] [i_0] [8U]));
                    }
                    /* vectorizable */
                    for (unsigned int i_9 = 0; i_9 < 12; i_9 += 1) 
                    {
                        var_29 = var_5;
                        arr_34 [1U] [i_0] [6U] [i_9] = ((arr_11 [i_0] [i_1] [i_2] [i_9] [i_0] [i_1]) * (((4294967295U) | (var_12))));
                    }
                    var_30 = min((var_15), (min((arr_28 [i_0] [i_0]), (min((var_12), (arr_4 [i_0] [i_1] [i_2]))))));
                    var_31 = var_2;
                }
            } 
        } 
    } 
    var_32 = ((((/* implicit */_Bool) min((((unsigned int) var_6)), (min((var_1), (var_8)))))) ? (((((/* implicit */_Bool) max((18U), (var_7)))) ? (((((/* implicit */_Bool) var_13)) ? (var_7) : (var_15))) : (max((var_4), (var_6))))) : (min((max((var_13), (var_12))), (((4294918144U) & (49152U))))));
    /* LoopNest 3 */
    for (unsigned int i_10 = 1; i_10 < 9; i_10 += 2) 
    {
        for (unsigned int i_11 = 0; i_11 < 10; i_11 += 1) 
        {
            for (unsigned int i_12 = 0; i_12 < 10; i_12 += 2) 
            {
                {
                    var_33 -= ((unsigned int) ((((4294967286U) + (var_7))) + (arr_23 [8U] [i_11] [8U] [2U] [2U])));
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 0; i_13 < 10; i_13 += 3) 
                    {
                        for (unsigned int i_14 = 4; i_14 < 8; i_14 += 2) 
                        {
                            {
                                var_34 = var_12;
                                var_35 = (+(var_3));
                                var_36 = var_1;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
