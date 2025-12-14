/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 ^= (arr_1 [i_0]);
                    var_18 += var_9;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_19 = ((+(max((arr_9 [i_0] [i_0] [i_0] [i_0 + 1]), (var_16 / var_15)))));
                                var_20 = (min(11303, ((4073738517 ? 2147483648 : 32754))));
                                var_21 = var_15;
                                var_22 = (min((((arr_5 [3] [i_1] [i_2]) - 34675)), ((((((var_14 ? var_0 : (arr_10 [i_0] [i_0] [i_0])))) ? var_9 : (((arr_9 [i_0] [i_0] [i_0] [i_4]) ? 12 : (arr_6 [i_0] [i_1] [i_2] [i_3]))))))));
                            }
                        }
                    }
                    var_23 = 7835871076694788587;
                }
            }
        }
    }
    var_24 = (max(32767, (((var_16 < (!1))))));
    var_25 = (((58148 << var_3) ? 1 : var_4));
    var_26 = ((var_12 - ((var_11 ? (var_12 - var_7) : (var_5 < var_6)))));
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            {
                                var_27 &= 27;
                                var_28 += 49115;
                            }
                        }
                    }
                }
                var_29 = var_11;
                arr_26 [i_5] = ((((min((var_2 % var_2), -1))) ? (((1973545886 | 17790) ? (arr_23 [i_5] [i_5] [i_5] [i_5] [i_6] [i_6]) : ((((arr_17 [i_5]) < -82))))) : var_0));

                /* vectorizable */
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    var_30 += var_16;
                    var_31 = ((-6588897284088147391 || (arr_4 [i_5 + 1] [i_5])));
                    arr_29 [i_5] = 15;
                }
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    var_32 -= 7642888070579500099;
                    var_33 += (arr_12 [5] [i_6] [i_5]);
                }
                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    var_34 ^= ((((31 ? (((21917 >= (arr_22 [i_5] [i_6 - 1] [i_6] [i_12])))) : (((arr_19 [i_5 + 1] [0] [6]) / 36282)))) != (min(((min(32766, 65535))), ((-5299603428236822821 ? 78 : 1))))));
                    arr_35 [i_5] [i_5] [i_12] = ((var_2 && (arr_1 [i_12])));
                }
            }
        }
    }
    #pragma endscop
}
