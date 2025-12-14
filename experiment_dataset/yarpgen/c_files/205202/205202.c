/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0 + 1] |= (arr_0 [i_0 + 4] [i_0 + 4]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 = var_5;
                    arr_8 [i_2] [i_2 + 1] [i_1] = (min((((~(arr_6 [i_0] [i_1] [i_0] [i_2])))), 233));
                    arr_9 [i_1] [i_1] [i_2] = (~1);
                }
            }
        }

        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            var_17 = var_12;
            var_18 = (arr_6 [2] [i_3] [i_3] [i_0 + 1]);

            for (int i_4 = 1; i_4 < 20;i_4 += 1)
            {
                arr_14 [i_3] [i_3] [15] [15] = ((((((arr_6 [i_3 - 2] [i_3] [i_0 - 1] [i_3 - 2]) ? var_0 : 5794969502840278141))) ? (min(-5794969502840278142, 16)) : (arr_11 [i_0])));
                var_19 = (((min((arr_13 [i_0] [i_0 + 3]), (arr_13 [i_0] [i_0 + 3]))) ^ 1289354413));
                var_20 = (min(-13, (arr_0 [i_0 - 1] [i_3 + 1])));
                arr_15 [i_0] [17] [i_0] [i_0] = (!71);
                var_21 ^= (((var_8 < 65529) ? ((var_1 % ((2571649665 ? 80 : 33554424)))) : (min((arr_6 [i_0 + 1] [i_3] [i_3] [i_0]), (arr_6 [i_0 + 3] [i_3] [i_3] [i_0])))));
            }
            arr_16 [i_0] [i_0] [4] |= (max((5794969502840278141 < var_9), 5729));
        }
    }
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        arr_19 [i_5 - 1] [i_5] = (min((-var_3 / 4), 46));
        arr_20 [i_5] [i_5] = ((-(((((64 ? (arr_17 [3]) : 19)) <= var_11)))));
        var_22 = (!var_7);
        var_23 = (max(var_23, (((((max(32768, ((var_3 - (arr_18 [i_5] [6])))))) ? (arr_18 [i_5] [i_5 - 1]) : (!-28))))));
    }
    for (int i_6 = 1; i_6 < 14;i_6 += 1)
    {
        arr_23 [i_6] [i_6] = (((((((arr_12 [i_6]) != 51)))) ? (((~var_15) ? var_14 : 8421424334750560091)) : (arr_22 [i_6 - 1])));
        var_24 = (arr_13 [i_6 - 1] [i_6]);
        arr_24 [i_6 - 1] = (max((max((((-4678379772155827368 ? 66 : (arr_17 [i_6])))), 84)), -113));
        var_25 = (((((3930074579 ? (arr_3 [i_6]) : (arr_0 [i_6 + 2] [i_6 - 1])))) ? (((((min(173, var_10))) && 1440760867))) : 66));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        arr_28 [i_7] [i_7] = (((arr_21 [i_7] [i_7]) ? (arr_21 [i_7] [i_7]) : var_5));
        var_26 = (min(var_26, (((-10 ? (arr_21 [i_7] [i_7]) : (arr_21 [i_7] [i_7]))))));
    }
    var_27 = var_8;
    #pragma endscop
}
