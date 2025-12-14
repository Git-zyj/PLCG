/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_11 [i_0] = ((-(((!(arr_7 [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_10 += ((1 >> (-71 + 84)));
                                arr_17 [i_0] = (i_0 % 2 == 0) ? ((32745 >> (((arr_7 [i_0]) - 125530181293333926)))) : ((32745 >> (((((arr_7 [i_0]) - 125530181293333926)) - 2415107067405832266))));
                                var_11 = (((((max(var_0, (arr_12 [i_0 - 2] [i_1] [i_1] [7] [i_0]))) ? ((32767 ? var_0 : var_6)) : (((-32746 ? 32767 : var_1)))))));
                            }
                        }
                    }
                    arr_18 [i_2] [i_0] [i_0] [i_0] = ((((((3618804563 ? 1 : var_3)))) < var_3));
                }
            }
        }
    }
    var_12 = var_1;
    #pragma endscop
}
