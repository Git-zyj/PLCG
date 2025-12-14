/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_17 = ((+((((arr_3 [i_2] [i_1] [i_0]) || ((((arr_0 [i_0]) ? (arr_0 [i_2]) : (arr_6 [i_2])))))))));
                    var_18 = ((-((min(((!(-9223372036854775807 - 1))), (!38838))))));

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_19 = max((((arr_0 [i_3]) / (min(38860, (arr_8 [i_0] [i_0] [i_0]))))), (var_7 && 38860));
                        arr_11 [i_0] [i_1] [i_2] [i_2] [i_3] = ((((((arr_2 [i_1 + 3]) * (((!(arr_7 [i_1] [i_2] [i_3]))))))) ? ((((min(-65536, (arr_0 [i_1])))) ? (arr_4 [i_0] [i_1 + 2] [i_0]) : (arr_10 [i_1 + 2] [i_1]))) : (((!(((arr_6 [i_1]) || (arr_4 [i_0] [i_2] [i_3]))))))));
                        arr_12 [i_0] [i_1] [i_2] [i_3] = ((!(arr_2 [i_1 + 3])));
                    }
                    for (int i_4 = 3; i_4 < 23;i_4 += 1)
                    {
                        var_20 = (((!-501335549020984312) | (((!(arr_6 [i_1 + 4]))))));
                        arr_15 [i_0] [i_1] [i_2] [i_4] = ((((((26675 || (arr_4 [i_2] [i_1] [i_0]))) ? (arr_5 [i_0] [i_1] [17] [i_4]) : (min((arr_13 [i_1 + 1] [i_1] [i_1]), var_13))))) ? ((6012182462178324627 ? ((min((arr_7 [i_1] [21] [21]), (arr_5 [i_4] [i_2] [i_1] [i_0])))) : var_6)) : var_15);
                        var_21 = (min(var_21, (((!(arr_1 [i_0] [i_1]))))));
                    }
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_22 = (((!var_11) == (arr_9 [i_1] [i_5])));
                        var_23 ^= (min((((!(arr_1 [i_1 + 4] [i_1 + 4])))), (((arr_3 [i_0] [i_2] [i_5]) ? 38848 : (((arr_0 [i_1]) ? -1982629086 : var_13))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
