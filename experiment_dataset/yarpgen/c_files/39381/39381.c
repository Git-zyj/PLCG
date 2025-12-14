/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (((var_4 ? (min(((max(var_16, var_9))), (max((-9223372036854775807 - 1), var_1)))) : var_5)))));
    var_19 = var_0;
    var_20 = (min(var_10, (((var_14 ? (min(1849595993, -1849595989)) : var_4)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_21 = (max((min(1670966847, var_7)), ((min((arr_0 [i_0]), (arr_0 [i_0]))))));
                    var_22 = ((min(((((arr_0 [i_0]) ? var_7 : -1849595994))), (min(var_12, var_14)))) & (((((-6441359079688912505 && 1) || -var_14)))));
                }
            }
        }
    }
    #pragma endscop
}
