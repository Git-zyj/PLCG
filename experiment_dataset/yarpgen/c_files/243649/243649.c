/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_16 = ((!var_10) ? (arr_1 [i_0]) : (arr_2 [i_0]));
        var_17 = ((!(-1842 && var_13)));
        var_18 = (min(var_18, var_9));
        var_19 = ((((var_10 ? var_11 : var_7)) > -var_8));
        var_20 ^= (arr_2 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_21 ^= var_15;
        var_22 = ((((var_9 ? 32767 : -1842)) ^ (arr_3 [i_1])));
        arr_6 [i_1] [i_1] = ((~(arr_5 [i_1] [i_1])));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 4; i_3 < 9;i_3 += 1)
        {
            var_23 = ((!(((var_3 ? var_11 : (arr_5 [i_3] [i_3]))))));
            var_24 = (((arr_3 [i_3]) << (!-1860672581072008982)));
            var_25 = var_10;
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_5 = 4; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 10;i_7 += 1)
                    {
                        {
                            var_26 = (max((((3458764513820540928 ? var_1 : (arr_10 [i_4])))), (51264 / var_14)));
                            var_27 = (max(var_27, (((((-30651 & ((~(arr_8 [i_2]))))) - -1260119802)))));
                            var_28 = 183;
                        }
                    }
                }
            }
            arr_23 [i_4] [i_4] = ((((arr_19 [1] [i_4] [1] [i_2] [i_4]) ? -1832 : 0)));
            arr_24 [i_4] = (min(var_12, ((var_5 ? (arr_21 [i_4] [i_2] [i_2] [i_2]) : (max(2809985522, var_5))))));
            var_29 ^= (((((var_10 ? (arr_20 [i_2] [i_2] [i_2] [i_4]) : (arr_20 [i_2] [i_4] [i_4] [i_4])))) ? (((((var_8 ? 3912972615 : var_8)) == var_11))) : (arr_4 [i_4] [i_2])));
        }
        for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
        {
            var_30 = (((((((arr_5 [i_2] [i_8]) ? var_4 : var_4))) ? ((var_0 ? var_14 : (arr_11 [i_2] [i_2] [i_2]))) : (arr_18 [i_8] [i_8] [i_8] [i_8] [i_8]))));
            var_31 = (((((max((((arr_14 [i_8] [8] [8]) ? var_14 : (arr_5 [i_8] [i_8]))), ((var_10 ? (arr_7 [1] [1]) : var_11)))) + 2147483647)) << (((var_14 + 21466) - 14))));
        }
        var_32 = (max(var_32, 28391));
        var_33 += (((arr_3 [8]) << (((((~var_10) + 26848)) - 20))));
    }
    for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
    {
        var_34 = (min(var_34, (~var_13)));
        arr_29 [i_9] [i_9] = ((((1 ? (arr_21 [i_9] [i_9] [i_9] [i_9]) : var_14)) == (min((arr_21 [i_9] [i_9] [i_9] [i_9]), var_3))));
    }
    var_35 = (~var_5);
    var_36 = ((((var_12 ? (65535 * var_11) : (max(var_13, var_12)))) << (((~var_15) - 2504583798))));
    #pragma endscop
}
