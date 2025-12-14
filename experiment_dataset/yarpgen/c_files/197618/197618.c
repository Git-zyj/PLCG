/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = var_10;
        arr_5 [i_0] [0] = ((var_10 != (((-1215812996 + 2147483647) << (((arr_0 [i_0]) - 3684298561278577608))))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_12 = (125 * var_1);
            arr_8 [i_0] = (((-2147483647 - 1) ? (arr_6 [i_0] [i_1]) : (arr_7 [i_0])));
        }
        var_13 = (~-var_6);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 20;i_3 += 1)
            {
                {
                    arr_16 [i_0] [i_2] [i_2] [i_0] = (max((arr_11 [i_3 - 1] [i_2]), var_8));
                    var_14 = arr_15 [i_3] [21] [i_3 + 2] [8];
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 4; i_5 < 21;i_5 += 1)
        {
            var_15 = (min(var_15, ((((min((arr_18 [14] [i_5 + 1]), 2147483638)) ^ var_2)))));
            var_16 = (((((arr_19 [i_4] [i_5 - 1] [i_4]) | var_0)) != (!139)));
            var_17 = (max(var_17, (((!((((491520 + -2147483630) ? ((var_7 ? (arr_10 [i_5] [i_5 - 3] [i_4]) : var_5)) : (arr_6 [i_5 - 4] [i_5])))))))));
        }
        var_18 = var_8;

        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            var_19 = ((110 * ((-(arr_19 [i_4] [i_4] [i_4])))));
            arr_23 [i_4] [i_6] = (2147483605 < 2147483647);
        }
        for (int i_7 = 1; i_7 < 21;i_7 += 1)
        {
            var_20 = ((646674932 ? 7 : 97));
            arr_26 [i_4] [i_4] = var_6;
            var_21 |= ((160 ? ((var_8 ? (arr_10 [i_7 - 1] [i_7 - 1] [i_7]) : var_7)) : (((var_5 >= (!9614))))));
            arr_27 [i_4] [20] [i_4] |= 2147483647;
        }
        arr_28 [i_4] [i_4] = min(2147483643, (((arr_20 [i_4] [i_4] [i_4]) | (arr_20 [i_4] [i_4] [i_4]))));
    }
    var_22 = var_0;
    var_23 = (14 | 9);
    #pragma endscop
}
