/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((((var_5 * ((7978879883516098994 ? var_1 : var_3))))), ((var_6 ? (max(var_4, var_9)) : var_4))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = ((-8862798895085543127 ? 8593141523400099367 : 17606544944022308915));
        arr_3 [i_0] = ((var_8 ? (~var_3) : var_0));
        arr_4 [i_0] [i_0] = ((((((-127 - 1) + 8593141523400099367))) ? (arr_0 [i_0 - 3] [i_0 - 2]) : ((var_10 ? var_4 : var_0))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_13 = (~var_11);
        var_14 = (((2071512319 ? 8988727182148335771 : 193)));
        var_15 = 124;
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_16 = ((+((var_5 ? ((((arr_10 [i_2]) + var_3))) : 4185583697524383685))));
        var_17 = (max((max((arr_7 [i_2]), ((max(var_3, (arr_6 [i_2])))))), (max((arr_1 [i_2] [i_2]), (-127 - 1)))));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
    {
        var_18 = (max(-var_2, ((((((413775684776993520 ? 8988727182148335771 : -3954609510567016134))) ? -413775684776993521 : var_1)))));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 8;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_19 = ((255 ? 17606544944022308945 : 136));
                                arr_26 [i_3] [i_4] [i_5] [i_3] [i_4] [i_7] = 131;
                                arr_27 [i_3] [i_4 + 1] [i_5] [i_6] [i_4] = ((((((579342465 ? 3954609510567016133 : -256773370949947032)))) ? (((var_4 + (min(919413422113053785, var_7))))) : (max(919413422113053785, (max(var_7, var_2))))));
                            }
                        }
                    }
                    var_20 = (min((max(18446744073709551615, var_6)), ((((arr_23 [i_3] [1] [3] [i_4 - 2] [i_4]) ? (arr_23 [i_3] [i_4] [i_5] [i_4 - 2] [i_4]) : var_1)))));
                    arr_28 [i_3] [i_4] [i_5] [i_5] = (max(-3954609510567016134, ((max((arr_12 [i_4 - 1]), ((3954609510567016134 ? (arr_20 [i_5]) : var_10)))))));
                }
            }
        }
        arr_29 [i_3] = (max(((var_8 ? var_3 : 1)), ((var_10 ? var_3 : var_5))));
    }
    var_21 = 413775684776993520;
    #pragma endscop
}
