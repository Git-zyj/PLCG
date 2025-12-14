/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~(~var_1)));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_14 = (max(-6752973274015007531, 2805832632761895115));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_15 = (max(var_15, ((((arr_2 [i_3] [i_2 - 3]) << (((!(arr_6 [i_3] [i_2] [i_1] [i_0])))))))));
                        var_16 = ((((max((arr_3 [i_0] [i_2 - 1] [i_2]), -2805832632761895116))) && 1));
                    }
                }
            }
        }
        var_17 = (max(var_17, 49817));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 11;i_4 += 1)
    {
        var_18 += var_5;
        var_19 = -6752973274015007537;
        arr_13 [i_4] = (arr_0 [i_4 + 2] [i_4 + 2]);
    }
    var_20 += var_11;
    #pragma endscop
}
