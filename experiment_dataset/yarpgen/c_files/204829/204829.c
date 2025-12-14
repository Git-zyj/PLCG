/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~((6 ? 251 : 12)));
    var_21 = (max(var_1, 12));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_22 ^= (min((max((~5027), -2986)), 245));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_23 = ((!(arr_3 [i_0 - 2])));
                    arr_10 [i_0] [i_1] [i_0] = (max(40583, 24964));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_0] = ((2970 && ((((min(24959, 0)) * (((min(121, -44)))))))));
                        arr_14 [19] [i_0] [i_2] [i_3] = -2955;
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_24 = ((21 < (!5027)));
                        arr_17 [i_0] [20] &= ((-29217 ? -5 : -12));
                        var_25 += ((((min(19354, 838837310) | -838837328))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
