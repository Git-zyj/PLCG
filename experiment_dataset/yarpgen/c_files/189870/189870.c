/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (-103 + 3763147255);

        for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
        {
            var_12 = ((0 >> (2767249684 - 2767249671)));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_10 [0] [i_0] [i_1] [i_0] [12] = (max(452449594, 3627605740));
                        arr_11 [i_0] [i_1] [20] [i_0] [i_1] [19] = (arr_4 [i_0] [i_0] [i_2]);
                        var_13 = (1 || ((max(-26597, 1))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {
                        var_14 = (((~3232665804) != 13003));
                        var_15 = ((0 ? -9180756707250240453 : 225));
                        var_16 = (max(252, 1));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
        {
            var_17 -= ((((1 ? 0 : 3229)) | (((!(arr_12 [i_6] [14] [16] [i_6]))))));
            var_18 = (min(var_18, ((((((arr_16 [5] [1] [i_0] [5] [i_6] [13]) + (arr_8 [i_0] [i_0] [19] [19] [i_6]))) != (26277 | -4))))));
            var_19 = (((arr_5 [i_0 + 3]) / (((arr_16 [i_0] [i_0] [2] [i_6] [i_6] [5]) ? (arr_16 [i_0] [i_0] [i_0] [i_6] [i_6] [i_6]) : (arr_5 [i_0])))));
        }
    }
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        var_20 = ((!(((((~(arr_23 [i_7]))) >> (!571935304))))));
        arr_25 [2] [2] |= (((((((((arr_23 [10]) + 54))) ? ((((-28225 + 2147483647) >> (-9075833667538891637 + 9075833667538891647)))) : (((arr_22 [i_7]) ? (arr_21 [i_7]) : (arr_24 [i_7] [i_7])))))) / (max(577249316802176573, 4227039790196065783))));
    }
    var_21 = (max((((((var_4 ? var_7 : var_4)) != ((var_7 ? var_5 : var_5))))), ((0 ? 1 : 864815171))));
    var_22 = (max(0, 94));
    #pragma endscop
}
