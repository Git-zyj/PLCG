/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 6;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_15 = ((!(((((var_11 << (var_8 - 134))) % (arr_0 [i_0] [i_1]))))));
                                arr_16 [i_3] [i_3] [7] [i_1 + 1] [i_1] [i_1] [i_3] = ((!(arr_12 [i_1 + 1] [i_2 + 1] [i_3] [i_4 - 1])));
                            }
                        }
                    }
                    var_16 = (max(var_16, 18446744073709551615));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_17 = (~3771365129);
                                var_18 -= -1906;
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (min(3771365114, var_5));
    var_20 = ((!((((max(14, 65530)) - -136286246)))));
    #pragma endscop
}
