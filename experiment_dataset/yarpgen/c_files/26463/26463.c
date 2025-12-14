/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;
    var_20 = ((54665 ? ((((var_14 && (!var_2))))) : var_13));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_21 = (max((arr_1 [i_0]), (~-64)));
                                arr_11 [i_4] [i_4] [i_4] [i_4] [i_3] = (~-9073510906285806661);
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_22 -= (~var_10);
                        var_23 += (((255 ^ 2147483638) > (((arr_13 [i_0] [i_1] [i_2] [i_5] [i_0]) ? (arr_7 [i_0] [i_1] [i_0]) : (arr_13 [10] [i_0] [i_1 - 1] [18] [i_0])))));

                        for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                        {
                            var_24 = (~(arr_4 [i_2 + 1] [i_2 - 1] [i_2 + 1]));
                            arr_18 [i_0] [i_1] [1] [i_5] [i_6] [i_5] [i_6] = (((arr_17 [i_1 - 1] [i_2 + 1] [i_2]) ? var_13 : (arr_17 [i_1 - 1] [i_2 - 1] [i_5])));
                        }
                        for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                        {
                            arr_21 [i_0] [i_5] = ((~(arr_6 [i_0] [i_0] [i_0] [i_0])));
                            var_25 = (arr_0 [i_1 - 1]);
                            var_26 = var_2;
                        }
                        var_27 ^= (~var_1);
                    }
                    for (int i_8 = 3; i_8 < 21;i_8 += 1)
                    {
                        var_28 = (max(-1, ((max(((~(arr_23 [i_0] [i_0] [i_0] [i_8]))), ((var_5 >> (((arr_10 [i_8] [i_8] [i_0]) - 102)))))))));
                        arr_24 [i_8] = var_10;
                        arr_25 [i_8] = 2147483621;
                        var_29 = var_0;
                    }
                    var_30 -= (arr_17 [i_2] [i_1 - 1] [i_0]);
                    var_31 = (~(~10340162850991611349));
                    arr_26 [i_0] [i_0] [i_0] [i_0] = -1733448394;
                }
            }
        }
    }
    #pragma endscop
}
