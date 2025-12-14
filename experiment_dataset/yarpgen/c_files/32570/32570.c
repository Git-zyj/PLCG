/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= (~var_3);
    var_11 += ((((((142140876 < 4152826420) ? (~1) : var_9))) | var_8));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_12 ^= (!var_7);
        arr_3 [4] = var_6;
        var_13 = ((var_3 * ((-(((arr_1 [i_0]) / 3166188906))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 8;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = ((142140864 ? (arr_11 [i_1 - 1] [i_1] [i_1 + 1] [i_2 + 1] [i_3 + 2]) : var_2));
                            arr_13 [i_1] = var_1;
                        }
                        var_14 -= (min(((var_0 ? var_1 : (1592262001 / 106))), 29136));
                        var_15 += ((~(((var_2 >= (arr_6 [2] [i_2 - 1] [i_3 + 2]))))));
                        arr_14 [i_1] [i_1] [i_1] = var_0;
                        var_16 = (min(var_1, ((var_0 - ((((arr_2 [i_0] [9]) ? (arr_1 [i_0]) : (arr_6 [i_1] [3] [i_1]))))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 13;i_5 += 1)
    {
        var_17 = (arr_17 [i_5 + 3]);
        var_18 *= (arr_16 [i_5 - 1]);
    }
    #pragma endscop
}
