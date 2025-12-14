/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((var_11 ? var_7 : ((var_3 ? var_3 : var_1))))) ? ((((((var_8 ? var_8 : var_10))) ? ((var_4 ? var_2 : var_3)) : var_7))) : var_6));
    var_14 -= var_8;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_15 = (((((var_11 ? var_5 : var_5))) ? (((var_7 ? var_12 : var_7))) : ((var_7 ? var_8 : var_12))));

        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            arr_5 [i_0] = var_6;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_16 = var_8;
                            arr_14 [i_0] [i_1 + 3] [i_0] [i_0] [11] = var_5;
                            var_17 ^= (((((var_7 ? var_7 : var_11))) ? ((var_10 ? var_8 : var_3)) : (((var_9 ? var_3 : var_6)))));
                            arr_15 [i_0] [i_0] = var_3;
                        }

                        for (int i_5 = 1; i_5 < 15;i_5 += 1)
                        {
                            arr_18 [i_0] [i_0] [i_0] [i_3] [i_3] [i_0] = var_10;
                            var_18 = (((((var_0 ? var_3 : var_1))) ? ((var_3 ? var_0 : var_10)) : ((var_10 ? var_11 : var_11))));
                        }
                        for (int i_6 = 1; i_6 < 14;i_6 += 1)
                        {
                            arr_21 [i_3] [i_3] [i_0] [i_3] [i_6] = ((var_8 ? ((var_10 ? var_10 : var_6)) : (((var_6 ? var_4 : var_2)))));
                            var_19 = ((var_0 ? ((var_1 ? var_1 : var_9)) : (((var_2 ? var_5 : var_2)))));
                            var_20 = var_4;
                        }
                        arr_22 [i_0] [i_1] [i_0] [i_2] [i_0] [i_2] = var_0;
                    }
                }
            }
            arr_23 [i_0] [i_1] [i_0] = var_9;
            var_21 = var_3;
        }
        for (int i_7 = 3; i_7 < 16;i_7 += 1)
        {
            arr_27 [i_0] = (((((var_5 ? var_12 : var_8))) ? var_10 : ((var_1 ? var_0 : var_2))));
            arr_28 [i_0] [i_0] = (((((var_3 ? var_2 : var_10))) ? ((var_2 ? var_8 : var_10)) : (((var_3 ? var_11 : var_5)))));
        }
        for (int i_8 = 1; i_8 < 16;i_8 += 1)
        {
            arr_32 [14] |= (((((var_4 ? var_0 : var_1))) ? var_7 : ((var_3 ? var_3 : var_4))));
            arr_33 [i_0] [i_0] = ((((var_10 ? var_9 : var_10))) ? var_10 : ((var_11 ? var_4 : var_0)));
        }
    }
    var_22 ^= var_4;
    #pragma endscop
}
