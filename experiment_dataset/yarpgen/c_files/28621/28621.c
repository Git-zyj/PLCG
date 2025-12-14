/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_0] = 32768;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 9;i_3 += 1)
                {
                    {
                        arr_11 [7] [i_0] [i_0] [0] = ((((274877906943 ? var_12 : 1)) >= var_9));

                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            var_19 = (min(var_19, var_15));
                            arr_14 [i_0] [i_0] [i_2] [i_3 - 1] = (((((var_5 ? var_11 : 206))) ? var_8 : var_18));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_20 -= ((16646144 ? 8 : -22342));
                            arr_19 [i_0] [i_0] [i_0] [i_3] [i_5] [i_5] = ((1 ? (122 - 4299098122045962341) : -8388607));
                        }
                        var_21 = var_14;
                        arr_20 [i_1] [i_2] [i_1] [i_0] = ((var_8 % ((var_13 ? 41999 : -19590))));
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            arr_24 [i_0] [i_0] = (((((arr_12 [i_6] [i_6] [i_6] [4] [i_6]) + -6442827984273669302))) && (((var_3 ? var_12 : (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))));
            var_22 = (max(var_22, 2047));
            var_23 = (max(var_23, (arr_5 [i_6] [i_6])));
        }
        var_24 = (((arr_23 [i_0]) ^ var_7));
        var_25 = 6;
        arr_25 [i_0] [i_0] = var_10;
    }
    var_26 = (max(var_5, var_15));
    var_27 = (min(var_27, (((((((4294967295 ? var_7 : 561850441793536)) != var_9)) ? ((max(3541594879679659660, var_13))) : var_16)))));
    var_28 = ((var_3 ? ((min(var_14, var_16))) : (!-2403)));
    var_29 = 15;
    #pragma endscop
}
