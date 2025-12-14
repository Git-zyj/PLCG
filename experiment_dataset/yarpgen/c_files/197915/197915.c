/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((var_5 | var_9) ? var_7 : (var_2 | var_3)))) > var_6));
    var_13 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_14 = (((((!(arr_10 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4])))) & (arr_6 [i_0] [i_0] [i_0] [i_0])));
                                var_15 = ((-(arr_5 [i_1] [i_1] [i_1] [i_1])));
                            }
                        }
                    }
                    var_16 = ((((((max((arr_8 [i_0] [2] [i_2]), (arr_10 [i_0] [i_1] [i_1] [i_2] [i_2] [i_2])))) & ((((arr_1 [i_0]) || var_0))))) - ((var_11 & (arr_11 [i_0 + 1] [i_0 + 4] [i_2 + 1] [i_2 + 2])))));
                }
            }
        }
    }
    var_17 = ((var_9 % (((var_7 & var_7) ? (var_10 >> var_8) : (var_6 & var_11)))));
    #pragma endscop
}
