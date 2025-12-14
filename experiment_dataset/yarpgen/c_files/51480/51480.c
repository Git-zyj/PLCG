/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (-46 / var_0);
    var_21 ^= ((((!((min(59339, 126))))) && ((min(41454, 128)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_22 = ((var_5 << ((((!(arr_4 [1]))) ? 1 : 24))));
                var_23 = var_11;

                for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
                {
                    arr_7 [i_0] [i_2] [i_2] [i_0] = ((var_10 | (min(var_9, ((128 ? var_0 : 128))))));

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] = var_19;
                        arr_11 [i_0] [i_1] [i_2] [11] [i_1] = 115;
                        var_24 &= (min(4253092170, var_12));
                        arr_12 [i_0] [i_0] [i_2] [4] = ((var_16 >> (var_2 || var_17)));
                        var_25 = (min(var_13, ((-((min(54376, 128)))))));
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_26 += (((((115 >> (var_13 - 39329))) >> ((((arr_13 [i_0] [i_2] [i_0] [i_1] [i_0]) == var_15))))));
                        var_27 += 41875126;
                        var_28 |= ((!((!(arr_6 [i_0] [i_0] [i_0])))));
                    }
                }
                for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                {
                    arr_18 [i_0] [i_1] [i_5] = ((~(arr_5 [i_0] [6] [i_1] [i_5])));
                    var_29 = ((+((18446744073709551615 ? (arr_15 [i_0] [i_1] [i_1]) : var_7))));
                    arr_19 [i_0] [i_0] [1] [i_0] = ((1 ? 1 : 9088358268015313860));
                    var_30 = (min(var_30, (((arr_1 [i_1] [1]) - -4013))));
                }
            }
        }
    }
    var_31 = (!var_8);
    #pragma endscop
}
