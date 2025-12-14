/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [i_0] = var_5;
        var_11 = var_3;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_12 = (((arr_4 [i_1]) & 1));
        var_13 = (min(var_13, (((((!(arr_5 [1]))) ? var_5 : (arr_3 [i_1] [0]))))));
        arr_6 [i_1] = 159;
    }

    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        var_14 -= 4;

        for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
        {
            var_15 = (max(var_15, ((((38 | var_5) ? ((-(arr_8 [i_3]))) : ((((-2147483647 - 1) ? 12 : 1))))))));
            var_16 = (max((0 * 1), ((((max(-103, 1))) & (arr_8 [i_2])))));
            var_17 = (max((max((arr_7 [i_2 + 2]), 1)), (max(((max((arr_9 [i_3] [i_2] [i_2]), var_2))), (-2147483647 - 1)))));
            var_18 = var_8;
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
        {
            var_19 += (max(((((max(113, (arr_7 [i_4])))) ? (arr_11 [i_2] [i_2]) : ((max(var_0, (arr_11 [i_2] [i_2])))))), ((+(min((arr_7 [i_2]), 121))))));
            var_20 = (max(var_8, 1));
            var_21 = ((var_9 ? (((((max(0, 37227))) ? (arr_11 [i_2] [i_4]) : ((255 ? var_8 : var_3))))) : ((-119 ? (min(49683, var_1)) : 33482))));
            arr_13 [i_2] [1] = (max(((((max(var_5, var_7))) ? var_3 : (28309 / var_9))), 1));
            var_22 = var_9;
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
        {
            arr_17 [i_2] [i_2] [i_5] = 1;

            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                arr_21 [i_2] [i_2] [i_6] = (arr_9 [i_2 - 1] [i_2 + 3] [i_2]);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 0;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        {
                            arr_27 [i_2] [i_2] = ((var_1 | ((min((95 / 626484178), var_6)))));
                            var_23 = (min(var_23, 239));
                            var_24 = (arr_23 [i_5] [i_5] [i_2] [1]);
                            var_25 -= (max(var_5, 35));
                        }
                    }
                }
                arr_28 [i_2] = (((arr_11 [i_2] [i_2]) ? (239 == 1594) : ((min((239 == 239), 12778)))));
            }
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                var_26 &= (((max(var_3, (arr_22 [i_9] [i_2 - 1]))) ? (arr_26 [i_2 + 3] [i_2 + 2] [i_2 - 2]) : ((max(var_4, var_1)))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        {
                            arr_40 [i_2] [i_5] [i_2] [i_5] [i_5] [i_5] = min(((min(27180, var_5))), (min((max(var_4, 64632)), (arr_26 [i_2] [i_2] [i_2]))));
                            var_27 = (min((626484199 || 6391), (max(4, var_2))));
                        }
                    }
                }
            }
        }
    }
    var_28 &= 7;
    var_29 = (min(var_29, (1 == 1460616555)));
    #pragma endscop
}
