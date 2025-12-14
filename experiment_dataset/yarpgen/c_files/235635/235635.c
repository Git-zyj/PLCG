/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((var_12 ? ((var_9 ? 1 : var_17) : var_4))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_21 += (((((1 < (arr_0 [i_1]))) ? (((0 ? var_6 : (arr_2 [i_0])))) : 1629)));
                var_22 += (arr_5 [i_0] [i_0] [i_1]);
            }
        }
    }
    var_23 = var_3;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                arr_12 [i_2] [i_2] = (arr_8 [i_2]);
                arr_13 [i_2] [i_2] [i_3] = (((arr_7 [i_2]) ? ((var_5 ? (arr_8 [i_2]) : (((var_13 ? var_1 : (arr_7 [i_2])))))) : (((3921623105 ? ((-9021478726173887178 ? 1 : -7195811037682851902)) : 19943)))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {

                            for (int i_6 = 1; i_6 < 17;i_6 += 1)
                            {
                                arr_21 [i_2] [i_2] [i_2] [i_2] [i_2] = ((-((var_8 ? -6422653752290544169 : var_15))));
                                var_24 -= (((((arr_20 [i_5] [i_3] [14] [i_4] [i_6] [14]) ? (min((arr_7 [i_5]), var_3)) : var_4)) >> var_19));
                                var_25 &= 1024;
                            }
                            /* vectorizable */
                            for (int i_7 = 3; i_7 < 18;i_7 += 1) /* same iter space */
                            {
                                arr_25 [i_2] [i_4] = ((0 >= (arr_19 [i_2] [i_2] [i_4] [i_2] [i_7 - 3])));
                                arr_26 [i_2] [i_5] [i_4] [i_3] [i_2] = ((131068 | ((19196 ? var_0 : 9084043225889373245))));
                            }
                            /* vectorizable */
                            for (int i_8 = 3; i_8 < 18;i_8 += 1) /* same iter space */
                            {
                                var_26 = (1420 + -8237608680353187370);
                                var_27 = (((((var_4 ? var_9 : 0))) >= ((~(arr_8 [i_2])))));
                            }
                            var_28 = var_7;
                            var_29 = -13751;
                        }
                    }
                }
                var_30 = var_11;
            }
        }
    }
    #pragma endscop
}
