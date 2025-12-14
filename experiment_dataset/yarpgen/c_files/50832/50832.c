/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;
    var_16 = (max(var_16, (((~((var_2 ? var_8 : var_8)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_17 = 38;

                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        var_18 = (((((max(var_6, var_13))) ? 217 : (2 > var_9))));
                        var_19 = ((33546240 - (arr_4 [i_0 + 2] [i_2 + 1] [i_0 + 3])));
                        var_20 = ((-14193 % ((var_10 ? (((arr_6 [i_0] [i_1] [i_2] [i_3]) ? (arr_4 [i_2] [i_0] [i_0]) : 546594135)) : var_11))));
                        var_21 = 18446744073676005399;
                    }
                    var_22 = (((((((arr_5 [i_2 + 2]) <= (arr_5 [i_2 + 2]))))) - (max(-4538390209881417984, var_11))));
                }
            }
        }
    }

    for (int i_4 = 4; i_4 < 16;i_4 += 1)
    {
        var_23 |= ((1 ? (((arr_10 [i_4] [i_4 + 1]) ? (arr_10 [9] [i_4 + 1]) : (arr_10 [i_4 - 2] [i_4 + 1]))) : 32441));
        var_24 = (((9238776445561923890 ? 38 : (arr_11 [i_4]))));
    }
    #pragma endscop
}
