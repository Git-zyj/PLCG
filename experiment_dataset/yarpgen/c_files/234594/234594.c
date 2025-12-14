/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1) /* same iter space */
                    {
                        var_13 = ((var_11 ? var_1 : ((var_10 ? var_0 : var_5))));
                        arr_13 [i_0] [i_1] [i_0] [i_3] &= (!var_7);
                        var_14 = (min(var_14, var_6));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
                    {
                        var_15 = var_2;

                        for (int i_5 = 2; i_5 < 21;i_5 += 1)
                        {
                            var_16 *= var_1;
                            arr_19 [i_2] [i_4] = (!var_11);
                            var_17 = ((var_5 ? var_6 : var_0));
                        }
                    }
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_18 = (min(var_18, ((max(((((max(var_12, var_4))) ? var_10 : var_8)), (((min(var_3, var_0)))))))));
                        var_19 &= (((((~((var_2 ? var_8 : var_8))))) ? var_1 : (min((min(var_10, var_1)), var_5))));

                        for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                        {
                            var_20 = ((-((min(var_7, var_5)))));
                            arr_28 [i_0] [i_1] [i_2] [i_2] [i_6] [i_6] [i_2] = ((-1889285354 ? -788336641931872737 : 4294967295));
                            var_21 -= var_3;
                            var_22 = (!var_12);
                        }
                        for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
                        {
                            var_23 |= -var_4;
                            var_24 = var_11;
                            arr_33 [i_2] [i_0] [i_1] [i_2] [i_6] [i_8] = max(-109, 2483725819);
                            var_25 -= var_8;
                        }
                        for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
                        {
                            var_26 = (max(var_26, var_0));
                            arr_36 [i_0] [i_1] [i_2] = var_9;
                            var_27 += ((-(min(var_2, var_5))));
                            arr_37 [i_9] [i_6] [i_2] [i_1] [i_0] = (!2);
                        }
                    }
                    arr_38 [i_1] [i_2] = var_7;
                    var_28 = ((((max(var_11, ((var_3 ? var_11 : var_6))))) ? ((var_5 ? var_7 : (!1))) : var_0));
                }
            }
        }
    }
    var_29 = ((!((max((max(var_5, var_11)), var_0)))));
    #pragma endscop
}
