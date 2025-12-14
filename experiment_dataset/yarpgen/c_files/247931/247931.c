/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    var_16 -= (((((min(var_14, 64780)))) ? (min(((14903 ? -9035285042762675089 : 14)), (min(var_1, var_8)))) : (((((~1609911420) >= (max(var_11, var_11))))))));
    var_17 -= (((var_11 && 64780) != (max(var_10, ((var_1 ? 9035285042762675089 : 125))))));

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            var_18 = (min(var_18, 2147483647));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_19 = (min(((-((1 ? (arr_12 [i_0] [i_3] [i_2] [17] [i_0]) : (arr_12 [i_0] [i_1] [i_2] [i_3] [i_4]))))), var_13));
                            var_20 = (min(var_20, ((((arr_3 [i_4]) ? 10 : ((-(arr_6 [i_0] [i_0] [i_0]))))))));
                            var_21 = (min(var_21, -118533755));
                        }
                    }
                }
            }
            arr_13 [i_0] = ((+(((arr_10 [i_1 + 2] [i_0] [i_1 + 3] [i_0] [i_0]) ? (arr_10 [i_0 + 3] [i_0] [i_1 + 3] [i_0] [i_0 + 3]) : var_7))));
        }
        arr_14 [i_0] = 38;
        var_22 = (min(var_22, (arr_11 [3])));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {

                    for (int i_7 = 4; i_7 < 18;i_7 += 1)
                    {
                        arr_21 [i_0] [i_5] [i_0] [i_6] = (arr_18 [i_0] [i_5] [i_6] [i_6]);
                        arr_22 [i_0] [i_5] [i_6] [i_0] = (arr_19 [i_7] [i_0] [i_0] [i_0]);
                    }
                    var_23 -= ((min(20650, -15)));
                }
            }
        }
    }
    #pragma endscop
}
