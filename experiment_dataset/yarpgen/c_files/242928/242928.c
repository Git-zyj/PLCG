/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_11 = (max(var_11, ((3535684602 >> (976883607 - 976883584)))));
                arr_5 [i_0] [i_0] [i_1] = var_8;
            }
        }
    }
    var_12 = ((3176654527 << (-22412 + 22436)));
    var_13 = ((((((var_4 ? var_6 : 3535684602)) > -989404262)) ? ((~((var_0 ? 25636 : var_4)))) : ((-989404292 ? (min(var_3, var_2)) : ((801922388 ? 1 : 2))))));
    #pragma endscop
}
