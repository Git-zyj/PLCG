/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, ((max(-6510298418073887629, (max(var_0, (arr_0 [i_0 - 2]))))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_21 = (((arr_9 [i_0 + 2]) ? (arr_1 [i_0 - 1]) : var_18));
                        arr_11 [i_0] [i_0 + 2] [i_0 - 1] [i_0] [i_1] [i_0] = (((((arr_0 [1]) ? 2147483632 : var_0)) / (arr_1 [i_1])));
                    }
                    arr_12 [i_2] [i_1] [i_2 + 1] [i_0] = (155 ^ 0);
                }
            }
        }
    }
    var_22 &= ((var_19 ? var_13 : ((var_0 | (max(65088488997505815, var_9))))));
    var_23 &= (min(((((max(var_4, var_10))) / ((10458 ? 17414817413322053850 : 7619780323836435358)))), (var_1 && var_7)));
    #pragma endscop
}
