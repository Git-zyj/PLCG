/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 4996493647184132481;
    var_15 = (min(var_15, 247));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_12 [i_3] = var_6;
                                var_16 ^= 1;
                            }
                        }
                    }

                    for (int i_5 = 4; i_5 < 15;i_5 += 1)
                    {
                        arr_15 [1] [i_2] [i_1 + 1] = 6544986149353794660;
                        var_17 ^= (arr_1 [i_1]);
                        var_18 = (min(var_18, 24));
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            var_19 *= 38;
                            arr_22 [i_1] [i_7] [i_1] [i_1 - 2] [i_1] = (((((((min(var_7, -1304110854))) * (((arr_9 [9]) / -346130489197011035))))) ? ((((247 / 1) ? 18 : (((92 ? 0 : 62783)))))) : (((arr_5 [i_0] [i_1] [i_2] [i_7]) * -24))));
                        }
                        arr_23 [11] = (((((arr_7 [i_1 - 2] [i_1 - 1] [i_0]) ? 31 : 105))));
                    }
                }
            }
        }
        arr_24 [i_0] [i_0] = (arr_13 [i_0]);
    }
    #pragma endscop
}
