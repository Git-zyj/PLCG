/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= var_10;
    var_12 = (max(var_12, (max(var_9, (((!((max(1, 0))))))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_13 = (max(var_13, 1));
                        var_14 ^= (max(var_9, (1 && 1)));
                        arr_11 [i_0] [i_0] [i_1] [i_0] = (((((-(max(var_0, 26))))) ? var_2 : ((min((min(195, 1)), (var_8 > var_7))))));
                    }
                }
            }
        }
        var_15 = (max(var_15, 171));
    }
    var_16 ^= -var_0;
    var_17 = max((min((var_10 ^ var_10), (var_1 ^ var_1))), ((((max(127, var_6))) >> (var_1 + 677242757))));
    #pragma endscop
}
