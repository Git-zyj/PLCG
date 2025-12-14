/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!1);

    /* vectorizable */
    for (int i_0 = 3; i_0 < 8;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (~-11086);
        arr_3 [i_0] [i_0] = (!var_7);
    }
    for (int i_1 = 3; i_1 < 8;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 6;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_1] [i_1] [i_2] = ((!65535) ? ((-1 ? var_9 : (((44 ? var_8 : 1))))) : var_5);
                    arr_13 [i_1] = (((+((var_3 ? (-32767 - 1) : 22207)))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            {
                                arr_20 [i_1] [i_2] [i_2] [i_4] [i_3] [i_2] [i_4] &= ((!(!-554)));
                                arr_21 [i_1] [i_1] [i_1 - 3] [i_1] [i_1] = (((max(((var_2 ? var_1 : var_6)), (!-13241)))) ? (max(4, -1735433155816323416)) : (((-0 ? var_9 : ((var_3 ? var_1 : var_8))))));
                                arr_22 [i_5] [9] [i_3] [i_2] = ((~(min(-2569082026572041197, -2435594861175665129))));
                                arr_23 [i_1] [i_2] [6] [i_2] [i_2] = ((~-6071530561535437147) ? (min(var_2, 2435594861175665128)) : ((-5373622660121752658 ? var_9 : 1)));
                                arr_24 [i_5] = (-((((min(48, 1))) ? ((min(-40, -30758))) : (!78))));
                            }
                        }
                    }
                    arr_25 [i_3] [i_2] [i_1] = ((((min(1, 12474))) ? (((((21689 ? -2224 : 63))) ? var_9 : -59)) : ((14336 ? -2569082026572041197 : 0))));
                }
            }
        }
        var_11 = ((-(min(1, var_4))));
    }
    #pragma endscop
}
