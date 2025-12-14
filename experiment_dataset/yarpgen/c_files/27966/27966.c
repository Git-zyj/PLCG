/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-(((0 ? 2339373344 : 0)))));
    var_16 = ((min((min(0, 0)), var_5)));
    var_17 = (max(4, 0));
    var_18 = (min((((var_0 ? var_0 : 10104276502610870881))), var_2));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_19 = ((~(((arr_5 [i_0 + 1] [i_2 + 1]) ? (arr_5 [i_0 + 1] [i_2 + 1]) : var_4))));
                    arr_7 [i_0] [i_1] [i_0] = ((max(0, -16476)));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
                    {
                        var_20 = (max(var_20, (((32764 ? 10104276502610870877 : 21)))));
                        var_21 = (min((!0), ((var_10 ? (arr_11 [i_0] [i_1] [i_0] [i_2] [19]) : var_0))));
                        arr_12 [i_3] [i_0] [i_0] [i_0] = (arr_6 [i_0] [i_2 + 1] [i_0 + 1] [i_0]);
                        var_22 = (max(var_22, var_5));
                        var_23 = min((arr_11 [i_0] [i_0] [i_0] [i_2 + 3] [i_2]), (min(-22, 2)));
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                    {
                        var_24 ^= var_9;
                        var_25 = ((!((min((min(37, 0)), 22)))));
                    }
                }
            }
        }
        var_26 = (min(var_26, 4294967295));
        var_27 = (min(var_27, ((min((((1455195151 ? -2242 : 21))), (min(743308955, (arr_0 [4]))))))));
    }
    for (int i_5 = 0; i_5 < 0;i_5 += 1)
    {
        arr_18 [i_5] [i_5] = 158;
        var_28 = (var_6 - ((((!(arr_9 [i_5] [i_5 + 1] [i_5] [1]))))));
        var_29 = (arr_17 [i_5]);
        var_30 = (min(var_9, (min(1, (arr_1 [i_5] [i_5])))));
        arr_19 [i_5] &= (arr_6 [i_5] [i_5 + 1] [i_5] [16]);
    }
    #pragma endscop
}
