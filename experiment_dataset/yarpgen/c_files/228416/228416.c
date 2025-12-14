/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= var_15;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    var_21 += ((((var_19 & ((2301596942 ? (arr_4 [i_1] [i_2]) : var_4)))) << ((((var_0 ? 62761 : (arr_7 [i_0] [i_1]))) & ((max(var_19, (arr_7 [1] [i_2 - 2]))))))));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_22 *= (arr_6 [i_0] [4] [i_0] [i_0]);
                        var_23 = (((!var_11) ? (((((arr_9 [i_0]) ? var_12 : (arr_1 [i_0]))) * (var_19 && var_11))) : (((var_17 ? 641326358073487806 : ((((2147483640 > (arr_2 [i_0]))))))))));
                    }
                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        arr_14 [i_0] [8] [i_0] [i_0] = var_14;
                        var_24 = ((1 - (min((((arr_13 [i_0] [i_0]) - (arr_9 [i_0]))), var_19))));
                        var_25 = (arr_2 [i_0]);
                    }
                }
            }
        }
    }
    var_26 = ((((var_13 ? ((max(var_5, var_18))) : var_12)) + (((((max(var_18, 52))) || var_7)))));
    var_27 = (var_16 ? (max(var_9, ((var_10 ? var_7 : var_3)))) : var_10);
    #pragma endscop
}
