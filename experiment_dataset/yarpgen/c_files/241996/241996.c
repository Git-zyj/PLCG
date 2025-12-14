/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_9 ? ((((var_8 | var_13) ? var_9 : var_2))) : (var_8 | var_3)));
    var_15 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_16 = (((((arr_1 [i_0 - 2]) ? (arr_1 [i_0 - 2]) : (arr_1 [i_0 - 2])))) ? ((268431360 ? (((var_4 || (arr_4 [i_0] [i_1] [12])))) : (arr_7 [i_2]))) : (((((var_13 ? var_3 : var_10))) ? (((arr_1 [i_0]) ? (arr_2 [i_0]) : 338481104)) : (arr_0 [8]))));
                    var_17 &= (var_6 ? var_9 : ((((57344 ? (arr_1 [i_2]) : (arr_4 [i_0] [i_0] [i_0]))))));
                    var_18 = arr_8 [i_0] [i_1] [i_2] [i_2 + 1];
                    var_19 = (((max(var_8, var_6)) >= (arr_7 [i_0])));
                }
            }
        }
    }

    for (int i_3 = 1; i_3 < 9;i_3 += 1)
    {
        var_20 = (arr_10 [i_3]);
        var_21 ^= -105;
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 19;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 1; i_5 < 18;i_5 += 1)
        {
            arr_17 [i_5] = (((var_7 && var_12) || (arr_1 [i_4 - 1])));
            var_22 = (((((arr_14 [i_4] [i_4]) ? 58 : var_3)) ^ (arr_13 [i_4] [i_5 - 1])));
            var_23 = (arr_8 [i_4 - 1] [i_4 - 1] [i_4 - 3] [17]);
            var_24 = (((arr_6 [i_5 + 2] [i_5 - 1] [i_5] [i_5 - 1]) && (arr_6 [i_4 - 2] [i_4 - 2] [i_5] [i_4 - 3])));
        }
        var_25 = (~-var_6);
        var_26 *= arr_6 [i_4 - 1] [i_4 - 1] [i_4 - 3] [i_4 - 1];
        var_27 = (arr_15 [i_4] [i_4] [i_4]);
        var_28 = ((58 ? (arr_2 [i_4 - 1]) : var_7));
    }
    for (int i_6 = 3; i_6 < 19;i_6 += 1) /* same iter space */
    {
        var_29 = (((((min(9557, -47))) == (arr_2 [i_6]))));
        var_30 *= (arr_3 [i_6] [i_6] [i_6 - 3]);
        var_31 = (min(var_31, (((~(arr_5 [i_6 + 1] [4] [i_6]))))));
    }
    #pragma endscop
}
