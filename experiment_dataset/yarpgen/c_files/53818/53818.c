/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((((var_7 ? var_11 : var_4))) ? var_8 : var_8))) ? ((min(((max(1, 1))), ((var_3 ? var_5 : var_13))))) : (max((((var_10 ? var_0 : var_0))), ((var_2 ? var_9 : var_3))))));
    var_15 = (min((min((max(var_1, var_0)), var_13)), var_1));
    var_16 = (max(var_16, var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = min(var_7, ((var_13 ? (max(var_6, var_12)) : (((var_0 ? var_3 : var_6))))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_0] [i_1] [i_2] [i_1] = var_6;
                    var_17 = (max(var_17, ((max((min((min(var_8, var_1)), ((min(var_2, var_7))))), (((-127 - 1) ? 1 : 216172782113783808)))))));
                    arr_10 [i_0] [i_0] [i_2] = (max(var_11, var_8));
                    var_18 = (min(var_18, var_11));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                {
                    var_19 = var_11;
                    var_20 = (min((max((min(var_1, var_6)), var_6)), ((min(var_3, ((var_10 ? var_7 : var_4)))))));
                    var_21 = (min(var_10, var_9));
                    arr_14 [i_0] [i_0] [i_3] [i_3] &= (min(((((min(3121142079, var_12))) ? (((var_2 ? var_6 : var_8))) : (max(var_9, var_11)))), var_9));
                    arr_15 [i_3] &= (max(((min(((min(var_4, var_6))), var_3))), (min(((max(var_6, var_2))), (min(27233, 9223372036854775807))))));
                }
                arr_16 [i_1] [i_0] [i_0] = var_5;
            }
        }
    }
    #pragma endscop
}
