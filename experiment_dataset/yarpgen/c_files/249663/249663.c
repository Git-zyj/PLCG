/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_10 = (max((((((((arr_8 [i_0] [6] [i_2] [i_3]) || (arr_6 [i_1] [i_2])))) != (((arr_11 [i_0] [i_1] [i_2] [i_2]) ? var_5 : 105))))), (((((255 ? 109 : 210))) ? ((max(216, (arr_4 [15] [i_1])))) : ((max(183, 73)))))));
                                arr_13 [i_0] [i_1] [i_1] [i_2] [i_0] = 238;
                                var_11 = (((((59 || var_9) ? 54 : ((max((arr_5 [i_0] [i_0] [18]), 95))))) > 37));
                                var_12 = ((((177 ^ (((var_2 && (arr_6 [i_1] [i_1])))))) != (min(((183 ? (arr_4 [i_0] [i_0]) : 213)), var_2))));
                                var_13 = 157;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_21 [i_1] [i_1] [5] [3] [i_6] = ((var_1 > (((arr_16 [i_0 + 1] [i_0 + 2] [i_1] [i_2 + 2]) ^ (arr_16 [i_0 + 2] [i_0 + 2] [i_1] [i_2 + 1])))));
                                var_14 = arr_1 [i_0] [i_0];
                                var_15 = min(((((arr_9 [i_0] [i_1] [i_2] [i_5]) ? (arr_17 [i_5]) : (arr_2 [i_1] [i_1] [i_6])))), (((2 ? 245 : var_3))));
                                arr_22 [i_0] [i_1] [i_2] [i_1] [23] [i_6] [i_2] = (min((((arr_14 [i_2 + 1] [i_1] [i_2]) ? (arr_16 [i_0 + 1] [i_2 + 1] [i_1] [i_0 + 1]) : (arr_7 [i_6]))), (arr_6 [i_1] [i_1])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                var_16 = ((((((((84 ? 246 : var_8))) ? 132 : ((var_0 ? 130 : (arr_20 [i_0] [i_1] [i_1] [i_1] [i_8])))))) ? (((((min(40, var_8))) <= var_1))) : (((0 * 73) | ((38 * (arr_3 [i_7])))))));
                                var_17 = max(var_5, ((((217 + 189) || (50 / 4)))));
                                var_18 = ((((((arr_7 [i_2 + 1]) || (arr_7 [i_2 + 1])))) < 63));
                            }
                        }
                    }
                    var_19 = arr_18 [i_0] [i_2];
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            {
                arr_35 [i_9] [0] [0] = 104;
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        {
                            var_20 = max(238, (min(73, (((250 <= (arr_1 [i_10] [i_12])))))));
                            arr_42 [6] [6] [i_12] [i_11] [i_11] [i_11] = var_0;
                        }
                    }
                }
            }
        }
    }
    var_21 = var_2;
    #pragma endscop
}
