/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_5;
        arr_3 [i_0] [i_0] = (min(((((min(5939084592548718401, 1442376759))) ? var_6 : ((var_5 ? var_5 : var_3)))), (((var_10 ? (!var_0) : var_1)))));
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        var_12 = var_5;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                {
                    arr_12 [i_2] [i_2] [i_3] [i_3] = (((max(var_9, (max(10597596024070141683, 504))))) ? ((var_2 ? ((var_8 ? var_10 : var_0)) : (((var_3 ? var_3 : var_5))))) : var_9);
                    arr_13 [i_2] [i_2] [i_2] = var_5;
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        arr_17 [i_4] = ((var_4 ? ((var_3 ? var_3 : ((var_1 ? var_8 : var_7)))) : var_2));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            var_13 = (min(var_13, var_4));
            arr_21 [i_5] [i_4] [i_4] = var_1;
            var_14 = (max(var_14, -var_2));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_7 = 3; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    {
                        var_15 = (max(var_15, var_9));
                        var_16 = (!var_1);
                        var_17 = var_10;
                    }
                }
            }
            arr_29 [i_4] = var_6;
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 14;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        arr_37 [1] [i_4] [i_4] [2] = (((((var_10 ? var_0 : ((var_7 ? var_5 : var_4))))) ? ((var_3 ? var_6 : ((var_2 ? var_1 : var_5)))) : var_1));
                        arr_38 [i_4] [i_6] [i_9] [i_4] [i_10] = ((var_10 ? var_5 : var_5));
                        arr_39 [i_4] [i_6] [i_9 + 2] [i_4] [i_4] [i_10] = var_6;
                    }
                }
            }
        }
        for (int i_11 = 0; i_11 < 17;i_11 += 1)
        {
            arr_42 [i_4] [1] = -var_6;
            var_18 = (min(var_18, var_1));
            var_19 = (max(var_19, ((-((-var_0 ? ((var_5 ? var_8 : var_7)) : var_10))))));
        }
    }
    #pragma endscop
}
