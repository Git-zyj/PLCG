/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
                    {
                        var_13 = var_3;

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            arr_14 [i_0] [i_0] [i_2] [i_3] [i_4] = (i_0 % 2 == zero) ? (((var_2 >> (((arr_8 [i_0] [i_3]) + 3667706516243117682))))) : (((var_2 >> (((((arr_8 [i_0] [i_3]) + 3667706516243117682)) - 7123898206249423852)))));
                            var_14 = ((!(((var_10 ? 45473 : 4476)))));
                            var_15 = 4476;
                        }
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            arr_18 [i_0] [i_0] [i_2] [i_0] [i_5] = (((((var_8 ? var_0 : var_10))) && (((-var_12 & (arr_0 [i_0] [i_5]))))));
                            var_16 = (((var_5 > var_2) <= var_5));
                        }
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                    {
                        arr_21 [i_0] [i_1] [i_2] [i_0] = (-9223372036854775807 - 1);
                        var_17 = (max(var_17, ((((((((var_8 ? (arr_12 [i_0] [6] [i_0] [15] [i_6]) : (arr_19 [i_0] [i_1] [i_2] [i_6])))) == -var_6)) ? (!var_12) : var_5)))));
                    }
                    arr_22 [i_0] [i_0] = (arr_16 [i_0 + 2]);
                }
            }
        }
    }
    var_18 &= (((((var_11 / var_0) & var_12)) - 27821));
    var_19 = var_6;
    #pragma endscop
}
