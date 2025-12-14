/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 = (max(var_16, ((((((max(var_9, (((!(arr_0 [i_0])))))))) < var_2)))));
        var_17 = 58927;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_18 = (((((((var_8 < (arr_4 [i_1]))) ? (var_6 || var_4) : (((!(arr_8 [i_0] [i_0]))))))) > ((var_1 ? (((min((arr_6 [i_0] [i_1] [i_1] [i_1]), var_15)))) : (arr_3 [i_0] [i_1])))));
                    var_19 = (arr_6 [i_0] [i_1 - 1] [i_1] [i_2]);

                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        arr_13 [i_1] [i_1] [i_2] = var_5;
                        var_20 = (min(var_20, (3761166212 & 22)));

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            arr_16 [i_4] [i_1] [i_2] [i_1] [i_1] [i_0] = (arr_2 [i_4] [i_2]);
                            arr_17 [i_4] [i_0] [i_1] [i_1] [i_1 - 1] [i_0] = var_0;
                            var_21 = (((((((((arr_11 [i_1]) ? var_6 : var_9))) | ((var_11 ? var_13 : var_1))))) ? var_11 : var_9));
                        }
                        var_22 -= ((((((!0) || (arr_12 [i_2 - 1] [22] [i_2] [i_1])))) - (((((var_0 | (arr_7 [i_0] [i_0] [i_2]))) == (arr_15 [i_1 - 1] [i_2 - 1] [20] [i_3 + 1]))))));
                        var_23 = (max(var_23, ((((((max(var_10, (((-32767 - 1) || (arr_0 [i_0]))))))) > (var_8 - var_11))))));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            var_24 = ((45 ? 0 : 7212381158608695350));
            var_25 -= 1803511704197581899;
        }
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                {
                    arr_28 [i_5] [i_7] [i_5] [i_7] = var_2;
                    arr_29 [i_5] [i_5] [10] |= ((var_14 ? var_3 : (arr_1 [i_5])));
                }
            }
        }
        var_26 |= (((!var_5) != (arr_3 [i_5] [i_5])));
        /* LoopNest 3 */
        for (int i_9 = 1; i_9 < 9;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 10;i_11 += 1)
                {
                    {
                        var_27 = (arr_0 [i_5]);
                        var_28 += var_11;
                        var_29 -= 1;
                        var_30 = var_1;
                        arr_40 [i_10] [i_10] [i_9] [i_9] [i_5] = (((((arr_9 [i_9] [i_9]) ? var_6 : (arr_26 [i_9 - 1] [i_9]))) + ((((var_14 < var_2) ^ (max(var_2, (arr_32 [i_5] [i_10]))))))));
                    }
                }
            }
        }
    }
    var_31 = (((var_10 + var_2) + ((((var_14 && (((1 ? 3696968546 : -2631586091842049287)))))))));
    #pragma endscop
}
