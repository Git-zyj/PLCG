/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (-21572 + 3657578348);
    var_18 = ((((var_5 && (!var_11))) ? var_8 : var_12));
    var_19 |= var_6;
    var_20 ^= (max((max((max(var_12, 18446744073709551615)), (((var_5 >> (184 - 173)))))), ((((var_0 || var_1) / var_12)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_21 |= (((((((arr_5 [i_0] [i_1]) ? (arr_5 [i_0] [i_1]) : (arr_4 [i_0] [i_0] [10]))) >= 32070)) ? (arr_4 [i_0] [i_0] [i_1]) : (arr_1 [i_1])));
            arr_7 [i_0] [i_0] [i_0] = ((!(((arr_4 [i_1] [i_0] [i_0]) != var_4))));
            arr_8 [i_0] [i_0] = (((((-(arr_2 [i_0])))) ? (arr_2 [i_0]) : (((arr_5 [i_1] [i_0]) ? (arr_2 [i_0]) : -125))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                var_22 = (arr_4 [i_2] [i_2] [i_2]);
                var_23 = (max(var_23, (arr_11 [1] [i_3] [i_0])));
                var_24 = (((arr_11 [i_0] [i_2] [i_3]) | (arr_5 [i_0] [i_2])));
            }
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                var_25 = (min(var_25, (arr_13 [i_4] [i_2] [i_0])));
                var_26 = (max(var_26, var_9));
                var_27 -= (((arr_0 [i_0]) <= 192));
                var_28 = (-125 ^ 124);
                /* LoopNest 2 */
                for (int i_5 = 4; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_29 = (((637388919 | -126) <= (arr_19 [i_0] [i_2] [i_5 - 2] [i_2] [i_2])));
                            var_30 = ((((184 ? 117 : 161)) & var_5));
                        }
                    }
                }
            }
            var_31 = -821745310;
            arr_21 [i_2] [i_0] = (arr_4 [i_0] [i_0] [i_0]);
        }
        var_32 = (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    for (int i_7 = 1; i_7 < 13;i_7 += 1)
    {
        var_33 -= ((17 ^ (arr_19 [i_7] [i_7] [i_7 + 2] [i_7 + 2] [i_7])));
        var_34 = (!((((arr_16 [i_7 + 2] [i_7] [i_7] [16] [i_7] [i_7 + 2]) & (arr_16 [i_7 + 1] [i_7] [i_7] [8] [i_7 + 4] [i_7])))));
    }
    #pragma endscop
}
