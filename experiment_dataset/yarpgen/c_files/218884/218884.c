/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((((max(855158771, 285227499877968850))) ? var_0 : (~var_0))), (~var_8)));
    var_11 = var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_12 = (~-var_1);
            arr_7 [i_0] [i_0] [i_0] = (((arr_6 [i_1] [i_0] [i_0]) & (((254 ? 855158771 : (arr_0 [i_0]))))));
            arr_8 [i_0] = ((-((var_4 ? -113 : var_7))));
            arr_9 [i_0] [i_1] [i_0] = ((((arr_0 [i_0]) ? 113 : var_6)));

            for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
            {
                arr_14 [i_0] = (var_1 ? -var_3 : (~-113));
                arr_15 [i_2] [i_0] [i_0] = (~-var_9);
                arr_16 [i_0] [i_0] = var_9;
                arr_17 [i_0] [i_0] [i_0] = (((var_0 | var_4) || -855158771));
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
            {
                var_13 = var_6;
                var_14 = (max(var_14, (((~(~var_8))))));
                arr_21 [i_0] [i_1] [i_3] = -var_5;
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                {
                    arr_28 [i_5] [i_0] [i_0] [3] = 84;
                    arr_29 [i_0] [i_4] = ((var_6 + (arr_6 [i_0] [i_0] [i_5 - 1])));
                    var_15 = (min(var_15, ((((var_5 / var_0) <= -var_0)))));
                    arr_30 [i_0] [i_4] [i_5] [i_5 - 1] |= (~2505212050508660659);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 12;i_7 += 1)
            {
                {
                    var_16 = (!19010);
                    arr_36 [i_0] [i_0] = (~-21);
                    arr_37 [i_0] [i_6] [i_0] [i_0] = ((arr_33 [i_7 + 3] [i_7 + 1] [i_7 + 3]) - var_1);
                }
            }
        }
    }
    var_17 = (max(var_17, ((((((!(var_7 || 38)))) - ((-((var_9 ? var_8 : var_6)))))))));
    #pragma endscop
}
