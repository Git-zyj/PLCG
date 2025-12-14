/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0 - 2] = (((arr_0 [i_0 + 1]) ? ((((!var_1) >= 8048))) : var_6));

                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    var_12 = ((var_11 <= (var_5 || var_4)));
                    var_13 = var_10;
                    arr_10 [i_2] [i_1] [i_2] [i_2] = -1571;
                }
            }
        }
    }
    var_14 = ((min(var_7, 8)) & (((((var_9 ? -4 : -25)) | 55))));
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                arr_23 [i_3] = -14;
                                var_15 = ((((-3289706916251682384 ? (var_9 - 671334830) : var_5)) - 8048));
                                arr_24 [i_3 + 1] [i_4] [i_5 + 1] [14] [i_7] |= ((8056 == (((!var_2) ? (arr_15 [i_4 - 2] [i_7]) : (arr_16 [i_6 + 2] [4])))));
                            }
                        }
                    }
                }
                var_16 = (arr_11 [i_3] [i_4]);
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        {
                            arr_29 [i_3] [i_8] [i_3] [i_8] [i_9] &= (var_6 >= -var_8);
                            arr_30 [i_3] [i_3] [i_8] [i_3] [i_8] = 12;
                            arr_31 [i_3] [i_4] [i_4] [i_3] = (-8049 <= var_0);
                            var_17 = ((23817 << (((!-8038) ? ((2109172076 ? -8529 : 4520532236321236018)) : (!-8558)))));
                            var_18 = ((~(((arr_22 [i_3] [i_3]) << (var_11 - 269128943782060649)))));
                        }
                    }
                }
                var_19 = ((3 <= (32767 + 2312)));
            }
        }
    }
    #pragma endscop
}
