/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_11 = var_6;
                        arr_11 [i_0] [12] [i_0] |= ((((min(86, -26))) ? -26 : -32765));
                        var_12 = (min(var_12, (((+(max(((((arr_0 [i_0]) != 7592016992367741968))), (((arr_5 [i_2]) & -32767)))))))));
                    }
                }
            }
        }
        var_13 = (max(var_13, (arr_5 [i_0])));
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
    {
        var_14 = (((max(-2877960931649457397, -32734)) + (((var_0 ? var_7 : 1500234521)))));
        var_15 = (max(var_15, (((0 ? -26 : 0)))));

        for (int i_5 = 3; i_5 < 16;i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    {
                        arr_25 [i_5 - 1] [i_4] = -283250398;
                        var_16 ^= (((arr_2 [i_5]) ? (arr_7 [i_4] [i_5] [i_4] [9]) : var_8));
                        arr_26 [i_4] [i_5 + 1] = (min((arr_14 [i_6]), (min(-1432769517, var_5))));
                        arr_27 [i_7] [i_6] = (arr_7 [15] [i_6] [15] [i_4]);
                    }
                }
            }
            var_17 = -7233246506761486049;
            arr_28 [i_4] [i_4] = 3215;
            arr_29 [i_4] [3] [i_5] = (((arr_8 [i_4] [11] [i_4] [i_4]) ? -32765 : 124));
        }
        for (int i_8 = 3; i_8 < 16;i_8 += 1) /* same iter space */
        {
            var_18 = (min(var_18, ((16087967131551896412 ? 16087967131551896412 : ((min((max((arr_12 [i_8]), (arr_15 [i_4] [i_4] [i_8]))), 2436986186)))))));
            arr_32 [i_8] = var_0;
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 17;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 14;i_10 += 1)
        {
            {
                arr_38 [i_9] [i_9] [i_9] = (((((-21886 + 32764) < -10)) ? ((var_8 ? (((arr_13 [i_10] [i_9]) ? (arr_9 [i_9] [i_10 + 2] [i_10 - 1] [i_9] [i_9] [i_9]) : 9223372036854775807)) : (var_4 || var_1))) : (((-(arr_0 [i_9]))))));

                for (int i_11 = 3; i_11 < 16;i_11 += 1)
                {
                    var_19 = ((((((arr_4 [i_10 - 1] [i_11 - 2]) - (arr_4 [i_10 + 3] [i_11 - 3])))) ? (arr_30 [i_10 + 1] [15] [i_11 + 1]) : (((arr_0 [i_11 - 2]) ? (arr_0 [i_10]) : (arr_19 [i_11 - 1] [i_10] [i_9] [i_9])))));
                    arr_41 [i_9] [i_9] [i_10 + 2] [i_10] = -2147483645;
                    var_20 = ((((max(((16087967131551896412 ? 26660 : 743727084)), (!var_0)))) ? (arr_14 [13]) : -21886));
                    var_21 = (min(var_21, var_5));
                }
            }
        }
    }
    #pragma endscop
}
