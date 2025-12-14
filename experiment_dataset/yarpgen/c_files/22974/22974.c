/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(18446744073709551603, (max((min(1844, 18446744073709551603)), (max(2110606390, 7))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_20 = 2747996453;

                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    arr_9 [i_2] [i_2] = ((((2571718312455026308 ? 12 : 255)) ^ ((127 ? -1609320353135137111 : 18446744073709551604))));
                    var_21 *= (((((12 ? 9223372036854775807 : 18446744073709551603)) % 1546970852)));
                    var_22 = (max((((18446744073709551603 <= 127) ? (15 & 23) : 1546970843)), (1378377915 / 1546970838)));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    arr_12 [i_3] [i_3 + 1] [0] [i_3] = 1546970837;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0 + 2] [i_3] [i_0 - 4] [i_0] [i_0] [i_0] = (42769 <= 1908038101);
                                arr_19 [i_0 + 2] [i_0 + 2] [i_0] [i_0] [i_0] [i_0] [i_3] = 18446744073709551606;
                            }
                        }
                    }
                    var_23 = ((1546970872 ? 0 : 2747996436));
                }
                var_24 = (min(var_24, 1546970857));
                var_25 += ((((max((15104 / 5628086289349448625), ((min(1546970843, 1546970842)))))) ? 4294967277 : 2073021865));
            }
        }
    }
    var_26 = var_13;
    #pragma endscop
}
