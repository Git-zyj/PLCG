/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (((var_8 ? (var_9 / 1032850336) : (((var_9 ? 1 : var_6))))));
    var_17 = ((-var_9 ? (min(var_6, var_2)) : var_13));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 |= ((-(((((arr_0 [7]) ? var_15 : 1032850351)) / (arr_5 [i_0] [i_1])))));
                    var_19 *= (max((((arr_1 [i_1 + 1]) / (arr_1 [i_1 + 1]))), (arr_1 [i_1 - 1])));
                    arr_7 [i_1] [i_1] = (min(((((1032850341 ? 3262116977 : -7242301444191236414)) / (((~(arr_4 [3] [i_2] [i_0] [i_0])))))), (arr_0 [i_0])));
                    var_20 = (min(var_20, ((min((((((arr_4 [3] [i_0] [i_1] [3]) & (arr_2 [8] [8]))))), (((((arr_6 [i_0] [i_0] [i_0]) ? var_3 : (arr_2 [i_2] [i_0]))) + (1 < var_9))))))));
                }
            }
        }
    }
    #pragma endscop
}
