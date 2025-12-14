/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= 154;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_17 += (((arr_1 [i_0]) % 3456));
        arr_2 [i_0] = (arr_1 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                        {
                            var_18 = 2146435072;
                            var_19 = (min(var_19, (arr_1 [i_3])));
                            var_20 -= (((arr_7 [i_0] [i_1 + 1] [i_2] [i_3]) && (arr_7 [9] [i_1 + 1] [i_1] [i_3])));
                        }
                        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                        {
                            var_21 = (var_7 >> 1);
                            var_22 += 62080;
                            var_23 = (max(var_23, (((var_1 ? (arr_0 [i_1 + 3]) : (arr_6 [i_0] [i_0] [i_0]))))));
                            var_24 |= (~(arr_15 [i_1 - 3] [i_0] [i_2] [i_1 - 3] [i_1 - 3]));
                            var_25 = ((var_4 << (((arr_6 [i_1] [i_1 - 2] [i_1]) - 60514))));
                        }
                        arr_19 [i_1] [i_3] [i_1 - 1] [i_1 - 1] [i_1] = ((31549 ? (arr_0 [i_1 + 2]) : (arr_0 [i_1 - 3])));

                        for (int i_6 = 3; i_6 < 17;i_6 += 1)
                        {
                            arr_23 [i_1] [i_1] [i_2] [i_2] [i_1] [i_2] = (arr_8 [i_1 + 1] [i_1 - 1]);
                            var_26 += (((arr_5 [i_0] [i_1 + 3]) != (arr_5 [i_0] [i_0])));
                            arr_24 [1] [i_1] [i_1] [i_3] [i_6] [i_1] = (arr_18 [1] [i_1] [i_1] [1]);
                        }
                        var_27 += (((arr_6 [i_1 + 2] [i_2] [2]) % (arr_6 [i_1 + 3] [i_1] [i_2])));
                        var_28 |= ((182 || (arr_7 [i_0] [i_1 - 1] [i_1 + 1] [i_1 + 1])));
                    }
                }
            }
        }
        arr_25 [11] = (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    var_29 = ((var_11 ? var_12 : var_1));
    #pragma endscop
}
