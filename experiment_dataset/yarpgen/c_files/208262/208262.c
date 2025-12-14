/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_20 |= (max((max(var_4, 1)), (((var_19 ? (arr_3 [i_0 - 2]) : 1)))));
                                arr_10 [i_1] [i_0] [i_0] [i_0] [i_1] &= (max(((var_11 | (arr_1 [i_1 - 1] [i_1]))), ((max(56563, 1)))));
                                var_21 = (max(var_21, ((((((max(1, var_14)))) >= ((((((arr_0 [i_0] [i_0]) ? var_2 : (arr_0 [1] [1])))) ? var_17 : -8875901117692983726)))))));
                                var_22 = ((((max(3073785392, (arr_7 [i_3])))) ? ((max(108, 28505))) : (((var_15 >= (arr_1 [i_0 - 1] [i_3 + 1]))))));
                            }
                        }
                    }
                    arr_11 [i_0] [i_0] [i_0] = ((((min(1323852091, (arr_2 [i_0 - 3])))) || ((var_0 > (arr_2 [i_0 + 1])))));

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        arr_15 [i_0] [3] [1] [i_5] = (max((min(var_18, -21914)), ((((arr_1 [i_1] [i_0 - 3]) <= var_5)))));
                        var_23 = (((((-8875901117692983734 ? 0 : var_17))) && ((max(((1 ? var_1 : 1031624646)), ((max((arr_6 [i_1] [2] [i_2]), (arr_3 [i_5])))))))));
                    }
                    var_24 = (min(var_24, ((max((min((arr_7 [i_1]), var_11)), ((21894 ? var_4 : var_3)))))));
                }
            }
        }
    }
    var_25 = var_8;
    var_26 = (max((max(var_15, ((1 ? 1 : var_13)))), var_19));
    #pragma endscop
}
