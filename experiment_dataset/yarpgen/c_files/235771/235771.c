/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;
    var_18 = var_12;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_19 &= ((~((4294967295 ? -1366386763 : (arr_0 [5] [1])))));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 10;i_3 += 1)
                {
                    {

                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            var_20 = max(((-(((arr_15 [i_1] [i_1] [i_2] [i_1] [i_0]) + (arr_9 [i_4 + 1] [i_3] [i_2] [i_1] [i_0]))))), -var_10);
                            var_21 = (max((arr_14 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_4 + 2] [i_4 + 2]), (arr_9 [i_4 + 1] [i_4 + 2] [i_3 - 1] [i_3 - 3] [i_3 - 1])));
                        }
                        var_22 = -17344439019997892745;
                    }
                }
            }
            var_23 = (((-var_4 ? ((max(16, var_5))) : (arr_3 [i_0] [i_0] [i_1]))));
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            var_24 = (min((((((var_8 ? (arr_14 [i_5] [i_5] [i_0] [i_0] [1]) : var_0))) ? (var_8 <= -1366386761) : (((arr_6 [i_0] [i_5]) ? var_11 : var_5)))), ((max(-9, (arr_16 [i_0] [i_5]))))));
            var_25 += (min((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_5]) : (arr_0 [i_0] [i_5]))), ((~(arr_0 [i_5] [i_5])))));
            var_26 = (-var_1 ? ((-var_3 & ((1129846243 ? var_12 : var_9)))) : (~var_9));
            var_27 = ((((287104476244869120 ? ((-1366386763 ? (arr_14 [i_0] [i_0] [i_5] [3] [i_5]) : var_12)) : (((((arr_16 [6] [6]) <= (arr_14 [8] [9] [i_0] [i_0] [4]))))))) > (((16 ? var_4 : var_16)))));
            var_28 = var_0;
        }
    }
    var_29 += var_6;
    var_30 = var_0;
    #pragma endscop
}
