/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_20 = ((var_1 ? (arr_9 [i_2] [i_2] [i_2] [i_2] [i_2 - 2] [i_2] [i_2 - 1]) : (arr_0 [i_1 + 1] [9])));
                            var_21 = (arr_2 [i_0]);
                            var_22 = ((((61476 / (arr_5 [i_0] [i_2] [i_0]))) > (arr_11 [2] [i_1] [i_1 - 2] [i_1] [i_1])));
                            var_23 = (((arr_8 [i_1 - 2] [i_1 - 2] [i_2 - 3]) ? (4064 && 61465) : (((arr_10 [i_0] [i_0] [i_0]) ? (arr_5 [i_0] [i_2] [i_2]) : 61471))));
                        }
                        var_24 &= ((((((arr_11 [i_3] [i_1 - 1] [i_2] [i_3] [0]) ? (arr_5 [i_0] [i_3] [i_3]) : 0))) || 65517));

                        for (int i_5 = 3; i_5 < 9;i_5 += 1)
                        {
                            var_25 = 0;
                            var_26 += ((~(arr_1 [i_0])));
                            var_27 = arr_10 [1] [i_2] [i_2];
                        }
                        for (int i_6 = 2; i_6 < 9;i_6 += 1)
                        {
                            var_28 = (((arr_16 [i_6 - 2] [i_1 + 2]) ? (arr_16 [i_0] [i_0]) : (arr_16 [i_0] [i_0])));
                            var_29 = (arr_13 [i_0] [i_2] [i_3] [i_3]);
                            var_30 = (min(var_30, (((~(arr_13 [i_0] [i_2 - 3] [i_3] [i_6]))))));
                        }
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            var_31 = (61478 != 0);
                            var_32 = (((2511784322 != var_10) ^ (arr_1 [i_1 - 1])));
                            var_33 = (((((arr_2 [i_2 - 3]) ? -1 : var_15))) ? (arr_4 [i_1] [i_3] [i_7]) : var_0);
                        }
                        var_34 = ((((((arr_12 [i_3] [i_2] [i_2 - 3] [i_2] [i_1] [4]) - 1))) > (arr_8 [i_1 + 2] [i_1 - 1] [i_1 + 3])));
                    }
                }
            }
        }
        var_35 -= (((arr_16 [i_0] [i_0]) ? (arr_16 [i_0] [i_0]) : 0));
        var_36 = (4 + var_3);
        var_37 = (((4 * 0) / (var_12 * 1)));
    }
    var_38 = ((((((max(var_18, 1))) <= var_13)) ? ((~(var_18 != 0))) : (((min(var_11, var_3))))));
    #pragma endscop
}
