/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_1 - 2] = (arr_1 [i_0] [i_1]);
                var_13 = ((((max(var_2, (~-79)))) ? (((((min(var_8, (arr_3 [i_0] [i_1] [14])))) <= (arr_3 [i_0] [i_0] [i_0])))) : (((((1 >> (((arr_1 [i_0] [i_0]) + 97)))) <= 16)))));
                var_14 = ((~(193 | 8875021476171592141)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [i_2] [i_0] [i_0] = (((((~(max(var_2, -2807915140897324300))))) ? ((max((var_6 > var_4), -884243390))) : (arr_8 [i_0] [i_1] [14] [i_3])));

                            for (int i_4 = 4; i_4 < 13;i_4 += 1)
                            {
                                var_15 += ((-((((!(arr_9 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4]))) ? 10442429 : ((var_0 ? -10442430 : (arr_10 [i_4] [i_2])))))));
                                var_16 += (((((((-(arr_0 [i_4]))) - var_11))) ? ((((!var_10) - (arr_1 [i_0] [i_1 - 2])))) : (var_9 - -var_8)));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 16;i_5 += 1)
                            {
                                var_17 = ((~(arr_9 [i_5] [i_2] [i_2] [i_1] [i_2] [i_0])));
                                var_18 = -10442430;
                                var_19 = (min(var_19, -21));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = ((var_10 % (min(((var_10 ? 1074086518 : var_4)), var_2))));
    var_21 = (((((var_1 ? (var_11 != var_4) : var_10))) ? -var_2 : (((~((var_6 ? var_4 : var_5)))))));
    #pragma endscop
}
