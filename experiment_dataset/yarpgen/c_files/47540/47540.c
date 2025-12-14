/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;
    var_17 = (var_13 | var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] [14] = var_4;
                    arr_8 [1] [16] [1] = (!(((min(0, var_11)))));
                }
                for (int i_3 = 1; i_3 < 23;i_3 += 1)
                {
                    var_18 = 10396;
                    var_19 = (max((var_11 || var_14), (!131)));
                    arr_11 [i_0] = ((var_0 / (arr_9 [i_3 + 1] [3] [i_3 + 1])));
                    arr_12 [i_0] = (((max(-3, (arr_3 [i_0] [i_1] [i_3 + 1]))) * var_3));
                }
                var_20 = (((~(arr_2 [i_0] [i_0] [i_0]))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 21;i_5 += 1)
                    {
                        {
                            arr_20 [19] [19] [i_5] = (max(((123 ? ((max((arr_14 [1] [i_4] [1] [i_0]), 35))) : (min(-78, var_10)))), ((((max(var_0, var_10))) ? ((min((arr_17 [i_5]), (arr_0 [i_0])))) : (min(var_4, var_0))))));
                            arr_21 [i_5] = var_12;
                            var_21 = var_9;
                            arr_22 [i_0] [i_0] [i_4] [i_5] = (max(-78, -9554));
                        }
                    }
                }

                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    var_22 += ((((arr_16 [i_0] [i_0] [i_0] [i_6]) ? var_12 : (arr_16 [i_6] [i_1] [i_1] [i_0]))));
                    arr_26 [i_0] [i_6] [i_6] [i_6] = (max((~var_4), 85));
                    var_23 = (((var_7 ? var_4 : (78 - 88))));
                }
                for (int i_7 = 3; i_7 < 24;i_7 += 1)
                {
                    var_24 = (max((max(((var_11 ? 32767 : (arr_3 [i_0] [i_0] [i_0]))), var_10)), ((min(58173, var_8)))));
                    arr_31 [i_0] [i_0] [i_7] = (min(((~(arr_2 [i_7] [i_0] [i_0]))), 1));
                    arr_32 [1] [i_1] [i_0] = 3311439507;
                }
                for (int i_8 = 3; i_8 < 24;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 24;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 22;i_10 += 1)
                        {
                            {
                                arr_41 [13] &= max(13, ((var_10 ? var_9 : (var_12 / var_12))));
                                var_25 = (max(var_25, var_9));
                            }
                        }
                    }
                    arr_42 [i_1] [4] = ((((max(var_7, ((63 ? 114 : -1959159087))))) ? ((~(arr_15 [12] [i_0] [i_0] [i_0]))) : ((((1056535912 ? 3311439507 : 58173)) * -2698))));
                    arr_43 [i_0] [i_0] [i_8 - 3] = var_12;
                }
            }
        }
    }
    var_26 = (min(var_13, var_1));
    #pragma endscop
}
