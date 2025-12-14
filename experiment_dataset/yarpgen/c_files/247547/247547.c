/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_11 = (min(var_11, ((((~var_3) ? (((-32767 - 1) ? (arr_6 [i_0]) : 0)) : ((~((11 ? 203992279376431342 : 203992279376431342)))))))));
                var_12 = ((((((arr_1 [i_0] [i_1]) ? (((var_9 ? var_8 : (arr_5 [i_0] [i_0] [i_0])))) : ((203992279376431345 ? (arr_1 [i_0] [i_0]) : var_8))))) ? (((var_2 ? (arr_4 [i_0] [i_0]) : (!var_1)))) : ((+(((arr_1 [i_0] [i_1]) ? (arr_1 [i_0] [6]) : var_2))))));
                var_13 = (max(var_13, ((((var_5 ? var_10 : var_5))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_12 [i_2] [i_0] [i_2] [i_1] = (!((!(((var_7 ? var_7 : (arr_3 [i_0])))))));
                            arr_13 [10] [i_1] [i_1] [i_0] [i_3] = (((arr_5 [i_1] [i_2] [i_3]) ? 203992279376431347 : (((9223372034707292160 ? var_1 : 1)))));
                        }
                    }
                }
                arr_14 [i_0] [i_0] [i_0] = ((((((arr_8 [i_0]) ? var_1 : var_2))) ? (((-7682895474670343193 ? 231 : var_10))) : (((arr_0 [i_0]) ? 203992279376431347 : (arr_0 [i_0])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        {
                            var_14 = (+-231);
                            arr_25 [i_5] [i_5] [1] [i_4] [i_5] [i_5] = (((((var_10 ? var_10 : (arr_7 [i_4 - 1] [i_4 - 1] [i_4 + 2] [i_4 - 1])))) ? (~939235600) : -var_9));
                            var_15 = (~-203992279376431346);
                            arr_26 [i_4] [i_5] [i_6] [i_7] = ((~((var_1 ? var_3 : var_4))));
                        }
                    }
                }
                arr_27 [i_4 + 1] [i_4] = ((-((((((arr_15 [i_4] [i_4]) ? (arr_2 [i_4]) : var_1))) ? var_2 : 27))));
            }
        }
    }
    var_16 = (min(var_16, (((!(((var_2 ? (~37) : ((var_8 ? -203992279376431343 : 1467641094))))))))));
    var_17 = var_6;
    #pragma endscop
}
