/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -var_1;
    var_12 = (min(var_12, ((((((!(!-20)))) ^ ((((((var_1 ? 20 : var_0))) && -80))))))));
    var_13 = 0;
    var_14 = (((var_5 ? -var_1 : var_8)));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_15 = ((!(arr_1 [i_0])));

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                var_16 = (~var_0);
                var_17 = (arr_6 [i_1]);
                var_18 = ((var_10 >= (arr_8 [i_0] [21])));
            }
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                var_19 = (arr_12 [i_3] [i_0]);
                var_20 = var_10;
                var_21 = -1;
            }
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        {
                            var_22 *= ((-0 ? (arr_2 [i_0]) : 1));
                            var_23 = 214;
                            var_24 = (((arr_4 [i_0] [14] [i_0]) ? ((4963425142844846171 ? 1 : (arr_8 [i_1] [i_1]))) : var_3));
                        }
                    }
                }
                var_25 = ((0 ? (arr_20 [i_4] [i_1] [i_1] [i_1] [i_4]) : 3));
            }
            var_26 = ((((1 ? 1898913868865230449 : var_5)) > ((((0 >= (arr_12 [12] [18])))))));
        }
        var_27 = (arr_4 [19] [19] [i_0]);
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        var_28 = (arr_19 [i_7]);
        var_29 = ((!(arr_21 [i_7] [i_7] [i_7] [i_7] [i_7] [2])));
        var_30 = (18446744073709551615 > 1);
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_31 *= ((~(max((arr_27 [i_8]), ((45 ? var_0 : var_9))))));
        var_32 = (max(var_32, ((((!1) ? (((var_3 >> (var_5 + 6149233095970111388)))) : ((-10 ? (arr_5 [i_8]) : (arr_3 [1]))))))));
    }
    #pragma endscop
}
