/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_17 = (min(var_17, (((((var_1 ? (~var_11) : (arr_2 [i_3]))) % ((((min((arr_9 [i_0] [i_1] [i_2] [i_2]), var_8))) - (var_0 / var_8))))))));
                            arr_12 [i_0] [i_3] = ((((max((((arr_2 [i_0]) - (arr_3 [i_0]))), (arr_3 [i_2])))) ? (max((arr_3 [i_0 + 4]), (arr_3 [i_0 + 4]))) : (28814 - -28817)));
                            var_18 = (max(var_15, (~249972291035507829)));
                            var_19 = ((7014083062590355229 ? (((5236 ? 59 : -3559))) : (((arr_5 [i_2 - 2] [i_2] [i_3]) ? (arr_5 [i_2 - 2] [i_3] [i_3]) : (arr_5 [i_2 - 2] [i_3] [i_3])))));
                        }
                    }
                }
                var_20 = (arr_5 [i_0 + 2] [i_0 + 2] [i_0 + 4]);
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 1; i_4 < 17;i_4 += 1) /* same iter space */
    {
        var_21 = (((arr_10 [i_4] [i_4] [i_4] [i_4 + 1] [i_4 + 1] [i_4]) ? (arr_10 [i_4] [i_4] [i_4] [i_4 + 1] [i_4 + 1] [i_4]) : (arr_10 [i_4] [i_4] [i_4] [i_4 + 1] [i_4 + 1] [i_4])));
        var_22 = -2818513143943965171;

        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            var_23 = (arr_9 [i_4] [i_4] [i_4] [i_5]);
            var_24 = ((!((((arr_7 [i_4]) ? (arr_6 [i_5] [i_5] [i_4]) : (arr_8 [i_4] [i_4] [i_4] [i_4] [i_5]))))));
        }
        var_25 = var_8;
    }
    for (int i_6 = 1; i_6 < 17;i_6 += 1) /* same iter space */
    {
        var_26 = (((249972291035507829 ^ 1) ? (arr_2 [i_6 + 1]) : (arr_1 [i_6 - 1])));
        arr_21 [i_6] = ((-((((max(var_5, (arr_7 [i_6])))) ? var_6 : 249972291035507831))));
    }
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {

        /* vectorizable */
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            var_27 = (((arr_23 [i_7] [i_8]) ? (arr_25 [i_8]) : (arr_25 [i_7])));
            var_28 *= (arr_23 [i_7] [i_8]);

            for (int i_9 = 3; i_9 < 24;i_9 += 1)
            {
                var_29 = ((((((arr_29 [i_7] [i_8] [i_9]) & 27427))) ? ((249972291035507829 ? -268435456 : -11313)) : 1));

                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    var_30 = (max(var_30, 28814));
                    var_31 = (28816 < 28800);
                    var_32 = ((((((arr_24 [i_7]) ? var_15 : var_10))) ? 46955 : (((arr_28 [i_7] [i_8]) ? var_10 : (arr_22 [i_7])))));

                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        var_33 = (((arr_29 [i_9 - 3] [i_9 - 3] [i_11]) <= (arr_29 [i_9 - 1] [i_9 + 1] [i_11])));
                        var_34 = (max(var_34, ((((arr_28 [i_8] [i_11]) || ((!(arr_31 [i_7] [i_7] [i_9] [i_9] [i_8] [i_9]))))))));
                    }
                }
                for (int i_12 = 0; i_12 < 25;i_12 += 1)
                {
                    arr_39 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = (!var_6);
                    arr_40 [i_7] = (((arr_22 [i_7]) ? (arr_22 [i_12]) : (arr_22 [i_7])));
                    var_35 = ((arr_35 [i_9 - 2] [i_9 - 3] [i_9 + 1]) ? (arr_35 [i_9 - 2] [i_9 - 3] [i_9 + 1]) : (arr_35 [i_9 - 2] [i_9 - 3] [i_9 + 1]));
                }
                for (int i_13 = 3; i_13 < 24;i_13 += 1)
                {
                    var_36 = (((arr_22 [i_7]) >= (9586 && 26006)));

                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        var_37 = ((((-(arr_34 [i_7] [i_8] [i_9] [i_7] [i_14]))) & var_12));
                        var_38 = 2;
                        var_39 = (((arr_30 [i_7] [i_9 - 1] [i_9] [i_13 - 2]) >= (arr_46 [i_7] [i_9] [i_8] [i_7])));
                    }
                    for (int i_15 = 2; i_15 < 23;i_15 += 1)
                    {
                        var_40 = ((28827 ? var_15 : 32579));
                        var_41 = (arr_43 [i_15 - 1] [i_15] [i_15] [i_15] [i_15] [i_15]);
                    }
                }
            }
        }
        var_42 = (min(var_42, ((((((((arr_24 [i_7]) ? (arr_47 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) : (arr_43 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))) ? (!var_10) : (46625 & 55949)))))));
    }
    #pragma endscop
}
