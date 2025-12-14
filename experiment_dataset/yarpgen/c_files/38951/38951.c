/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    arr_8 [i_1] [i_2] = var_3;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [i_0 - 1] [i_1] [i_2] [i_3] [i_2] = -125;
                                var_11 = (var_5 / 104);
                                var_12 ^= (((((((((min(var_9, -105))) + 2147483647)) >> (((max(var_4, 16323593525774899810)) - 18446744073709551476))))) < (-var_1 * var_7)));
                                var_13 = (arr_9 [i_0 + 1] [i_0] [i_0] [13]);
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {

                        for (int i_6 = 2; i_6 < 15;i_6 += 1)
                        {
                            var_14 = (max(var_14, (((-((var_6 ? var_1 : 5)))))));
                            var_15 = ((((77 & 35184372086784) ? 15 : var_4)) + (arr_17 [i_1]));
                        }
                        for (int i_7 = 2; i_7 < 16;i_7 += 1)
                        {
                            var_16 ^= ((((((((max(3, (arr_22 [i_0] [i_1] [i_2] [i_2] [i_5] [i_5] [i_7 - 2]))))) + (arr_9 [i_7] [i_5] [i_2 + 4] [i_0])))) ? ((max(((max(104, 104))), 25))) : (((!(((-3907584974762409759 ? var_6 : var_7))))))));
                            var_17 ^= ((~(((!((max(var_1, 62276))))))));
                            arr_25 [i_7] [i_5] [0] [i_2] [i_0] [i_0] = (((arr_7 [i_0] [i_1] [i_1] [i_1]) || var_5));
                        }
                        arr_26 [i_0] = var_9;
                    }
                    var_18 = (max(var_18, 1));
                }
                var_19 = ((((min(-21810, 3907584974762409760))) ? ((-2001142754 ? 1980769113954863527 : (arr_5 [i_0 + 3] [1] [i_1]))) : -3907584974762409760));
                var_20 = 2;
            }
        }
    }
    var_21 = var_9;
    var_22 = ((((48811 << (-2118564112 + 2118564121))) >= ((((max(5659040719124080908, var_1)) >= (~392880233627139707))))));
    var_23 = ((((max((max(4, 20299)), -48))) ? (4 ^ -3) : ((16498341104380689466 ? (var_1 <= var_1) : 57))));
    #pragma endscop
}
