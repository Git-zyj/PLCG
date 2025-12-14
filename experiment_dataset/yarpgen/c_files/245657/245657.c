/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_1 - 3] [i_2] = ((-(min((((arr_6 [i_0] [i_1 - 3]) / var_4)), -65528))));
                    arr_11 [i_2] [i_1 - 1] [i_1 - 1] = (max((arr_2 [i_0]), 7));
                }
            }
        }
    }
    var_13 = var_12;

    for (int i_3 = 2; i_3 < 22;i_3 += 1)
    {
        var_14 = -1693577069;
        var_15 = ((arr_13 [i_3]) ? (arr_12 [i_3]) : 29);

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 2; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        {
                            var_16 = ((arr_24 [i_3 + 2] [i_4] [i_3 + 2]) * ((((arr_20 [i_3 - 1] [i_6 - 1] [i_5 - 1] [i_3]) && (arr_26 [i_3] [i_3] [i_3] [i_7] [i_7])))));
                            var_17 = (--18446744073709551605);
                            var_18 *= ((!((min(154, 0)))));
                            arr_27 [i_7] [i_7] [i_7] [i_6 + 2] [i_7] [i_7] [i_5] |= ((-(((arr_18 [i_4] [i_5 - 1] [i_6 + 1] [i_7]) ? 0 : ((-19 ? (-9223372036854775807 - 1) : 19974))))));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_8 = 2; i_8 < 22;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        {
                            var_19 = 96;
                            arr_37 [i_3] [i_3] [i_3] [i_9] [i_10] = ((-((-(arr_24 [i_8 - 2] [i_8 - 2] [i_3 + 2])))));
                            var_20 = ((-(((min(-3, 1427127383)) / ((min(19, var_12)))))));
                        }
                    }
                }
            }
        }
    }
    var_21 = (!var_9);
    #pragma endscop
}
