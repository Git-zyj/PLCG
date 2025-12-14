/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_7;
    var_21 = (min((((var_5 ? var_8 : var_2))), var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            var_22 = ((min((min((arr_9 [i_0] [i_1 + 2]), var_18)), ((((-32767 - 1) ? var_13 : var_0))))));
                            arr_11 [i_3 + 1] [i_3 + 1] [i_2] [i_1 + 2] [i_0] = ((((((arr_7 [i_0]) ? (arr_7 [i_3]) : (arr_7 [i_0])))) - ((((max(32765, 0))) ? var_9 : (min(18446744073709551615, (arr_7 [i_3])))))));
                            arr_12 [i_0] [i_2] [i_0] [i_0] |= (min((((!(arr_9 [10] [i_1 - 2])))), (((arr_0 [i_1 + 2] [i_1 - 2]) - (arr_0 [i_1 + 2] [4])))));
                            arr_13 [i_1 - 2] [i_2] [i_1] [i_1 - 2] [i_1] = ((((((((arr_10 [i_0] [i_0] [i_2] [i_2]) ? var_19 : var_3)) != (arr_4 [i_1 - 1] [i_1] [i_3 + 1])))) != (min(((var_6 >> (((arr_0 [i_0] [10]) + 3997469917051994726)))), ((((arr_4 [i_0] [i_0] [i_2]) >= var_15)))))));
                        }
                    }
                }
                var_23 = (1 == 24685);
            }
        }
    }
    var_24 += ((var_16 & (((var_14 >> (var_14 - 172))))));
    #pragma endscop
}
