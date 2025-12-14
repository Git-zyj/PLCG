/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-114 ? var_6 : 89));
    var_15 = ((((((var_4 ? var_9 : var_8)) & (-2147483634 % 124))) < var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    arr_9 [i_1] [i_1] [i_1] [i_1] = (min((((var_5 ? var_9 : ((var_13 ? var_6 : var_9))))), (((var_10 | var_13) | var_10))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_17 [i_1] = (((((var_6 ? var_12 : var_10))) ? var_2 : (((var_12 / var_5) ^ (((var_0 ? var_3 : var_3)))))));
                                arr_18 [i_0] [i_0] [i_1] [i_0] [i_4] [6] [6] = var_12;
                                var_16 = ((((((var_12 - var_2) ? var_10 : ((var_7 ? var_8 : var_4))))) ? (123 > -1687391433) : var_8));
                                arr_19 [i_0] [i_1] [i_3] [i_3] [i_1] [i_0] [i_1] = var_9;
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        arr_25 [i_0] [i_1] [i_1] [i_1] [i_0] [i_0] = ((var_6 >= (var_1 != var_11)));
                        var_17 = (-1687391430 == 113);
                        var_18 &= (((((var_12 ? var_12 : var_6))) ? (var_9 - var_10) : ((var_6 ? var_6 : var_2))));
                    }
                    arr_26 [i_1] = var_8;
                    var_19 = (min(var_19, (var_9 / var_5)));
                    var_20 = (1951211705 ? -1782505244 : -114);
                }

                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    var_21 = (min(var_21, (((((((((var_6 ? var_5 : var_5))) ? (max(var_1, var_6)) : (var_4 * var_1)))) ? ((((max(-4099, 496608191))) ? (min(17711490876549857174, 2198406582759555056)) : (((var_2 ? var_9 : var_0))))) : ((var_7 ? (var_3 > var_11) : ((var_8 ? var_12 : var_0)))))))));
                    var_22 = ((((var_10 ? var_13 : (((var_12 ? var_8 : var_8))))) >= var_6));
                }
                var_23 = ((var_11 ? var_3 : (((var_3 - var_13) ? (((var_9 ? var_7 : var_11))) : (13900050539003758819 | -1)))));
            }
        }
    }
    var_24 -= (var_12 & var_7);
    var_25 = (max(var_25, ((max(((-114 ? ((-1204472229 ? var_5 : 946631240)) : -116)), ((((var_7 / var_0) < var_0))))))));
    #pragma endscop
}
