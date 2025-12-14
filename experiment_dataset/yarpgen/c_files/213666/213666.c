/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, -1136983458));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 += var_4;
        var_20 = (max(var_20, var_14));
        var_21 = ((((((var_13 ? var_15 : var_3)))) || var_11));
        var_22 = (max(0, 2147483641));
    }
    var_23 = var_14;
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_24 = var_17;
                    var_25 -= var_15;
                    arr_11 [i_3] [i_2] = (((arr_1 [i_2 + 1]) / ((154 - (arr_1 [i_3])))));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        arr_14 [i_1] [i_2 + 1] [10] [i_2 + 1] = 2;
                        var_26 += (var_1 | var_5);
                        var_27 = var_14;
                    }
                    var_28 = (max(var_28, 154));
                }
            }
        }
    }
    #pragma endscop
}
