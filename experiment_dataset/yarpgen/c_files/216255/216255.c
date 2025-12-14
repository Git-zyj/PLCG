/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    var_17 = var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((153 ? 103 : 18446744073709551614));
        var_18 = (arr_1 [i_0]);
        arr_3 [4] = (arr_0 [i_0]);
        var_19 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_20 -= (max((((arr_0 [i_1]) ? ((-627905975 ? -1802932724936929127 : (arr_5 [i_1]))) : (arr_5 [i_1]))), ((((-9223372036854775807 - 1) ? (((11048 ? 14 : 26169))) : (min(268435455, 65525)))))));
        var_21 = 545657963;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_22 = 1802932724936929143;
                        var_23 = 627905975;
                    }
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        var_24 = max((arr_9 [i_1] [i_2] [10]), (min((arr_14 [i_5] [i_1]), ((-1401467540 ? 13359084158580192553 : -490769232)))));
                        arr_16 [18] [i_2] = ((((min((arr_10 [i_3]), 55581))) ? (arr_4 [i_1]) : (-2147483647 - 1)));
                    }
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 20;i_6 += 1)
                    {

                        for (int i_7 = 1; i_7 < 20;i_7 += 1)
                        {
                            arr_21 [i_1] [i_6] [i_3] [i_2] [i_1] [i_1] = 1;
                            arr_22 [6] = 43;
                        }
                        var_25 = ((3650 ? 146 : -1));
                        var_26 = -1;
                        var_27 = (((((-26170 ? -1 : -46))) ? (arr_14 [i_3] [i_3]) : (((arr_8 [i_2] [i_2] [i_2]) ? (arr_17 [i_6] [i_2] [i_3] [i_6] [i_1]) : 0))));
                    }
                    arr_23 [i_1] [i_1] [8] [i_3] = (arr_18 [i_3]);
                }
            }
        }
    }
    var_28 = min(var_12, ((((-2147483647 - 1) ? -40291631 : var_3))));
    #pragma endscop
}
