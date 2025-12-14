/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {

                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    var_13 += (~(arr_7 [i_3 + 1] [i_3 + 2] [i_3 + 2]));
                    var_14 = (((arr_5 [i_3 + 3] [i_2 + 1] [i_2]) ? (arr_5 [i_3 + 1] [i_2 + 2] [i_1]) : (arr_5 [i_3 - 1] [i_2 - 2] [i_0])));
                    arr_11 [i_0] [i_0] [i_0] = (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                }

                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    var_15 = (min(var_15, (((~((~(arr_7 [i_1] [i_1] [i_1]))))))));
                    var_16 = ((~(arr_6 [i_2] [i_2])));
                    var_17 ^= 2245225097;
                    var_18 = (arr_10 [i_2 + 2] [i_2 - 2] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 - 1]);
                }
            }
            var_19 *= (!2049742221);
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 23;i_7 += 1)
                    {
                        {
                            var_20 |= (arr_20 [i_5] [i_5 - 1] [i_5 - 1] [i_1] [i_5]);
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_6] = ((-(((!(arr_9 [i_0] [i_0] [i_0]))))));
                            arr_22 [i_6] = (((arr_7 [i_5] [i_5 - 1] [i_5]) ? (arr_7 [i_5] [i_5 - 1] [i_5]) : (arr_7 [i_5] [i_5 - 1] [i_5])));
                            var_21 = (~(arr_18 [i_5] [i_1] [i_5] [i_5] [i_5 + 1] [i_1]));
                            var_22 = (min(var_22, (((-(arr_12 [i_0] [i_0] [i_0] [i_0]))))));
                        }
                    }
                }
            }
        }
        var_23 -= (1 || 135);
        var_24 = 0;
        var_25 = (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    var_26 |= var_0;
    #pragma endscop
}
