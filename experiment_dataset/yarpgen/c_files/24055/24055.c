/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_7;
    var_16 = (max(var_16, (((max(var_12, var_12))))));
    var_17 = (max(var_17, var_13));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (max(var_18, 134217600));
        var_19 = (max(var_19, (((~(max((arr_1 [i_0]), (arr_1 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_20 = (max(var_20, var_7));
        var_21 = ((2563422806216417949 ? 17500 : 0));
        var_22 = (var_10 ? (((arr_5 [i_1]) * (arr_5 [i_1]))) : ((max((arr_4 [i_1]), -var_3))));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        arr_15 [i_2] = (((166203964 ? 0 : 1152921504606846976)));

                        for (int i_5 = 1; i_5 < 17;i_5 += 1)
                        {
                            var_23 &= (((((~(var_10 | var_8)))) ? var_3 : (((arr_18 [i_2] [i_2] [i_2] [i_2] [i_2 - 1]) ? (arr_13 [i_1] [10] [12] [3]) : (arr_14 [7] [7] [7] [14] [i_2 - 1])))));
                            var_24 = (max(var_24, (arr_5 [i_1])));
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_25 += arr_11 [i_1] [i_2] [i_3];
                            var_26 = (max(var_26, (arr_12 [i_1])));
                            arr_21 [i_1] [i_1] [17] [i_2] [15] = ((-(((arr_17 [i_1] [i_2] [10] [i_4] [12] [i_2 + 2] [i_6]) ? 24 : (arr_17 [i_3] [i_2 - 2] [1] [i_4] [i_6] [i_2 + 2] [i_4])))));
                        }
                        for (int i_7 = 1; i_7 < 16;i_7 += 1)
                        {
                            var_27 = var_14;
                            var_28 = (arr_18 [i_1] [i_2] [i_1] [i_4] [1]);
                        }
                        var_29 = (arr_23 [i_2]);
                        arr_24 [i_4] [i_4] [i_3] &= (arr_18 [i_1] [1] [i_1] [0] [i_4]);
                    }
                }
            }
        }
    }
    var_30 = var_7;
    #pragma endscop
}
