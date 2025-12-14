/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!var_2);

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_14 += var_7;
        arr_2 [i_0] = ((var_3 ? ((~(~-88))) : (((!(arr_0 [i_0] [i_0]))))));

        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            var_15 &= (!var_0);
            var_16 |= 83;
            var_17 = (((((~47) ^ ((var_4 ? var_9 : var_10)))) >= ((-((min(-105, var_10)))))));
            var_18 = (-86 != 47);

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                var_19 = -61;
                var_20 = 0;

                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        arr_12 [i_0] [i_3] [i_2] [i_1] [i_0] = (max(((var_5 * (!var_7))), (~var_11)));
                        var_21 = -11;
                        var_22 = var_11;
                    }
                    var_23 = ((((((var_5 ? -47 : (arr_11 [i_0 - 1]))) + 2147483647)) << ((((((~(arr_0 [i_1] [i_1 + 1]))) + 97)) - 2))));
                }
                for (int i_5 = 2; i_5 < 20;i_5 += 1) /* same iter space */
                {
                    var_24 = (((!47) && ((min((((arr_8 [i_5] [i_5]) ? var_12 : (arr_15 [i_0]))), ((var_0 | (arr_8 [i_0] [i_5]))))))));
                    var_25 = (max(0, ((max((min((arr_1 [i_0]), (arr_4 [i_0] [i_1] [i_5]))), 2)))));
                }
                for (int i_6 = 2; i_6 < 20;i_6 += 1) /* same iter space */
                {
                    var_26 = ((-(!-var_2)));
                    arr_19 [i_0] = 0;
                    var_27 = (min((min((~var_12), ((min((arr_16 [i_0] [i_2]), -61))))), ((~(~var_5)))));
                    arr_20 [i_6] [0] [i_0] &= ((!((!(((-101 ? -113 : var_8)))))));
                    var_28 = arr_3 [i_6];
                }
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    var_29 = 78;
                    var_30 = 47;
                    var_31 -= (min((!-4), ((!(arr_22 [i_0] [i_1] [i_2] [i_7])))));

                    for (int i_8 = 3; i_8 < 20;i_8 += 1)
                    {
                        var_32 = var_8;
                        var_33 = ((((~(arr_1 [i_8]))) ^ ((min(2, var_0)))));
                    }
                }
                var_34 = arr_14 [i_2] [i_1] [i_1] [i_0] [i_0];
            }
        }
    }
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        var_35 = var_0;
        var_36 = -var_2;
        var_37 = (max(var_37, (max(-9, (min(var_12, (arr_13 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))))));
        var_38 |= (min((min(var_1, (~-1))), var_2));
    }
    for (int i_10 = 1; i_10 < 20;i_10 += 1)
    {
        var_39 = (((-76 + 2147483647) >> ((min(108, 0)))));
        var_40 = (max(-4, (max(var_10, (((arr_10 [i_10] [i_10] [i_10] [i_10] [i_10]) % var_2))))));
    }
    var_41 = (((((-((var_2 ? -69 : var_4))))) ? ((~(!-55))) : var_6));
    #pragma endscop
}
