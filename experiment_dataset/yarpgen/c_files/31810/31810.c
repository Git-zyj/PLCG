/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((max((max(var_13, var_11)), var_11)));
    var_19 = (min(var_19, var_13));
    var_20 -= var_17;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_21 = (-(arr_0 [i_0 - 1]));
        var_22 = (~-1545260665);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {

            for (int i_3 = 2; i_3 < 19;i_3 += 1)
            {
                arr_12 [i_1] [i_1] = (arr_10 [i_1] [i_1]);
                arr_13 [i_1] [i_1] [i_1] = (((arr_11 [9] [2] [2] [9]) ? (((min(var_3, 55967)))) : (((arr_11 [i_3 + 1] [i_3 + 4] [i_3 + 2] [i_3 - 2]) ? (arr_11 [i_3 + 1] [i_3 + 4] [i_3 + 2] [i_3 - 2]) : var_5))));
                var_23 = ((-1545260665 || (1545260651 / 1545260684)));
            }
            /* vectorizable */
            for (int i_4 = 3; i_4 < 20;i_4 += 1)
            {
                var_24 = (~1);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_21 [i_1] = ((((1545260651 < (arr_15 [1] [i_2] [i_6]))) ? var_15 : (((arr_9 [i_1]) ? -1545260668 : var_6))));
                            arr_22 [i_1] [i_1] [i_1] [0] [15] = 3669403618;
                        }
                    }
                }
            }
            arr_23 [i_1] = (((arr_8 [i_1] [i_1] [i_1]) ? (((var_5 + 2147483647) << ((((-1545260689 ? 229 : 1471452706)) - 229)))) : ((((arr_20 [i_1] [i_1] [i_1]) && (arr_14 [0] [i_2] [i_2] [i_1]))))));
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    {
                        arr_28 [i_1] [i_1] [5] [i_1] [5] = ((((arr_17 [i_1] [i_7 - 1] [i_7 + 1] [i_7 + 1]) > (arr_14 [i_1] [i_7] [i_8] [i_1]))));
                        var_25 = var_8;
                        var_26 = -1545260651;
                    }
                }
            }
            var_27 = (max(var_27, (((((-(60 < var_7))) | (arr_5 [14] [14]))))));
        }
        arr_29 [i_1] = 89;
    }
    var_28 = (var_9 - var_10);
    #pragma endscop
}
