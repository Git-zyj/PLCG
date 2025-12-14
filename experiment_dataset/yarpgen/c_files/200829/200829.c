/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] [9] [i_1] = (arr_1 [i_1] [i_1]);
                    var_15 = (max(((max(121, 8))), ((-var_14 & (((arr_6 [i_0] [5] [i_1] [11]) & (arr_4 [i_0])))))));

                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        var_16 = (max(var_16, (((-((7317 ? 43228 : 1)))))));
                        arr_12 [i_0 - 1] [i_0 - 1] [i_0] [2] = 0;
                        arr_13 [i_2] [i_2] = ((~(arr_4 [1])));
                    }
                    var_17 = var_11;
                    arr_14 [16] [i_1 + 2] [17] = ((16 ? 4238813575 : 0));
                }
                var_18 = var_9;

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_19 -= (~var_14);
                    arr_18 [i_4] [i_1] [i_0 - 1] [i_4] = 0;

                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_25 [i_0 - 1] [i_1] [18] [i_4] [i_6] = (!var_2);
                            var_20 = var_3;
                            arr_26 [i_0] [i_1 - 2] [i_1 - 2] [i_4] [i_6] = (((65535 + 36) - (var_5 - var_2)));
                            arr_27 [i_4] [i_5] [i_4] [i_1] [i_1 + 1] [i_0] [i_4] = (479 == 1);
                        }
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            var_21 = var_0;
                            arr_31 [i_4] = (((597424705 | 162) ? ((min(43228, 27))) : ((var_13 ? (arr_3 [i_1 - 2]) : (arr_30 [i_4])))));
                            var_22 = (arr_29 [i_7] [i_7] [i_4] [i_5 - 1] [i_4] [i_5] [i_5]);
                            var_23 = ((~(min(-1371927061912419290, (arr_2 [i_1 + 1] [i_0 - 1])))));
                            var_24 = ((!((((arr_5 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? (arr_24 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1 + 2] [i_1 + 1]) : ((max((arr_16 [i_7]), 91))))))));
                        }
                        arr_32 [i_4] [i_4] [i_1 - 2] [i_4] [i_4] [i_5] = (arr_11 [i_0 - 1] [i_1] [i_4] [i_5]);
                    }
                    for (int i_8 = 2; i_8 < 17;i_8 += 1)
                    {
                        var_25 = (max(var_25, ((min(0, ((((arr_8 [i_0 - 1] [i_0 - 1] [1]) ? (arr_10 [i_0 - 1] [i_1 + 1] [i_1 + 1] [i_8]) : var_13))))))));
                        arr_37 [i_0 - 1] [i_4] [15] = (max(-604496626, -var_7));
                        var_26 = (max((~230), (6721 <= var_10)));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 3; i_9 < 16;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 15;i_11 += 1)
            {
                {
                    arr_47 [i_11] [i_10] [i_11] = (arr_39 [i_9] [i_9 + 1]);
                    arr_48 [i_11] [i_10] [i_11] = var_7;

                    for (int i_12 = 3; i_12 < 15;i_12 += 1)
                    {
                        var_27 = ((125 ? 1371927061912419292 : -1371927061912419288));
                        var_28 = var_10;
                    }
                    for (int i_13 = 2; i_13 < 15;i_13 += 1)
                    {
                        arr_53 [i_11] [i_10] [i_10] [i_10] = 106;
                        var_29 = (min(var_29, -31040648558079545));
                    }
                }
            }
        }
    }
    #pragma endscop
}
