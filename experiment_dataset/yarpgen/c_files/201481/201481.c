/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (min((max(((-10333 ? var_3 : var_6)), var_8)), var_8));
        var_12 = (max((arr_1 [i_0 - 2] [i_0]), (max(var_4, (-1525352255 - var_4)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_11 [i_2] [i_2 - 1] = ((!((((((arr_0 [i_1] [i_2]) ? var_9 : var_5)) << ((((var_2 ? 65535 : (arr_6 [i_0] [i_1] [i_2 - 2] [i_2]))) - 65482)))))));
                        arr_12 [i_0] [i_2] [i_0] [i_0] [i_0 + 1] [i_0] = ((+(min(var_7, ((var_7 ? (arr_7 [i_0] [i_0] [i_0]) : var_11))))));
                        var_13 &= (var_9 ? ((((arr_4 [i_2 - 1] [i_0 + 1]) ? 1 : ((126 ? 1749618793 : var_10))))) : -2358450640463537460);
                        arr_13 [i_0] [i_1] [i_1] [i_3] [i_1] [i_0] &= (((((4294967284 % var_4) ? (max(var_11, var_1)) : (~var_3))) ^ (arr_9 [i_0] [i_0 + 1] [i_1] [i_0 + 1] [i_1] [i_0 + 1])));
                    }
                    arr_14 [i_0 - 1] [i_1] [i_2] [i_2] = ((((((2815 ? var_1 : 1)) ? var_11 : 5217))));
                    var_14 = 8;
                }
            }
        }
        arr_15 [i_0] = ((+(((arr_0 [i_0] [i_0 - 2]) + var_9))));
    }
    var_15 = ((!(((var_11 / ((var_8 ? -4658228483894082693 : -114)))))));
    var_16 = (var_1 ? var_2 : ((~(max(var_10, var_8)))));
    var_17 = (!var_9);
    #pragma endscop
}
