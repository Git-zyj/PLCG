/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;
    var_18 -= (((max(43831335, var_9)) - (min((((var_9 ? 4179494727 : 115472547))), (min(var_11, var_2))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [0] [i_2] [i_3 + 2] = ((var_13 + (!var_9)));
                            var_19 = (((((!(~4179494727)))) * (((!(((var_8 / (arr_3 [i_2] [i_2] [6])))))))));
                            var_20 = ((((~(((arr_4 [i_1] [3]) + var_4))))) ? (((arr_7 [i_1] [i_0] [i_2] [i_3] [i_0]) ? (arr_7 [10] [i_1] [i_2] [i_2] [i_3 - 1]) : var_13)) : ((var_2 >> (((!(arr_7 [i_0] [i_1] [i_1] [i_1] [i_3])))))));
                        }
                    }
                }
                var_21 = (min(((((var_15 ? 779837956 : 1)) - 245)), ((-((~(arr_2 [i_1])))))));
                var_22 ^= var_7;
            }
        }
    }
    var_23 = min((((var_16 >= (min(var_5, var_0))))), ((var_1 ? var_3 : (~var_10))));
    #pragma endscop
}
