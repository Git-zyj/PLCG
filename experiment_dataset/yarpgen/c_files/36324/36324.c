/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, 1152917106560335872));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_11 = (arr_1 [i_2]);
                            var_12 = (min(var_12, (((((!(arr_2 [i_3] [i_1]))) ? (arr_0 [i_2]) : var_2)))));
                        }
                    }
                }
                var_13 = min((arr_5 [i_1] [i_1] [i_0] [i_0]), ((((-32767 - 1) && ((min((arr_7 [i_0]), var_2)))))));

                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    arr_13 [i_0] [i_0] [i_4] [i_4] = (arr_9 [i_4] [i_4 - 1] [i_4] [i_4 + 1]);
                    var_14 = (arr_6 [i_0] [i_1]);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 14;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            {
                                var_15 = ((((min(var_4, (((var_0 >> (var_9 + 24))))))) ? (((((1 ? 926772696604646142 : var_9))) ? (min(4294967295, (arr_8 [6]))) : ((18446744073709551615 ? 1 : 65472)))) : ((((0 / 249) ? -61 : ((max((arr_19 [i_5 - 1] [i_6] [i_7 + 1] [i_8 - 1]), 2996))))))));
                                var_16 *= -2981;
                            }
                        }
                    }
                    var_17 = ((-(min(9247438802041536560, -117))));
                    var_18 = (arr_18 [i_5] [i_5]);
                    var_19 = ((((var_7 ? (arr_9 [i_5] [i_7] [i_7 - 1] [i_7]) : (((var_6 || (arr_20 [i_7] [i_7] [i_6] [i_5])))))) % (arr_25 [12] [12] [i_7 - 1] [i_7] [i_7] [i_7])));
                    arr_27 [i_7] [i_6 - 2] [i_5] [i_5 + 1] = (min((arr_26 [i_7]), (min((arr_7 [i_6]), -2997))));
                }
            }
        }
    }
    #pragma endscop
}
