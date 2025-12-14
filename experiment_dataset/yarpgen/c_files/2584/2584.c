/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_10 = (arr_7 [i_0] [i_0] [i_2]);
                    arr_8 [i_2] [i_1] = -1;
                    var_11 = (max((((1 ? (arr_6 [i_0] [i_1] [i_2]) : 262136))), var_5));
                    arr_9 [i_0] [i_2] [i_0] = var_2;
                    var_12 = -25119;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            {
                var_13 -= ((((~(arr_14 [i_3] [i_3]))) >> (var_1 - 7599429106876525623)));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        {
                            var_14 = arr_14 [i_3 + 2] [i_3 - 1];
                            var_15 |= ((var_1 ? ((((((arr_14 [8] [i_6]) / var_7))) ? ((-9124265372926900570 * (arr_16 [14] [14] [i_5]))) : (((49152 ? var_6 : -1139057849))))) : (((~(arr_21 [i_3 + 2] [i_3 + 2] [4] [i_3 + 1] [i_3 + 1]))))));
                            var_16 = (arr_15 [i_3]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        {

                            for (int i_9 = 1; i_9 < 21;i_9 += 1)
                            {
                                var_17 = (arr_16 [i_7] [i_3 + 2] [i_9 + 3]);
                                var_18 = (min(var_18, -655034599));
                            }
                            var_19 -= 14;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
