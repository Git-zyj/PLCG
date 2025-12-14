/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_2] = 38;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, (((-(((17870283321406128128 ^ var_13) & var_12)))))));
                                var_16 = (6139571742632752341 | 1);
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {

                        for (int i_6 = 3; i_6 < 10;i_6 += 1)
                        {
                            var_17 = ((~(min(1, (max(3651, -6139571742632752342))))));
                            var_18 = var_7;
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_19 -= ((max(0, (((-127 - 1) ? -6139571742632752333 : 117)))) <= ((((((var_4 ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : var_1))) | (arr_12 [7] [i_5] [1] [i_0] [i_0])))));
                            arr_20 [4] [i_1] [4] [i_0] [1] = (((arr_19 [i_7] [i_5] [i_2] [7] [i_0]) ? (((((var_2 ? var_13 : (arr_9 [i_0] [i_1] [6] [8])))) ? 0 : var_6)) : (((!(((var_6 ? 119 : (arr_17 [i_0] [i_1] [i_2] [6] [6] [i_1] [i_0])))))))));
                            arr_21 [i_0] [i_2] [i_2] [i_2] [i_2] [9] [i_2] = var_12;
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_20 *= var_10;
                            var_21 = (((var_5 ? ((-1730724485093983674 ? var_12 : (arr_0 [i_0])) : (arr_8 [i_0] [i_5] [i_2] [i_1] [i_0] [i_0])))));
                        }
                        arr_24 [i_0] [i_2] [i_1] [i_0] = (arr_3 [7] [i_1]);
                    }
                    arr_25 [6] [i_0] = (max(var_2, 6139571742632752341));
                    var_22 = (max(var_22, (((((var_13 & (((var_1 ? var_14 : 10118))))) - (((((arr_13 [i_0] [i_0] [i_1] [i_0]) && (((var_4 ? 58 : var_8))))))))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 19;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                {
                    var_23 = ((((-115 ? 112 : var_5)) == 4194304));
                    var_24 = var_6;
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 16;i_12 += 1)
                    {
                        for (int i_13 = 3; i_13 < 17;i_13 += 1)
                        {
                            {
                                var_25 = (3956 >= 65524);
                                var_26 = (max(var_26, ((max(((((arr_32 [i_12 - 1] [i_12 + 2] [i_12 + 3] [i_12 + 2] [i_13 - 2]) > (arr_36 [i_12 - 1] [i_12 + 2] [10] [i_12 + 2] [i_13 - 2] [i_13 + 1])))), var_4)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 |= var_3;
    var_28 = var_14;
    #pragma endscop
}
