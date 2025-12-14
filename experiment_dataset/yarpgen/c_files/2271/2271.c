/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = (((arr_7 [i_1] [i_0] [i_0] [i_2]) || var_3));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_12 -= (!(arr_10 [6] [i_4 + 1]));
                                var_13 *= -317263668194546702;
                                var_14 = (((arr_1 [i_4 - 1]) < (arr_3 [i_4 - 2] [i_1])));
                            }
                        }
                    }
                    var_15 -= (((arr_0 [i_2]) || (arr_6 [i_0] [i_1] [4] [i_2])));
                    var_16 = (max(var_16, (((((var_11 ? var_1 : var_3)) <= 7575)))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                {
                    arr_21 [i_6] [i_5] [i_5] [i_6] = (((-5726637260904251138 ? -7571 : -5726637260904251145)));
                    arr_22 [i_0] [i_5] [i_6] = ((!(arr_16 [i_0])));
                    var_17 = (min(var_17, var_8));
                    arr_23 [i_6] [i_5] [i_6] [i_6] = (arr_2 [i_6]);
                }
            }
        }
        var_18 = (arr_6 [i_0] [2] [2] [i_0]);
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        var_19 = (min(var_19, ((((((-5726637260904251145 ^ -7587) < (arr_24 [i_7]))) ? -5726637260904251151 : (-30305 == -27))))));
        var_20 = (min(var_20, (((-(((9223372036854775807 == ((((var_10 <= (arr_25 [i_7])))))))))))));
    }
    var_21 = ((min((~0), (-5726637260904251137 / 1))));
    #pragma endscop
}
