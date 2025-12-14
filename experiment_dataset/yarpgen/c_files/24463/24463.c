/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_19 = (((min((arr_0 [i_0 - 1]), (arr_0 [i_0 + 2])))) ? ((4294967295 ? 1007484883 : (arr_0 [i_0 + 2]))) : (arr_0 [i_0 + 1]));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [i_1] = ((!(arr_1 [i_0 - 1])));
                    var_20 = -var_0;

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            var_21 *= 4294967295;
                            var_22 = max((min((arr_5 [i_0] [i_2]), (((arr_11 [i_0 - 1] [i_0] [i_0 + 2] [i_0] [i_0 - 1]) ? (arr_1 [i_0]) : var_11)))), ((2609563700 ? ((var_16 ? var_15 : (arr_2 [i_0] [i_2]))) : (arr_10 [i_4 - 2] [i_0 + 2] [i_1] [i_0] [i_0 + 1]))));
                            var_23 = max((((!(arr_10 [i_0 + 1] [i_0 + 1] [i_1] [i_0 + 1] [i_4])))), ((4294967295 << (-1754271487 - 2540695788))));
                        }
                        arr_13 [i_3] [i_1] [i_0] [i_1] [i_1] [i_0] = 0;
                    }
                }
            }
        }
        var_24 = (((arr_12 [i_0] [10] [4] [i_0] [i_0]) > ((((((arr_1 [i_0]) ? var_12 : var_0))) ? (3025560697 == 30488591) : ((600042693 ? (arr_1 [i_0]) : 2805938124))))));
        var_25 = (min(var_25, 904440195));
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        arr_17 [i_5] = 4294967295;
        var_26 = (max(var_26, (arr_14 [i_5] [i_5])));
    }
    for (int i_6 = 2; i_6 < 18;i_6 += 1) /* same iter space */
    {
        var_27 = -4294967290;
        var_28 = 4294967295;
    }
    for (int i_7 = 2; i_7 < 18;i_7 += 1) /* same iter space */
    {
        var_29 = ((!(((((var_13 << (((arr_21 [i_7] [4]) - 2498086382)))) - var_15)))));
        var_30 = (((((arr_18 [i_7 + 2]) ? 115675939 : (arr_18 [i_7 + 4])))) ? (((arr_18 [i_7 - 1]) ? var_6 : 495233701)) : -2851495927);
    }
    var_31 = var_3;
    #pragma endscop
}
