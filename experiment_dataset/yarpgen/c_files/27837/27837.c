/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 20;i_3 += 1)
                {
                    {
                        var_12 -= (max((min(var_1, ((var_2 ? var_4 : var_10)))), ((((max(317632983, 20))) ? (((var_8 ? var_7 : var_8))) : (max(var_10, var_0))))));
                        var_13 += var_1;
                    }
                }
            }
        }
        arr_11 [i_0] [i_0] = (max(1, 5958));
        var_14 += (((((var_3 ? ((var_8 ? var_9 : var_6)) : (var_11 / 33554431)))) ? (((0 ? var_7 : var_9))) : var_5));
    }
    var_15 = ((((var_11 ? var_0 : var_1)) * ((var_8 ? var_1 : var_4))));
    #pragma endscop
}
