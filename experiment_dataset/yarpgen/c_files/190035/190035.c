/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= (max(var_1, var_17));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_19 = ((max((!var_3), (~-3731268203102376745))));

                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        var_20 = (max(var_20, 1));
                        arr_9 [i_0] [i_0] = (min(((max(((max(var_15, 211))), var_7))), (max(52, (((~(arr_0 [i_0]))))))));
                        arr_10 [14] = ((-107 ? 128637477 : var_16));
                        arr_11 [12] [i_1] [3] = ((((((((arr_4 [i_0]) ? 1 : (arr_0 [i_0])))) ? ((-52 ? var_10 : var_15)) : (~64))) >> (((arr_2 [i_0] [i_1] [6]) - 108))));
                    }
                    var_21 *= (min(((2415609531 > (min(4294967295, 203)))), ((!(arr_7 [i_2 + 1] [6] [i_2] [i_2 + 1])))));
                }
            }
        }
        arr_12 [i_0] [i_0] = (!-67);
    }
    for (int i_4 = 1; i_4 < 14;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 16;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        var_22 = (((19 * (arr_13 [i_4 + 4]))));
                        var_23 = (1 & 40960);
                    }
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        arr_27 [i_6] [i_6] [i_6] [i_6] [i_6 + 2] [i_6] = ((((max((max((arr_25 [i_4] [i_5]), 0)), (~var_15)))) ? (arr_18 [i_4]) : ((max(113, 0)))));
                        arr_28 [i_6] [i_5] [12] = (((!(!44))));
                        var_24 = var_2;
                    }
                    var_25 -= 84;
                    var_26 -= var_16;
                    var_27 = (((!var_7) ? 0 : (((~113) - ((min(1, 1)))))));
                }
            }
        }
        var_28 |= (max(2092294047, var_11));
    }
    #pragma endscop
}
