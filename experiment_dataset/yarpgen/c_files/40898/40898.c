/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_2, ((min(var_11, var_5)))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_13 = 1533895796;
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_14 ^= (((arr_1 [i_0 + 1]) >> ((((-11373 ? 14465321902591349185 : 236)) - 14465321902591349169))));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_15 = var_2;

                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            var_16 = (var_4 & 4294967266);
                            var_17 = (max(var_17, var_3));
                            var_18 = 22931096;
                        }
                        arr_14 [i_0] [i_2] = 236;
                        arr_15 [i_0] [i_1] [i_0] [i_3] [i_3] = (((((arr_4 [i_0] [i_0] [i_0 + 2]) ? var_11 : 20)) > ((((arr_8 [i_1 + 1] [i_2] [i_1 + 1] [i_0]) ^ 41989)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
