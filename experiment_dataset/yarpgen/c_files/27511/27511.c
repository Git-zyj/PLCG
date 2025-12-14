/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (((((20146 ? var_0 : var_0))) ? (((var_3 & var_6) ^ var_8)) : (var_0 ^ var_12)));
    var_16 = ((~(max(0, var_6))));
    var_17 = (3 & var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_18 = (max(var_18, (((1 ? ((1 >> (-2143425727 + 2143425729))) : (((!(arr_2 [i_0] [i_1])))))))));
                var_19 = (min(var_19, (((-(min(((((arr_0 [i_1]) ? 0 : 2143425726))), (arr_1 [i_1]))))))));
            }
        }
    }
    var_20 = (-((var_10 ? 6064 : var_0)));
    #pragma endscop
}
