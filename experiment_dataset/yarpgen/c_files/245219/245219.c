/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_10 = ((((((((var_7 ? var_8 : (arr_1 [i_0])))) ? ((var_8 ? (arr_5 [i_2] [12]) : (arr_3 [i_1 - 1]))) : var_2))) && ((min(((((arr_4 [i_0] [i_0] [i_0] [i_2]) & (arr_1 [i_2])))), (arr_5 [i_1 + 1] [i_1 - 1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_0] [i_2] [i_1 - 1] [i_1] = ((var_4 ? (arr_5 [8] [i_1 - 1]) : ((var_6 ? ((min((arr_7 [14] [1]), (arr_10 [i_3] [i_3] [i_0] [i_0] [i_0])))) : (((arr_5 [i_0] [1]) << (var_6 - 990371059)))))));
                                var_11 = (((arr_1 [i_1 - 1]) ? ((((((arr_9 [6] [16] [i_2] [i_3] [i_0] [i_0]) / var_6))) ? ((min((arr_1 [i_0]), var_2))) : var_8)) : ((max(65094, (arr_12 [i_4] [i_3] [12] [6]))))));
                            }
                        }
                    }
                    var_12 = ((((((arr_12 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 1]) ? (arr_12 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 1]) : (arr_12 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1])))) ? (((arr_12 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 + 1]) ? (arr_12 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]) : (arr_12 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 1]))) : (((arr_12 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 - 1]) ? (arr_12 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) : var_7))));
                    var_13 *= var_3;
                    var_14 = (431 > 106);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        {

                            for (int i_9 = 0; i_9 < 16;i_9 += 1)
                            {
                                var_15 = (min(var_15, (((((((max(var_7, (arr_15 [11] [4])))) ? ((var_3 ? (arr_22 [6]) : var_9)) : (arr_24 [i_5 - 2] [i_5] [i_5 - 2]))) | ((0 ? 0 : 1387062121)))))));
                                var_16 -= ((((min((arr_0 [i_5]), (((arr_24 [i_5] [i_5] [1]) ? (arr_22 [i_5]) : (arr_14 [i_5 - 1] [i_6])))))) ? (((var_5 ? ((var_7 ? var_6 : var_0)) : (((arr_7 [i_5] [i_6]) + (arr_9 [0] [i_8] [15] [i_5] [i_6] [i_5])))))) : (((arr_18 [i_9] [i_8]) ? var_1 : (((arr_18 [i_7] [14]) ? var_8 : var_0))))));
                                var_17 = (((((var_4 ? (arr_26 [i_5] [i_5 - 1] [i_5 + 2] [i_5] [i_5 - 2] [i_5]) : ((max((arr_24 [i_5] [i_5] [i_5]), (arr_4 [4] [i_6] [i_6] [i_6]))))))) ? ((max((((arr_20 [i_5] [i_8] [i_9]) ? (arr_1 [i_8]) : var_6)), (arr_28 [i_5] [i_6] [5] [i_8] [i_8] [15])))) : (arr_2 [i_8] [1])));
                            }
                            var_18 = (((((max((max(6232, 18095)), (arr_26 [i_5] [12] [8] [i_5] [i_5 + 1] [i_5]))))) + (min((arr_27 [i_5] [i_6] [i_5] [i_8] [5]), (max((arr_2 [i_5 - 2] [8]), var_7))))));
                        }
                    }
                }
                var_19 = (((max((((437 ? 6232 : 431))), ((1 ? 4294967295 : 2424472824))))) ? ((4294967294 ? 4294967294 : -1943347216)) : (((var_9 ? (min(var_6, (arr_28 [13] [i_6] [i_5] [i_5] [15] [15]))) : ((max((arr_23 [i_5] [i_5] [i_5] [i_6]), var_7)))))));
            }
        }
    }
    var_20 = (max(var_20, (((var_0 ? (((((var_1 ? var_9 : var_5))) ? ((var_8 ? var_2 : var_6)) : ((min(var_1, var_6))))) : var_2)))));
    #pragma endscop
}
