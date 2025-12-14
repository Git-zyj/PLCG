/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((-var_15 | (var_14 != var_2))) + (var_3 < 26313)));
    var_20 = ((((max(2147483647, var_10) + var_12))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_0] = (((((-108 ? (arr_3 [i_0] [i_1]) : var_10))) ? (arr_1 [i_1]) : ((min((arr_3 [i_0] [i_1]), 0)))));
                var_21 = (((arr_0 [i_1] [i_0]) ? ((((var_9 - (arr_2 [17] [1] [10]))) / -437478545)) : (((arr_1 [i_1]) ? 16777088 : 10870800541774684275))));
                var_22 = (min(var_22, ((((((((((arr_1 [i_1]) | 0))) ? (219 ^ 37) : 0))) || 69)))));
                var_23 |= (arr_2 [i_1] [i_1] [i_0]);
            }
        }
    }
    var_24 |= (((((((var_15 ? var_6 : 0))) ? ((-7257935483780634456 ? var_18 : 254)) : var_6)) ^ var_14));
    #pragma endscop
}
