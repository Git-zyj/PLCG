/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] = 32691;
                var_15 -= 18446744073709551601;
                var_16 = 18446744073709551582;
                arr_7 [i_0] = 11;

                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    var_17 = 11;
                    var_18 = 0;
                }
                for (int i_3 = 3; i_3 < 17;i_3 += 1)
                {
                    var_19 = 1;
                    arr_12 [i_0 - 4] [i_1 + 1] [i_0] = 18446744073709551567;
                    var_20 = 17;
                }
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_21 = 18446744073709551576;
                        arr_17 [i_0] [9] [i_1] [i_1] [i_0] = 17;
                        var_22 = -4096;

                        for (int i_6 = 3; i_6 < 14;i_6 += 1)
                        {
                            arr_21 [i_0] [i_0] = 18446744073709551597;
                            arr_22 [i_0] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_6] [i_0] = 11233266122833736202;
                            var_23 = 18446744073709551578;
                        }
                    }
                    var_24 = (max(var_24, 39285));
                    var_25 = -17426;
                    var_26 = (max(var_26, 0));
                }
                for (int i_7 = 2; i_7 < 17;i_7 += 1)
                {
                    var_27 -= 13714150995598672737;
                    arr_25 [i_0] [i_0 - 2] [10] = 432345564227567616;
                }
            }
        }
    }
    var_28 -= var_13;
    var_29 = var_7;
    var_30 = (max(var_30, var_5));
    #pragma endscop
}
