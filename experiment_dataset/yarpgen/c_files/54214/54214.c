/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(((-(min(var_10, var_12)))), -var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_14 = var_9;
                arr_4 [i_1] [i_0] = (min(-1, -20));
                arr_5 [i_0] [i_1] = (((7 != -var_4) ? (min((((var_5 + 2147483647) << (var_7 - 1599728835))), (31 || 2))) : var_5));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] = -6;
                            var_15 = ((-((-65535 ? -1 : ((var_2 ? 65535 : 1))))));
                            var_16 = (-4 != var_10);
                            var_17 = (max((arr_1 [i_0] [i_0]), (((max(1, var_1))))));
                            arr_14 [i_1] = ((-(((0 <= 25) ? -1 : (7 || 18446744073709551609)))));
                        }
                    }
                }
            }
        }
    }
    var_18 = ((-(min(126, -0))));
    #pragma endscop
}
