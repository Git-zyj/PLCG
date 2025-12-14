/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] = 222;
                        arr_14 [i_0] [i_0] [i_0] = ((+(((arr_11 [i_0]) ? var_8 : -29412))));
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        var_10 = (arr_9 [i_2 - 3] [i_2 + 1] [i_2 + 4] [i_2 - 3]);
                        var_11 = -4809866588788925614;
                    }
                    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                    {
                        var_12 = ((-(max((arr_6 [i_1] [i_2] [i_5]), (arr_7 [i_0] [i_0] [i_0])))));
                        arr_19 [i_0] [i_1 + 1] [i_5] [i_5] = 2886698601362631080;
                    }
                    for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                    {
                        arr_22 [i_0] [6] [i_6] [i_6] = 17;
                        var_13 = (min(var_13, -100));
                    }
                    arr_23 [i_0] [i_1 - 1] [i_0] &= ((+((((((arr_1 [0]) ? var_0 : var_1)) != 0)))));
                    var_14 ^= ((((!(arr_17 [2] [2]))) ? (((7274490451081079685 / (arr_0 [i_1 + 1] [i_2 + 4])))) : (!1)));
                }
            }
        }
    }
    var_15 = (max(var_15, (var_4 + var_4)));
    var_16 = max(var_1, var_3);
    #pragma endscop
}
