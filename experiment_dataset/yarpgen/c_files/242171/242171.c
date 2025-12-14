/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_2 >= var_2);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = ((!(((var_17 ? (arr_1 [i_0 + 4] [i_1 - 1]) : var_5)))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_20 = (((((1 < var_11) ? (arr_2 [i_2 + 3]) : var_16)) / (arr_3 [i_0 + 4] [i_0 + 4])));
                                var_21 = ((-(min(1, ((18446744073709551598 ? var_6 : var_12))))));
                                arr_12 [i_4] [i_3] [i_0] [7] [i_0] = (max(((((min(18446744073709551615, 1729382256910270464))) ? (arr_2 [i_0 + 1]) : (arr_10 [i_2] [i_2] [i_4]))), (arr_5 [i_1] [i_1 - 1] [i_1 - 1] [i_2 + 2])));
                                var_22 = (max(var_22, ((((((~(max(8589803520, 8589803529))))) <= (((((arr_0 [i_2]) ? 14133888208225446235 : 17051378546461542312)) * (arr_3 [i_4] [13]))))))));
                                var_23 = (((952092707 || (((0 ? 1395365527248009303 : 17051378546461542311))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = var_10;
    var_25 = (max(var_25, ((min((var_17 <= 358127868), var_7)))));
    var_26 = ((var_1 ? var_4 : (min(var_9, ((var_6 ? var_1 : var_6))))));
    #pragma endscop
}
