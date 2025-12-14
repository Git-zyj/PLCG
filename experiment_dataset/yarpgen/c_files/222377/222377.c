/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_13 = ((64 ? 64 : 18446744073709551594));
                    var_14 = ((var_4 >= ((var_11 ? var_4 : var_7))));

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        var_15 = (1059490168 > -70);
                        arr_10 [i_0] [i_0] [i_1] [i_3] [i_2] [i_3 + 2] = (((var_9 || var_0) ? var_9 : (var_6 + var_1)));
                    }
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_4 - 1] = (var_3 ? var_10 : (var_7 & var_10));
                        arr_14 [i_0] = ((-(var_9 * var_12)));
                        var_16 = ((~(var_4 | var_3)));
                        var_17 = (max(var_17, ((((var_6 >> var_1) ? ((var_4 ? var_12 : var_4)) : (~var_3))))));
                    }
                }
            }
        }
    }
    var_18 = var_3;
    var_19 = var_1;
    #pragma endscop
}
