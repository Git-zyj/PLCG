/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_11 = (((var_1 && var_0) % (~var_1)));
                var_12 = (min(1, 1));
                arr_5 [i_1] [i_0] = ((((~(arr_1 [i_1 + 1])))) ? (((max(1, 511)) << ((((min((arr_4 [i_0] [i_0] [i_1 + 1]), 0))) + 63)))) : (!var_8));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    var_13 = (((9223372036854775807 >= 5) ? (arr_6 [i_0] [i_0] [i_2] [i_2]) : (arr_8 [i_1 - 1])));
                    var_14 = var_6;
                    arr_10 [i_0] [i_1] [0] [i_1] = 9223372036854775806;
                }
            }
        }
    }
    var_15 = var_0;
    var_16 = (min(((((-2147483647 - 1) >= ((var_4 ? 9223372036854775807 : var_4))))), (max((var_9 + 7424221728457932992), ((min(2147483647, 1)))))));
    var_17 = (~var_3);
    var_18 = (min((((var_1 ? -9223372036854775807 : -695322515))), (((43582 << 1) ? 4294967295 : ((min(var_7, -31471)))))));
    #pragma endscop
}
