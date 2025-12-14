/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= ((-((var_11 ? ((min(var_1, var_15))) : (!-839)))));
    var_18 &= ((((min(1, (var_4 - 1993717226)))) ? var_1 : (var_11 - var_3)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_19 *= (arr_6 [i_2] [i_1]);
                        var_20 = (min(859, (arr_2 [i_3])));
                        var_21 = ((((((arr_8 [i_2] [i_0] [i_0] [i_1 + 1]) ? var_4 : (arr_8 [i_1 + 2] [i_0] [i_0] [i_1 + 2])))) ? -843 : (arr_8 [i_2] [i_0] [i_0] [i_1 - 2])));
                    }
                    arr_10 [i_2] [i_1 - 2] [i_2] [i_2] &= ((((!(var_1 >> var_10)))));

                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {
                        arr_13 [i_2] [i_1] [7] [i_0] [i_2] = (min(var_10, (arr_12 [i_0] [i_1] [i_0] [i_2] [i_4])));
                        var_22 *= ((-(min(0, 11765025343493616109))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
