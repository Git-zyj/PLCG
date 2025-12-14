/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_14 *= (min(0, -8134257022519301822));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_1] = (((arr_10 [i_0 + 2] [i_1] [i_2 - 1] [i_1]) ? (((min(14920976817050697110, 3525767256658854485)) ^ ((-(arr_5 [i_1]))))) : (((~(arr_6 [i_1]))))));
                        var_15 = (min(var_15, 14920976817050697131));
                    }
                }
            }
        }
        arr_13 [i_0] = (arr_0 [i_0]);
        var_16 = 0;
    }
    var_17 = (min(var_17, -2));
    var_18 = -var_10;
    var_19 ^= var_2;
    var_20 = var_13;
    #pragma endscop
}
