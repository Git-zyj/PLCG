/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_10 ^= var_2;
                                var_11 ^= (max((((~((20 ? (arr_0 [i_0]) : -1))))), (max((arr_8 [i_4] [i_4] [i_4] [i_4]), ((var_1 | (arr_3 [i_4])))))));
                                var_12 = (arr_2 [19]);
                            }
                        }
                    }
                }
                var_13 -= (3861280066 & var_2);

                /* vectorizable */
                for (int i_5 = 2; i_5 < 22;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                var_14 -= 3;
                                var_15 -= (((!var_9) != 17));
                                var_16 = ((((var_6 ? var_1 : var_8)) & ((((arr_13 [i_5]) % var_2)))));
                            }
                        }
                    }
                    var_17 = -var_2;
                }
                for (int i_8 = 2; i_8 < 22;i_8 += 1) /* same iter space */
                {
                    var_18 = (max(var_18, (((~((47913 ? 14 : -15)))))));
                    var_19 = (arr_7 [22] [1] [1]);
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    arr_24 [i_0] [i_1] [i_1] = ((-6517733761431522732 ? (~var_0) : (((arr_16 [i_0] [i_1] [i_1] [i_1] [i_9]) ? var_2 : 1073741808))));
                    var_20 ^= (arr_10 [i_0] [i_0] [i_0] [1] [16] [i_1] [i_9]);
                }
                var_21 = ((var_6 * -1092409667) * (((17118890677090772686 * var_3) * (arr_9 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]))));
                var_22 -= -var_7;
            }
        }
    }
    var_23 = (max(var_23, var_3));

    for (int i_10 = 0; i_10 < 18;i_10 += 1)
    {
        var_24 = (((((-(min(-4857836940546635556, 16591187758918882695))))) ? (max((((arr_4 [i_10] [1]) ? 18446744073709551608 : (arr_16 [i_10] [24] [i_10] [i_10] [i_10]))), ((((arr_22 [1]) - var_5))))) : (((max(-29731, 1))))));
        var_25 ^= (arr_8 [i_10] [i_10] [i_10] [i_10]);
        arr_27 [i_10] [i_10] = ((!((min(((-97 ? var_4 : var_2)), 2767342502)))));
    }
    var_26 = (min(var_26, var_4));
    #pragma endscop
}
