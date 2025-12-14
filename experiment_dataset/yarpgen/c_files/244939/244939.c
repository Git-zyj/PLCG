/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((((var_11 / (((var_4 ? var_6 : var_6)))))))));
    var_13 = (max(var_13, var_2));
    var_14 ^= var_5;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_10 [i_1] [i_1] [i_1] [i_1 - 2] [0] [i_1 - 2] = var_2;
                        var_15 = (max(var_15, ((+(((arr_3 [i_0]) - 1276578863))))));
                    }
                }
            }
        }
        var_16 = ((((!(((-(arr_3 [i_0])))))) ? (arr_0 [20]) : ((((((~26409) + 2147483647)) >> ((((var_8 ? var_0 : var_6)) - 124)))))));
    }
    #pragma endscop
}
