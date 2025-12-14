/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 4; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_18 = ((-(((var_6 < (arr_9 [5] [10] [0] [i_3]))))));
                        var_19 = ((!(arr_4 [i_0] [i_0 - 1])));
                    }
                }
            }
            var_20 = (max(var_20, (((-(var_0 ^ -7853922659895461591))))));
        }
        var_21 = ((!(arr_1 [i_0 - 1])));
        arr_10 [i_0 + 1] = ((((((!(arr_2 [1] [i_0 - 3] [i_0]))))) != ((var_3 ? 3628087220595323664 : 0))));
    }
    var_22 = (max(var_3, ((((!var_10) >= ((var_12 ? var_16 : var_1)))))));
    var_23 = ((var_6 & ((((var_17 == 12313840087002178921) ? var_5 : (var_7 >= var_13))))));
    #pragma endscop
}
