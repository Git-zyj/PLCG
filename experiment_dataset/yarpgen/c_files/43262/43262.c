/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (-127 - 1);
    var_13 = -16;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_14 = (max(var_14, (arr_0 [4])));
        var_15 = (min(var_15, (((-465382145 / (arr_0 [10]))))));
        var_16 = (max(var_16, (((-465382138 ? -1 : var_7)))));
        var_17 -= ((var_9 ? (((arr_3 [1] [1]) ? (arr_2 [6] [6]) : (arr_1 [1]))) : 47159));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        arr_16 [1] [i_2] [i_1] [i_4] [i_4] = var_0;
                        arr_17 [i_1] = (arr_15 [i_1] [i_2]);
                        arr_18 [i_1] [i_1] [i_1] [i_1] = (((((1 - 51) + 2147483647)) << (((((arr_15 [i_1] [i_1]) ? 1 : (max((arr_1 [i_1]), var_7)))) - 1))));
                        arr_19 [15] [i_2 - 1] [i_3] [i_4] [i_1] = (24 * 53024);
                    }
                }
            }
        }
        var_18 += (!-2);
        arr_20 [i_1] = (-(-73 / 115));
    }
    #pragma endscop
}
