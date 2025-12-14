/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_0] = (!((max(var_7, (((arr_5 [3] [i_1] [20]) << (var_4 - 48)))))));
                var_17 = (-2147483647 - 1);

                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] [5] = ((max(var_11, (arr_3 [i_2] [i_2 + 1]))) - (max(var_1, (var_13 / -21191))));
                    arr_10 [i_2] [i_1] [i_0] [i_0] = ((((~(~var_15))) % ((min(108, 24142)))));
                }
                for (int i_3 = 3; i_3 < 24;i_3 += 1)
                {
                    arr_13 [i_3] [i_1] [i_1] = 9223372036854775807;

                    for (int i_4 = 3; i_4 < 24;i_4 += 1)
                    {
                        var_18 = (arr_12 [i_3]);
                        arr_16 [i_0] [i_0] [i_3] [i_0] = (((((max(-112, 4595863565024284934)) ? 79 : var_9))));
                    }
                    arr_17 [i_0] [i_3] = ((~(arr_3 [i_3 - 2] [i_0])));
                    arr_18 [i_0] [13] [i_3] = (((((min((arr_8 [i_0] [i_1] [9]), (arr_5 [i_0] [i_1] [i_3]))))) << ((((((-(arr_15 [i_0] [i_0]))) + 72)) - 23))));
                }
            }
        }
    }
    var_19 = ((var_14 * (var_10 > -65)));
    #pragma endscop
}
