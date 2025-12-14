/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (~2319369471674950790);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_10 = (max(var_10, ((max(94, 4294967295)))));
                                arr_14 [i_4] [i_2] [i_2] [i_1] [i_0] = (((((((~(arr_4 [i_0] [i_0] [18])))) ? (arr_0 [i_2 - 2]) : var_4)) > (((!(arr_8 [i_0] [i_0]))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] = (((((arr_11 [i_4] [i_4] [i_3] [i_2] [i_2 - 1] [i_2 - 2]) ? var_2 : -125))) ? var_5 : ((((arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]) ? (arr_11 [i_2 - 1] [i_2] [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2]) : (arr_11 [i_2 - 2] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 2] [i_2])))));
                            }
                            for (int i_5 = 0; i_5 < 23;i_5 += 1)
                            {
                                var_11 = 25284;
                                arr_19 [i_2] [i_2] [i_2 - 2] [7] [i_2] [i_5] [i_2] = -30640;
                                var_12 &= ((max(var_8, (arr_11 [i_0] [i_1] [i_0] [i_3] [i_0] [i_2 + 1]))));
                            }

                            for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
                            {
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [20] &= (arr_7 [i_0] [i_0]);
                                arr_23 [i_0] [i_1] [i_2] [i_3] [i_1] = var_7;
                                arr_24 [i_0] [i_0] [i_0] [i_0] = ((var_3 && ((max(((min(2, var_5))), ((-27380 ? 5967061831152031520 : 1)))))));
                                arr_25 [i_0] [i_0] [i_2 + 1] [i_3] [i_2 + 1] = (((var_3 ? (arr_9 [i_6 - 1] [i_2 + 1] [i_2]) : (arr_9 [i_6 - 1] [i_2 + 1] [i_1]))));
                            }
                            for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
                            {
                                var_13 = (min(var_13, var_9));
                                var_14 = ((var_6 ? (((~(-32767 - 1)))) : (max((arr_4 [i_0] [i_0] [i_2]), var_6))));
                            }
                            /* vectorizable */
                            for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
                            {
                                var_15 = var_2;
                                var_16 = ((7 ? 288089638663356416 : ((((arr_7 [i_1] [i_2 - 1]) - (arr_21 [i_0]))))));
                                arr_31 [i_0] = 1;
                            }
                            for (int i_9 = 3; i_9 < 20;i_9 += 1)
                            {
                                var_17 = ((min(((max(39347, 59509))), (~20655))));
                                var_18 = (min((arr_10 [i_1] [i_2 - 1] [i_9 - 2] [i_9] [i_9 - 2] [i_9 - 2]), (arr_10 [i_2] [i_1] [i_2] [i_3] [12] [i_2])));
                                var_19 = -22572;
                            }
                        }
                    }
                }
                var_20 = (min(var_20, var_1));
            }
        }
    }
    var_21 = (25284 / 833685244);
    #pragma endscop
}
