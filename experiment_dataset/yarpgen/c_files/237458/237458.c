/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [i_0] &= (max(1142570302, 1));
        var_14 = ((((max((arr_0 [i_0] [i_0]), (arr_1 [i_0])))) ? (arr_0 [i_0] [i_0]) : ((((arr_1 [i_0]) && var_8)))));
    }
    var_15 = ((-(max(-107, var_4))));
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 7;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 9;i_5 += 1)
                        {
                            {
                                arr_16 [i_5] = ((var_0 ? (min(((var_5 ? (arr_10 [i_4]) : 72)), (!var_13))) : 31813));
                                var_16 = (((arr_13 [i_5 + 2] [i_3 - 1]) >= (arr_13 [i_5 + 2] [i_3 + 4])));
                            }
                        }
                    }
                    var_17 = -45;
                    var_18 = -12146;
                    arr_17 [1] [i_3] = (((var_6 < ((max(var_0, -26))))));
                }
            }
        }
    }
    var_19 -= var_11;
    #pragma endscop
}
