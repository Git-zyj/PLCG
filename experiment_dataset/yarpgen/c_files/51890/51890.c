/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= ((~((var_8 ? 254 : var_8))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_14 &= ((1 || (!-2955)));
        arr_3 [i_0] [i_0] = (((~(((arr_0 [i_0] [1]) + 140)))));
    }
    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {
        var_15 = (min(var_15, -164));
        var_16 = (!var_4);
        var_17 = (max((((((-2938 ? (arr_2 [i_1]) : 2955))) ? 127 : (((!(arr_4 [0])))))), (!-20105)));
    }

    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    var_18 ^= (((max(68, (arr_13 [i_2] [i_3 + 1] [10]))) << (((!(arr_13 [i_2 + 1] [i_3 + 1] [0]))))));

                    /* vectorizable */
                    for (int i_5 = 3; i_5 < 13;i_5 += 1)
                    {
                        arr_18 [8] [i_3] [12] [i_5 + 1] |= ((~(-127 - 1)));
                        arr_19 [i_3] [i_3] [2] [2] [i_4] = ((!(arr_0 [i_3 + 1] [i_3 - 1])));
                    }
                }
            }
        }

        for (int i_6 = 2; i_6 < 13;i_6 += 1)
        {
            arr_22 [4] |= (arr_8 [i_2]);
            var_19 = ((~((min((arr_12 [i_2 + 2] [i_2 + 1]), (arr_12 [i_2 - 1] [i_2 + 1]))))));
            var_20 = (arr_11 [i_2] [10] [10]);
        }
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            var_21 = (min(var_21, var_12));
            var_22 *= (arr_0 [1] [i_7]);
        }
        var_23 = (!((max(1, (arr_15 [i_2 + 1])))));
    }
    var_24 = 140;
    var_25 = var_8;
    #pragma endscop
}
