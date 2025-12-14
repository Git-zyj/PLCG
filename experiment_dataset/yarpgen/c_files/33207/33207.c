/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_16 = (((arr_2 [i_1 + 2] [i_0] [i_0]) << (2451199136 - 2451199122)));
                arr_6 [i_0] [i_0] [i_0] = (min(1309258724, 213));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_3] [i_2] [i_3] = ((!(1843768159 % -9644)));
                            var_17 = (min((2451199137 || 1843768160), (min(9644, 3775107862))));
                            arr_14 [i_3] [i_0] [i_2] [i_0] [i_0] = (((((min(var_3, var_12)) ? (((min(11796, -9645)))) : (arr_7 [i_3 + 4] [i_2 + 2])))));
                        }
                    }
                }
                var_18 = -9644;
            }
        }
    }
    var_19 -= (!1843768176);
    var_20 = var_0;
    #pragma endscop
}
