/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_1 != (var_12 - var_0)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (min(var_17, (arr_0 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_2] [i_0] [i_0] = (((((var_2 ? var_9 : var_7))) - ((var_1 << (4294967291 - 4294967291)))));
                    var_18 &= (!((((arr_0 [i_0] [12]) ? var_3 : var_6))));
                }
            }
        }
        var_19 = (((0 & -22433) - (1 * 65535)));
        var_20 = ((var_7 ? var_4 : 34692));
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_21 = ((-(min(3798, 4294967280))));
                                arr_20 [1] [i_7] [i_3] [i_6] [i_3] [21] [i_3] = ((((((arr_14 [i_3 + 3] [i_3] [14] [i_3 - 1]) - (arr_15 [i_3])))) ? -60027 : (arr_17 [i_3] [i_4] [i_5] [i_6] [i_6])));
                                arr_21 [i_3] [i_4] [i_5] [1] [i_7] = var_13;
                            }
                        }
                    }
                }
                var_22 = ((arr_14 [i_3] [i_3 + 3] [i_3 + 3] [i_3 + 1]) - 5220);
                var_23 += ((var_10 / (((max(39288, 11521))))));
            }
        }
    }
    var_24 = 5220;
    #pragma endscop
}
