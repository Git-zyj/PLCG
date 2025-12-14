/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_16 = ((arr_11 [i_0] [i_2 - 1] [i_2 + 1] [i_0] [8]) | var_1);
                        arr_13 [i_2] [i_2] [i_1] [i_0] [i_2] [i_0] = (0 == var_12);
                        var_17 = (min(var_17, 0));
                        var_18 = ((-1042982680619721622 >= (arr_5 [i_2 + 1] [i_2 + 2] [4])));
                    }
                }
            }
        }
        arr_14 [i_0] [i_0] |= 44392;

        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {
            var_19 = (((((40 | (arr_15 [i_0] [i_4] [i_4])))) ? 0 : ((((arr_3 [i_4 + 1]) > (arr_7 [i_4]))))));
            var_20 = var_13;
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_21 = (~1925);
            var_22 = ((((1925 >= (arr_15 [i_0] [10] [i_0]))) ? var_15 : (arr_5 [i_0] [i_0] [i_5])));
        }
        var_23 = var_13;
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        var_24 = (((var_9 % 1) ? (min(1, ((134654304 ? 1042982680619721622 : var_7)))) : ((((((((1042982680619721617 >= (arr_9 [i_6] [i_6] [10] [i_6] [i_6]))))) == ((var_13 ? 8070450532247928832 : var_1))))))));
        arr_23 [i_6] = var_11;
        arr_24 [i_6] = var_11;
    }
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            arr_29 [i_7] [i_7] [i_7] = ((((((arr_26 [i_7]) && var_9))) < (!517159384)));
            var_25 = var_1;
        }
        for (int i_9 = 3; i_9 < 24;i_9 += 1)
        {
            var_26 *= ((var_7 < var_12) * (((((var_6 ? var_10 : var_3)) >= var_5))));
            arr_34 [i_7] [i_9] [i_9] = (i_7 % 2 == 0) ? ((((var_13 ^ 8070450532247928841) < (((((((var_1 + 2147483647) << (((arr_25 [i_7]) - 1350677032))))) ? (min(var_5, 1056719749)) : (arr_31 [i_9 - 1] [2]))))))) : ((((var_13 ^ 8070450532247928841) < (((((((var_1 + 2147483647) << (((((arr_25 [i_7]) + 1350677032)) - 495077880))))) ? (min(var_5, 1056719749)) : (arr_31 [i_9 - 1] [2])))))));
            var_27 = var_15;
        }

        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            var_28 = ((var_7 || ((max(var_11, (arr_36 [i_7] [i_10]))))));
            arr_38 [i_7] [12] = (((!0) > (arr_33 [i_10])));
            var_29 = (var_11 && ((max((~28), 1))));
        }
        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {
            var_30 = 10376293541461622784;
            arr_42 [i_7] = ((var_15 ? var_3 : (((var_1 ? (arr_37 [i_11] [i_11] [i_11]) : 120)))));
        }
    }
    var_31 &= (!var_10);
    #pragma endscop
}
