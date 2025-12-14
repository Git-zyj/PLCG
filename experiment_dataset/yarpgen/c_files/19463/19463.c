/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= (min(((((max(var_14, var_1))) & var_1)), 1));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_18 = (min(var_18, -1966167143));
        arr_3 [i_0] = 17;
        var_19 = (min(var_19, (((((((var_14 ? var_3 : (arr_2 [i_0]))))) ? ((2120122644 ? -5 : var_4)) : -32487)))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        arr_8 [i_1 + 1] [i_1 + 2] = ((~(arr_1 [i_1] [i_1])));
        arr_9 [i_1] = 12399311575847269467;
        arr_10 [i_1] [i_1] = -64;
        arr_11 [i_1] [i_1 + 2] = ((!(var_14 + 2174844652)));
    }
    var_20 = 10831;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            {

                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    arr_19 [i_3] [i_3] [i_3 + 1] [i_4] = ((((((arr_14 [i_2] [i_2]) & (arr_13 [i_4])))) % (min(7, ((var_4 * (arr_2 [i_3 - 1])))))));
                    arr_20 [i_4] [0] [i_2] |= 25;
                    var_21 = ((34 >> (-15014 + 15024)));
                }
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    var_22 = (min(var_22, ((((~7) & 1966167143)))));
                    var_23 = ((-(arr_4 [i_2] [i_3 + 1])));
                    arr_25 [i_2] [i_3] = (~((var_8 ? (arr_1 [i_3 - 1] [i_3 - 1]) : 51216)));
                    var_24 *= ((((max((arr_1 [i_3 - 1] [i_3 - 1]), (arr_1 [i_3 + 1] [i_3])))) ? ((max((arr_1 [i_3 + 1] [19]), (arr_1 [i_3 - 1] [i_2])))) : 230));
                }

                for (int i_6 = 3; i_6 < 11;i_6 += 1)
                {
                    var_25 = (arr_16 [i_2] [i_3] [i_3] [i_6]);
                    var_26 *= (arr_15 [2]);
                    var_27 = (min(var_27, (~var_9)));

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_28 = (min(var_28, var_12));
                        arr_30 [i_3] [i_6] [i_3] [i_3] = var_0;
                        arr_31 [i_2] [i_2] [i_6] [i_7] [i_2] [i_3] = ((2120122643 ? (arr_2 [i_3 - 1]) : (((25 ? var_1 : 30)))));
                    }
                }
            }
        }
    }
    var_29 = var_12;
    #pragma endscop
}
