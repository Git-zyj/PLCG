/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_11 [5] [i_0] [i_2] [i_3] = 2147483647;
                        var_15 = ((-(min(var_7, ((29625 ? var_6 : var_9))))));
                        arr_12 [12] [i_2] [i_0] [i_0] [i_1] [i_0] = ((-((var_3 ? var_0 : var_0))));
                    }
                }
            }
            var_16 = ((-(min(var_3, ((169 ? -2147483647 : var_4))))));
        }
        arr_13 [i_0] = (max(var_3, 30910));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_17 = ((7822749893235386974 >= ((((-127 - 1) ? -37 : 67)))));
        arr_18 [i_4] = (((-37 + 2147483647) >> (128 <= 107)));
    }
    var_18 = -var_13;
    var_19 = var_12;
    var_20 = (var_8 ? var_0 : ((var_2 ? (((var_12 ? var_7 : var_6))) : (max(var_11, var_13)))));
    #pragma endscop
}
