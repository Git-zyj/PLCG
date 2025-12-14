/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= (((((min(var_3, (22 * var_7))) + 2147483647)) >> (4503599627370495 || 1)));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 = (min(var_14, (-2665616522734525160 >= -10357)));
        var_15 = ((+(min((107 || -2665616522734525160), ((379 ? -380 : -2665616522734525156))))));
        var_16 = (min(var_16, ((((0 % var_4) / 1)))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        var_17 -= (arr_5 [i_1 - 1] [i_1 - 1]);
        var_18 = (max(var_18, (arr_4 [i_1])));
        var_19 = arr_2 [1];
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_20 -= ((!(((((max((arr_8 [i_2] [i_3]), 18446744073709551615))) ? 530998058995301250 : var_8)))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_19 [i_4] [i_3] = ((((((arr_0 [i_4]) + -2665616522734525158))) ^ ((((((arr_8 [i_5] [10]) ? (arr_14 [i_3] [10] [i_5]) : (arr_15 [i_2 - 1] [i_3] [i_4] [i_5])))) ? (arr_13 [i_2 - 2] [i_4] [i_2 - 2]) : (((17193612546433994079 ? -1298 : var_2)))))));
                            var_21 &= ((-1 ? (arr_2 [i_2]) : ((((-1647 - var_7) || (16256 % 39))))));
                        }
                    }
                }
                var_22 += (((((arr_14 [i_3] [i_3] [21]) != (((arr_0 [i_2]) % 1)))) ? ((-(((var_9 <= (arr_13 [i_2 + 1] [i_2] [i_3])))))) : (((((7403 ? -2 : (arr_13 [1] [i_2] [i_2]))) < ((min(var_12, 2665616522734525164))))))));
                var_23 = ((-((((arr_15 [i_2] [19] [19] [i_2 + 1]) ? 12317706232094642785 : (arr_1 [i_2]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 2; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            {
                var_24 = (min((min(((1 ? var_6 : -17397)), ((((arr_17 [i_6] [i_6] [i_6] [i_6] [i_7]) >= var_7))))), ((((min(1, -27))) / 70))));
                var_25 = var_12;
            }
        }
    }
    #pragma endscop
}
