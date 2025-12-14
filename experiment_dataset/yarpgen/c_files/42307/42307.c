/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_14 = (min(var_14, (((1 * var_6) != 1))));
        var_15 = (!1);
        var_16 ^= var_8;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_11 [i_0] = var_4;
                        arr_12 [i_2] [i_0] = (var_12 ^ -5153454720933793718);
                    }
                }
            }
        }
    }
    var_17 = (min(var_17, var_0));
    var_18 += (max((max(var_0, (!3813548456))), var_7));
    #pragma endscop
}
