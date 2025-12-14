/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_16 &= var_12;
        var_17 *= (max((min(var_0, (arr_0 [i_0]))), 719556552));
        var_18 -= (arr_1 [2] [12]);
        arr_4 [i_0] = var_2;
    }
    var_19 -= (max(((((18446744073709551615 + -8490499691505412687) ? var_5 : var_6))), (max(-112, var_15))));
    var_20 -= var_5;

    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (max(((var_11 ? ((max(96, -1581368411))) : (min(4294967292, 1373917337)))), ((-((-20982 ? 255 : (arr_3 [i_1])))))));
        var_21 = (min(var_21, var_14));
        var_22 = ((-(((((-(arr_5 [i_1])))) - (min((arr_1 [i_1] [i_1]), 111))))));

        /* vectorizable */
        for (int i_2 = 4; i_2 < 9;i_2 += 1) /* same iter space */
        {
            var_23 = (min(var_23, (arr_1 [i_2] [i_2])));
            var_24 *= var_2;
            var_25 -= (arr_9 [i_2] [9] [9]);
            arr_12 [i_1] = var_15;
        }
        for (int i_3 = 4; i_3 < 9;i_3 += 1) /* same iter space */
        {
            var_26 = (max(var_26, ((min(((((min((arr_0 [i_1]), var_3))) ? (arr_9 [0] [i_1] [i_3 - 4]) : (arr_14 [i_1] [i_3 - 2] [i_1]))), (((7603340622416996760 ? -0 : var_5))))))));
            var_27 = (min(var_27, (((!((max((arr_2 [i_3 - 4]), (~18446744073709551615)))))))));

            /* vectorizable */
            for (int i_4 = 1; i_4 < 8;i_4 += 1)
            {
                arr_20 [i_4] [i_4] [i_4] &= ((var_0 ? (arr_14 [i_1] [i_3] [i_4]) : ((45081 ? 811560958 : var_10))));
                arr_21 [i_1] [8] [9] = (arr_14 [i_3 - 1] [i_3] [7]);

                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    var_28 *= ((-(arr_19 [i_5 - 1] [i_4 - 1] [i_3 - 1])));
                    var_29 |= var_8;
                    arr_24 [i_1] [0] [6] [i_5] = (arr_1 [i_5] [i_3]);
                }
                arr_25 [i_4] [i_3 - 1] [i_3 - 1] [i_1] |= (arr_10 [i_3 - 1]);
                var_30 -= 25679;
            }
        }
        /* vectorizable */
        for (int i_6 = 4; i_6 < 9;i_6 += 1) /* same iter space */
        {
            var_31 = (min(var_31, (~-5043)));
            var_32 = (arr_6 [i_6]);
        }
        for (int i_7 = 4; i_7 < 9;i_7 += 1) /* same iter space */
        {
            var_33 -= ((((max((arr_8 [i_1] [i_1] [i_7]), var_14))) ? (arr_27 [2] [i_7 - 1] [i_7 + 1]) : ((+(((arr_18 [i_1] [6] [i_7 - 1]) ? 1 : (arr_14 [i_1] [i_1] [9])))))));
            arr_30 [i_7] = ((+(max((arr_11 [4] [8] [i_1]), (((arr_16 [i_1] [i_7 - 2]) ? -32762 : 208))))));
        }
    }
    for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
    {
        arr_33 [i_8] = (((((-(~554512772)))) ? 811560958 : 2115228306));
        var_34 -= ((+((-(((arr_23 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) ? var_9 : var_7))))));
    }
    var_35 = ((var_5 ? var_15 : -3181));
    #pragma endscop
}
