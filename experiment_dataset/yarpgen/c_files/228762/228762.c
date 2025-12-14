/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 14;i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_3] [i_0] [i_3] [6] [i_3] = (max((~var_6), ((var_0 ? var_6 : var_2))));
                        var_10 &= var_3;
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 14;i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_0] [i_0] [16] [i_4] &= (var_9 <= var_8);
                        arr_17 [i_0] [i_1 - 1] [1] [i_0] [i_1 - 1] [i_2] = ((var_3 ? var_5 : var_3));
                        var_11 = (max(var_11, (!var_8)));
                        var_12 *= var_9;
                    }
                    for (int i_5 = 3; i_5 < 17;i_5 += 1) /* same iter space */
                    {
                        var_13 = (max(var_13, ((min((min(var_1, var_7)), -var_7)))));
                        arr_22 [i_0] [i_0] = var_1;
                    }
                    for (int i_6 = 3; i_6 < 17;i_6 += 1) /* same iter space */
                    {
                        arr_26 [i_0] [i_1 - 1] [i_2] [i_0] [i_0] = var_0;

                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            arr_29 [i_0] [i_1] [13] [i_0] = ((-(max(var_6, var_0))));
                            arr_30 [i_0] [i_6] [i_0] [1] [i_0] = (max((((min(19, -6149237956425731864)) * (~var_2))), ((max(var_7, var_8)))));
                            var_14 = (min(((min(((var_8 ? var_3 : var_4)), ((var_4 >> (var_0 - 1968814790)))))), -var_0));
                            arr_31 [i_0] [i_0] [i_0] [16] [i_0] = (max(6149237956425731863, 511));
                        }
                    }
                    arr_32 [i_0] [i_0] [i_0] = (max((max(var_1, var_8)), ((max(1, 3)))));
                    var_15 = (((var_2 ? -var_8 : (!var_8))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            {
                                arr_39 [i_0] [i_0] [i_0] [i_8] [2] = (min((max(var_1, var_4)), var_1));
                                var_16 = (max(var_16, ((min((min((max(var_8, var_3)), ((max(var_2, var_3))))), ((-var_1 ? var_6 : var_0)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = ((((max(var_0, 125829120))) ? -var_6 : var_7));
    var_18 = (max(var_18, ((min(((var_5 ? (((min(var_2, var_5)))) : ((var_7 ? var_2 : var_8)))), (((((max(var_4, var_6))) ? ((min(var_6, var_6))) : var_9))))))));
    #pragma endscop
}
