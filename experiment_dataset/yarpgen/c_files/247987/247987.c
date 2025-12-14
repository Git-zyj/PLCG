/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_5, (max(var_11, var_12))));
    var_14 = (((max((!var_10), (min(3690361123594157650, 0)))) >> (((max((((var_11 ? var_1 : var_1))), ((var_5 ? var_3 : var_12)))) - 3999513568641076861))));
    var_15 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_1] = (min((max((var_8 ^ var_4), (arr_3 [i_1] [i_2 + 2] [i_2 + 1]))), ((((5 && (arr_4 [i_1])))))));
                    var_16 |= ((max((arr_0 [i_2 + 3]), (arr_0 [i_2 + 3]))));
                    arr_8 [i_1] [i_1] [i_2 + 1] [i_2] = var_11;
                }
            }
        }
    }
    var_17 = ((min(((var_10 ? var_11 : var_9)), var_9)));
    #pragma endscop
}
