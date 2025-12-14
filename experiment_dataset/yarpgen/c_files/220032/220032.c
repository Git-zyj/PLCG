/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0 + 2] = (1 * -4);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_10 [i_3] [i_1] [i_0] [0] = ((var_6 ? (((-(max(30, 1048544))))) : (((((var_13 ? var_6 : var_3))) ? ((((var_12 + 2147483647) >> (var_3 - 2619390381)))) : var_8))));
                        var_15 = var_14;

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            var_16 = (!1);
                            var_17 = 1;
                        }
                        var_18 = var_9;
                    }
                }
            }
        }
        var_19 = -var_10;
        arr_14 [i_0] = (max(((max(var_13, 91))), ((var_2 ? (((3 ? var_4 : 7715532673972768052))) : 34359738367))));
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        arr_18 [i_5] = var_8;
        var_20 &= var_11;
        var_21 = var_1;
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        arr_22 [0] [i_6] = var_7;

        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            arr_25 [i_6] &= (min(0, ((-1194100531 ? var_14 : (((var_4 ? var_3 : var_6)))))));

            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                arr_29 [i_7] = ((-((min(1023, 1)))));

                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    arr_32 [i_7] [i_8] [i_8] [i_7] [i_7] = (((var_12 + 2147483647) << (((-7715532673972768052 + 7715532673972768071) - 19))));
                    arr_33 [i_6] [i_9] [i_7] [i_9] = 3;
                }
            }
            arr_34 [i_7] [i_7] [i_6] = (~var_4);
        }
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            var_22 = 1;
            var_23 = var_8;
        }
    }
    var_24 = ((221 ? 16383 : 274877906943));
    #pragma endscop
}
