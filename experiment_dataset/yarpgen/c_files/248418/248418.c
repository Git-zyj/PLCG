/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_12 = ((-(((~var_8) ? ((-(arr_0 [i_0]))) : (~var_1)))));
                var_13 = (max(var_13, ((((arr_1 [i_1 - 1]) ? (arr_2 [i_0]) : ((((max(18446744073709551615, (arr_4 [i_0 + 1])))) ? var_10 : (arr_3 [i_1]))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 23;i_3 += 1)
        {
            {
                arr_12 [i_3 - 1] [i_2] = ((~(arr_6 [i_2] [i_3 - 2])));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_14 -= var_5;
                                arr_23 [i_6] [i_2] [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_2] = ((~(arr_19 [i_3] [i_3 + 1] [i_3 - 1] [i_3 - 2] [i_3] [i_3])));
                                var_15 = ((((((var_8 | var_7) ? ((var_0 ? 4099642620628200616 : var_3)) : var_0))) ? ((((((((arr_8 [i_5] [i_5]) + 2147483647)) << (1 - 1)))) ^ (arr_13 [i_2] [i_3 - 1] [i_2]))) : var_9));
                                var_16 = (max((max(var_9, ((-(arr_20 [i_6] [i_6] [i_2] [i_4] [i_3] [i_2]))))), ((((((arr_17 [i_2] [i_2]) < 4077482083))) % ((max(-98, -9993)))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 1; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 20;i_9 += 1)
                        {
                            {
                                var_17 = (((!(arr_20 [i_9] [i_3 - 2] [i_3 - 2] [i_7 - 1] [i_3 - 2] [i_2]))));
                                var_18 += (((((((((arr_8 [i_3] [i_7 + 2]) ? var_10 : var_10))) ? ((var_1 ? (arr_26 [i_9] [i_3] [i_3] [i_2]) : var_6)) : var_9))) ? ((58 & (((arr_27 [i_8]) ? var_6 : var_0)))) : (arr_27 [i_2])));
                            }
                        }
                    }
                }
                var_19 -= ((1 ? 60 : 1747676341));

                for (int i_10 = 2; i_10 < 23;i_10 += 1)
                {
                    var_20 -= (max(-1576977897, (-127 - 1)));
                    var_21 |= -4099642620628200628;
                    var_22 = (((arr_7 [i_2]) << (((((-2147483647 - 1) - -2147483647)) + 23))));
                }
                for (int i_11 = 3; i_11 < 22;i_11 += 1)
                {
                    var_23 += ((min(((arr_11 [i_2] [i_2] [i_11 + 2]), (4077482083 - 0)))));
                    arr_38 [i_2] [i_2] [i_11 + 1] = ((~((var_4 ? var_0 : (arr_33 [i_3 - 2] [i_3 - 2] [i_3 + 1])))));
                }
            }
        }
    }
    var_24 = var_2;
    #pragma endscop
}
