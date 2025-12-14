/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;
    var_19 = ((((max(var_15, ((11252 ? var_7 : var_15))))) <= (min(var_14, (max(12, var_15))))));
    var_20 *= ((var_2 ? (!var_2) : (max((var_8 <= 0), var_13))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_21 += (min((min((arr_1 [i_0] [i_1]), ((var_4 ? var_8 : 0)))), ((~(arr_1 [i_0] [i_1])))));
                arr_5 [i_1] = ((((-((((arr_2 [i_1]) < (arr_3 [i_1])))))) << (-721540570 - 3573426719)));
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((var_10 % ((max(var_12, (arr_11 [i_0] [i_0] [i_1] [i_2 - 3] [i_3] [i_1] [i_4]))))));
                                arr_14 [i_0] [i_1] [2] [11] = ((~(min((arr_2 [i_1 + 1]), 721540569))));
                                arr_15 [i_0] [i_2] [i_2] [i_2] |= var_2;
                                arr_16 [i_1] [i_1] = (((arr_0 [i_4]) ? 721540567 : (arr_12 [i_1] [12])));
                            }
                        }
                    }
                }
                var_22 = (max(var_22, (arr_2 [1])));
                var_23 = (min((((~(arr_9 [i_0] [i_1] [i_0] [i_1] [8] [4])))), ((((arr_0 [i_1 - 1]) >= -721540585)))));
            }
        }
    }
    #pragma endscop
}
