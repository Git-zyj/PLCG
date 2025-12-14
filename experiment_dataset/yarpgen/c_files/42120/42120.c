/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_16 = (arr_0 [i_0] [i_0]);
        var_17 ^= (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_7 [i_1] = -var_7;
            var_18 = 119;
        }
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_19 += arr_4 [i_1] [i_3] [i_1];
            arr_11 [i_1] [i_1] = ((((9223372036854775807 ? (0 || var_10) : (arr_5 [i_1] [i_1]))) != (((!((max(0, (arr_6 [i_3] [i_3])))))))));
            arr_12 [i_1] [i_3] = (max((((-(var_2 || var_6)))), (((!4294967271) ? ((min(0, var_1))) : (103 * 0)))));
        }
        for (int i_4 = 2; i_4 < 14;i_4 += 1)
        {
            arr_15 [i_1] [i_1] [i_1] = var_11;
            arr_16 [i_1] = (~(((!(((2 ? 126 : (arr_6 [i_1] [i_1]))))))));
            var_20 = (max(var_20, (arr_2 [i_4])));
        }
        var_21 = (((((~((1 ? 7267334046828481505 : 9223372036854775807))))) ? ((-(((arr_8 [i_1] [6] [i_1]) ? 4998622129341640101 : 4260356715)))) : ((max(((0 ? var_4 : 126)), -905974387)))));
        arr_17 [i_1] = (((((-(1 >= 16)))) ? -var_8 : 65535));
        var_22 = -13;
        arr_18 [i_1] = 8467992742308090136;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
    {
        var_23 = ((-13 == 34610581) ? (((arr_8 [i_5] [6] [i_5]) ? var_6 : var_1)) : (!1));
        arr_22 [i_5] = ((~(-32767 - 1)));
        arr_23 [i_5] = (var_6 ? (4260356715 && var_13) : (34610581 <= 1));
        var_24 = ((~(arr_19 [i_5])));
    }
    var_25 = -127;

    for (int i_6 = 1; i_6 < 13;i_6 += 1)
    {
        var_26 = ((-(min(4294967291, (~4260356710)))));
        arr_27 [i_6] [i_6] = max(((-(~32758))), 136);
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                {
                    var_27 = (--22080);
                    var_28 *= (((~1821813313) < 0));
                    var_29 += 1;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 2; i_9 < 19;i_9 += 1)
    {
        var_30 += ((-27 ? 34610581 : (((var_6 / (arr_33 [i_9]))))));
        arr_34 [i_9] = 12;
    }
    var_31 = (max((~9223372036854775807), 34610580));
    #pragma endscop
}
