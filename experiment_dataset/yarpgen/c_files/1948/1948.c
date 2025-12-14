/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 *= var_0;
                arr_7 [i_0] [i_0] [i_1] = 37309;
            }
        }
    }
    var_13 = ((var_0 ? var_11 : (max(((max(var_2, var_1))), var_8))));

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_10 [i_2] = (max(var_10, (((((arr_8 [i_2]) ? var_8 : -8488757236505011510)) % (arr_1 [i_2] [i_2])))));
        arr_11 [i_2] = (max((min(9978, (arr_1 [i_2] [i_2]))), var_11));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        arr_14 [i_3] [i_3] = (((arr_8 [i_3]) ^ var_3));
        var_14 = (min(var_14, (arr_2 [6])));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        var_15 &= -1165;

        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            var_16 *= var_4;
            var_17 = (max(var_17, var_5));
            arr_21 [i_4] = (((arr_0 [i_5]) ^ (arr_0 [i_4])));
        }
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            var_18 = (arr_19 [i_4] [i_6] [i_6]);
            var_19 = (arr_18 [i_4]);
        }
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            arr_28 [1] |= (((arr_0 [i_4]) << (arr_0 [i_4])));
            var_20 -= ((((4173810540 ? 88 : var_4)) * (arr_24 [i_4] [i_7])));
        }
        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            var_21 = var_7;
            var_22 = (((11082396151682590098 - var_4) ? (((arr_25 [i_4] [4]) ? var_2 : (arr_15 [i_4] [i_8]))) : var_0));
            var_23 = (max(var_23, 13393427597151384491));
        }
        arr_31 [i_4] [i_4] = (arr_25 [i_4] [i_4]);
        arr_32 [i_4] [i_4] = (arr_3 [i_4] [10] [i_4]);
    }
    var_24 = (((max(-32763, (var_5 * var_11))) >> var_4));
    #pragma endscop
}
