/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_14 -= (((((((arr_1 [i_0 + 3]) == 2187841043)))) == var_3));
        var_15 |= 11178;

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_16 = (max(((var_4 ? (((((arr_0 [i_0] [i_0]) > var_8)))) : var_1)), ((((((0 ? (arr_0 [i_0] [i_1]) : 4294967295))) ? (arr_3 [i_0 - 1] [i_0] [i_0 - 1]) : (arr_2 [i_0 + 3] [9] [i_1]))))));
            arr_4 [i_0] [i_0] = ((1 != (max((max((arr_2 [i_0] [3] [i_1]), var_10)), 51510))));
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {
                        arr_11 [i_0 + 2] [7] [i_0] [i_3] [i_3] [i_4] = (~var_11);
                        var_17 = (9730 % ((((((arr_8 [i_0 + 2] [i_4]) / 9730))) ? (((-(arr_10 [i_0])))) : var_1)));
                        var_18 = (!var_8);
                        arr_12 [12] [12] [12] [i_0] [20] = ((!((min((((0 && (arr_9 [i_4] [i_3] [i_2] [i_0])))), var_5)))));
                    }
                }
            }
            var_19 = (!66);
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    {
                        var_20 = (max(var_13, (~var_6)));
                        var_21 = 1;
                        arr_20 [i_0] = var_0;
                        var_22 = ((((min((arr_6 [i_0] [i_0] [i_0 - 1]), (arr_6 [i_0 + 3] [i_0 + 3] [i_0 + 3])))) ? (((arr_6 [19] [i_0 + 3] [i_0 + 1]) ? var_3 : 26)) : (((~(arr_6 [i_0] [i_0] [i_0 + 1]))))));
                        var_23 = 7687;
                    }
                }
            }
            var_24 = (min((4294967285 < var_9), ((-(arr_17 [i_0] [i_0] [i_0 + 1] [i_0 + 4] [i_0] [i_0 - 1])))));
        }
        var_25 *= (var_1 << (var_8 - 24537));
    }
    var_26 = (((var_10 - var_2) + var_9));
    var_27 = (((-(max(-34, var_3)))));
    #pragma endscop
}
