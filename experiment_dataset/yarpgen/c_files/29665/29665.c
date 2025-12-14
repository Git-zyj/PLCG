/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_12 += (max(var_0, ((((((-2147483647 - 1) ? var_6 : 10880))) ? var_9 : ((var_0 ? (arr_0 [i_0]) : (arr_3 [i_0])))))));
                    var_13 |= var_0;
                }
            }
        }
        var_14 = (min(var_14, 52));
        var_15 = (max(var_5, -96));
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_16 += 1857118038;
        arr_12 [i_3] [i_3] = (min(((var_7 ? var_0 : var_3)), ((((max(var_5, (arr_10 [i_3] [i_3])))) % 20823))));
    }
    var_17 = var_7;
    var_18 = var_2;
    var_19 = var_9;
    #pragma endscop
}
