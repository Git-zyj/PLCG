/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_15));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] [i_0] = ((~((+(((arr_4 [i_1] [i_0]) & var_10))))));
                var_21 = ((((((((!(arr_5 [i_0])))) << ((((-(arr_1 [i_0] [i_0]))) + 29575))))) % (arr_4 [i_0] [i_1])));
                var_22 = ((((((3408 ? 13801172177084212518 : 20841)) / (~var_14))) & (((+(((((arr_0 [i_1]) + 9223372036854775807)) << (((var_8 + 54) - 36)))))))));

                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    var_23 = ((!((((arr_0 [i_2 - 1]) ? var_15 : (arr_0 [i_2 + 1]))))));
                    arr_11 [i_2 - 1] [9] [i_0] [i_0] = (((-(arr_9 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_1]))));
                    arr_12 [10] [i_1] [i_0] = (((((arr_10 [i_2 + 1]) ? var_1 : (arr_10 [i_2 - 1]))) + var_5));
                    var_24 &= ((((((-(~var_6))) + 2147483647)) << (((((((arr_9 [i_2 - 1] [i_0] [i_0] [i_0]) ? (arr_0 [6]) : var_0)) << (((((arr_2 [i_0]) ? var_11 : (arr_2 [6]))) + 416683153)))) - 8677222370850969600))));
                }
            }
        }
    }
    var_25 = (-(((!(((var_9 ? var_14 : var_3)))))));
    var_26 = (max(var_26, ((((!var_16) ? var_1 : (((var_7 / var_6) - (var_14 - var_19))))))));
    #pragma endscop
}
