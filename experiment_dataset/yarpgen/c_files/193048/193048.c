/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_7));
    var_16 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_17 = (min(var_17, (arr_1 [i_0 + 1] [i_0 + 1])));
        var_18 = (((var_8 == (arr_1 [i_0] [i_0]))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 7;i_3 += 1)
            {
                {
                    var_19 |= ((((arr_4 [i_3 - 2]) ? (((max((arr_2 [i_2] [10]), (arr_2 [i_1] [8]))))) : (((arr_8 [i_1]) ? var_10 : (arr_0 [i_1]))))) >= -157);
                    arr_9 [i_1] [i_1] = var_14;
                    var_20 = ((((max((arr_7 [i_3 - 3] [i_3 + 3] [i_3 - 3] [i_3 + 2]), (arr_0 [i_3 - 2]))))) <= (arr_5 [i_3] [i_1]));
                    var_21 = ((~(max((((arr_7 [i_1] [i_1] [i_3] [i_3]) ? (arr_5 [i_1] [i_1]) : (arr_3 [1] [1]))), ((min((arr_2 [i_1] [i_1]), (arr_5 [i_2] [i_1]))))))));
                }
            }
        }
    }
    var_22 = ((var_5 ^ (min((~var_6), (min(var_1, var_11))))));
    #pragma endscop
}
