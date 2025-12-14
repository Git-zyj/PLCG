/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_18 += (min((min(((1 ? (arr_0 [0]) : -121)), (arr_2 [i_0] [i_0 - 1]))), ((max(var_10, (arr_2 [i_0 - 3] [i_0 + 1]))))));
        var_19 = (!-54545);
        arr_3 [i_0 - 2] = ((max(((var_4 << (var_16 - 674294593))), ((max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    arr_11 [i_1] [i_1] = ((((~(arr_8 [i_1] [i_1]))) * (arr_5 [1])));
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 24;i_5 += 1)
                        {
                            {
                                arr_20 [i_1] [i_2] [i_3] [i_5] = 104;
                                var_20 = var_0;
                                arr_21 [i_1] [i_2] = ((3912 ? ((min((((arr_5 [i_2]) / var_6)), (min(1631777360, (arr_6 [i_1])))))) : (max((arr_15 [i_1] [i_2] [i_3] [i_5 - 1]), (arr_15 [8] [i_3] [i_2] [i_1])))));
                            }
                        }
                    }
                    var_21 = (~(min((max((arr_13 [i_2] [i_2] [i_2] [i_2] [i_2]), var_11)), ((((var_12 + 2147483647) << (12 - 12)))))));
                    arr_22 [i_1] [i_1] = (arr_4 [i_2]);
                    var_22 = (max(var_22, ((min((arr_7 [i_1] [i_1] [11]), ((-1631777373 == (!1))))))));
                }
            }
        }
        var_23 -= 18901;
        var_24 = ((((((arr_8 [i_1] [i_1]) | (arr_8 [i_1] [i_1])))) ? ((((~var_11) | (arr_13 [i_1] [i_1] [i_1] [i_1] [i_1])))) : (((arr_5 [10]) ? var_3 : (((arr_7 [17] [17] [i_1]) | (arr_9 [i_1] [i_1] [i_1])))))));
    }
    var_25 = ((var_14 ? var_15 : (((min(3785685699, 1)) % var_15))));
    #pragma endscop
}
