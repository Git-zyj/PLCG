/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= (max(((((min(var_10, var_5)) > var_3))), var_3));
    var_12 = var_0;

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_1] [i_3] [i_3] = (min(((var_8 | (arr_0 [i_2 + 1]))), ((((((-1 + 9223372036854775807) << var_3))) ? (var_3 < var_1) : var_5))));
                        var_13 = (min(var_13, (((~((-21 | (-127 - 1))))))));
                        var_14 = min(((min(15, -28357))), (arr_8 [i_0] [i_0]));
                    }
                }
            }
        }
        arr_14 [i_0] [i_0] = (((((2887740766 | (arr_1 [i_0])))) ? (((arr_3 [i_0]) | var_10)) : (((16 ? 104 : 1)))));
        var_15 = var_7;
        var_16 = max((min((arr_6 [i_0] [i_0] [i_0] [i_0]), var_4)), ((var_7 % (arr_6 [i_0] [i_0] [i_0] [i_0]))));
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
    {
        var_17 = 1920;

        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 15;i_7 += 1)
                {
                    {
                        var_18 ^= (min((max(var_9, (arr_9 [9] [i_7] [i_7 + 1] [1]))), 242));
                        var_19 = var_0;
                    }
                }
            }
            var_20 = (2910828268 / var_8);
            var_21 = (min(var_1, (((((1927 ? -28357 : var_1))) ? 15360 : (2443146006 + -21)))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    {

                        for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
                        {
                            var_22 = (((((14 * 3) ? var_0 : (1851821303 == var_10))) <= (((max((arr_19 [i_8] [i_8] [i_8]), var_3))))));
                            var_23 = 5309741586027415975;
                        }
                        for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
                        {
                            arr_37 [i_11] [i_8] [i_8] [i_4] = 104;
                            var_24 = (((5309741586027415988 ? (arr_25 [i_4]) : (arr_25 [i_8]))));
                        }
                        var_25 = (max((((29412 > (12747 > 1073741823)))), ((max(var_3, var_0)))));
                    }
                }
            }
        }
        var_26 = var_10;
        var_27 = (((((arr_23 [i_4]) ? 156 : (max(7, 2443146006)))) | ((((-127 - 1) ? 80 : 121)))));
    }

    for (int i_12 = 1; i_12 < 11;i_12 += 1)
    {
        arr_41 [i_12] = (max(((min(-854539249, var_1))), 13941207918616682161));
        arr_42 [i_12] = -var_10;
    }
    for (int i_13 = 0; i_13 < 23;i_13 += 1)
    {
        arr_46 [i_13] = 1;
        arr_47 [i_13] = (max((((var_7 ? 49 : 104))), ((var_10 ? (arr_44 [i_13]) : -60))));
        var_28 = (arr_44 [i_13]);
    }
    var_29 = ((var_3 ? ((max(((1920 ? 63 : var_5)), 1810004439))) : ((-85 ? 27046 : 4259184175))));
    #pragma endscop
}
