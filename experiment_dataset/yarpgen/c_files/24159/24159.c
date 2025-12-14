/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_17;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_21 ^= (-78 ? 1166970524 : -42);
        arr_2 [i_0] [i_0] = ((-(!var_15)));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    var_22 = (((((-1166970524 ? (min(-541982355, -28)) : ((36 ? -541982355 : -541982380))))) ? -230365094 : -114));
                    var_23 ^= (arr_7 [i_1]);
                    var_24 = arr_0 [i_1];

                    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_2] [i_1] [i_4] = 78;
                        var_25 = (max(var_25, (((((!(!9))) ? (-127 - 1) : var_15)))));
                        var_26 *= var_12;
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 3; i_6 < 12;i_6 += 1)
                        {
                            arr_20 [i_1] [i_5] [i_3] [i_2] [i_1] = ((!(arr_12 [i_5] [i_6] [i_6 - 1] [i_6] [i_6 + 1])));
                            var_27 = (max(var_27, (arr_17 [i_1] [i_2] [i_3] [i_5] [i_6 - 2])));
                        }
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            var_28 = (min(var_28, (((~(arr_1 [i_2]))))));
                            var_29 ^= 943764767;
                            var_30 += (-541982345 >> (var_2 - 28));
                            arr_23 [i_1] [i_2] [i_2] [i_5] [i_2] = ((-(arr_21 [i_7] [i_1] [i_3] [i_7] [i_7])));
                        }
                        for (int i_8 = 4; i_8 < 11;i_8 += 1)
                        {
                            var_31 = (-127 - 1);
                            var_32 = ((22 ? var_13 : (arr_17 [i_1] [i_1] [10] [i_5] [i_8])));
                            arr_28 [i_1] [i_2] [i_2] [i_3] [i_5] [i_8] = (+(((arr_10 [i_1] [i_1] [i_1] [i_1]) | (arr_13 [i_1] [i_1] [i_3] [i_5] [i_1]))));
                        }
                        var_33 = var_3;
                    }
                    for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
                    {
                        arr_31 [i_1] [i_2] [i_1] = ((((min((arr_6 [i_1] [i_3] [i_1]), (arr_6 [i_1] [i_1] [i_1])))) / (((arr_16 [i_3] [i_9]) ? (arr_16 [i_3] [i_9]) : (arr_16 [i_2] [i_9])))));
                        var_34 = (max(var_34, (((!(((((max(var_17, -25))) ? (arr_19 [8] [i_3] [5] [i_1] [i_1]) : (~-541982357)))))))));
                        var_35 = (arr_3 [i_2]);
                        var_36 = ((~(arr_15 [i_2] [i_2] [4] [i_2])));
                        arr_32 [i_1] [i_1] [i_1] [i_1] = (((((!((min(330956841, (-127 - 1))))))) << ((((((-(arr_24 [i_1] [i_1] [i_2] [i_2] [i_3] [i_9] [i_9]))) / var_4)) + 30))));
                    }
                    for (int i_10 = 3; i_10 < 10;i_10 += 1)
                    {
                        arr_35 [i_1] [i_1] [i_3] [i_10] = 105;
                        arr_36 [i_1] [i_1] [i_1] [i_1] = ((-((((78 >> (((arr_30 [i_1] [i_2] [i_3] [2]) - 923127343)))) % (arr_21 [2] [i_1] [i_3] [i_1] [i_3])))));
                        arr_37 [i_1] [i_2] [i_3] [i_10] [i_1] = (78 + 64);
                    }
                }
            }
        }
        arr_38 [i_1] = min(((52 ? 103 : (-127 - 1))), 64);
        arr_39 [i_1] = -var_8;
    }
    #pragma endscop
}
