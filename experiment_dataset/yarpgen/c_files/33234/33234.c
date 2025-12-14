/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 = (min(var_16, (((12132397948083232310 < (arr_1 [i_0] [1]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 = ((!(-621852145 + var_0)));
                    var_18 = ((var_3 ? var_14 : var_13));
                    arr_8 [i_0] [2] [i_0] = ((-((-3 ? var_11 : var_2))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                {
                    var_19 = (((var_2 + var_2) ? var_9 : var_3));
                    var_20 = ((!(arr_3 [i_4 + 1])));

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_21 |= (arr_0 [i_3] [i_5]);
                        var_22 = (((2 < var_4) / (((arr_9 [i_0] [i_4] [i_5]) ? var_14 : var_11))));
                    }
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        var_23 = (max(var_23, ((((((var_2 ^ (arr_13 [i_0] [i_4] [6])))) ? (((~(arr_16 [i_0])))) : (arr_7 [i_3] [i_4 + 2] [i_4 - 1] [i_4 + 3]))))));
                        var_24 = -2;
                    }
                    var_25 = ((var_8 ? (arr_0 [i_4 + 2] [i_0]) : -var_14));
                }
            }
        }
        arr_22 [i_0] = (arr_15 [i_0] [1] [i_0] [i_0]);
    }
    var_26 = var_14;
    #pragma endscop
}
