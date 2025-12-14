/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_13 = (min(var_13, 255));
                var_14 = (max((arr_3 [i_0]), (arr_3 [i_1])));
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_15 *= ((!(arr_12 [i_0] [i_1] [i_0] [18] [i_0] [i_1])));
                                var_16 = (max(var_16, ((((arr_12 [i_1] [i_3] [i_4] [i_4 + 3] [i_0] [i_4]) + ((-(arr_12 [i_0] [i_1] [i_4 + 4] [i_4 + 2] [i_0] [i_4]))))))));
                                arr_13 [i_3] = var_7;
                                var_17 = ((max(((min(var_5, 2863061066))), (1431906230 * 0))));
                                var_18 = (max(var_18, ((((((!(((var_10 + (arr_3 [i_3])))))))) | (((7 >> (((arr_5 [i_0] [i_2] [i_3 - 2]) - 7355414539227638068)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (max(var_19, 211));
    var_20 = ((var_11 ? ((2705142067 | ((var_7 ? var_1 : 9746825964541234657)))) : var_0));
    var_21 += ((((max((((var_10 << (18446744073709551615 - 18446744073709551606)))), (min(var_2, 2863061066))))) ? ((min(-2556875457, (((var_6 ? var_3 : var_11)))))) : (min((717164725 | var_7), (var_1 | var_0)))));
    var_22 = ((-(max(var_12, -41))));
    #pragma endscop
}
