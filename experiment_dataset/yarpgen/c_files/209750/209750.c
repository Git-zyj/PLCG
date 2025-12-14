/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_7 ? var_5 : ((((34188 ? var_9 : 8181904126136933734)) % 34181))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 = ((((min((arr_1 [i_0]), (arr_1 [i_0])))) ? (((((arr_0 [i_0]) || (arr_0 [i_0]))))) : (arr_0 [i_0])));
        var_20 |= (min((((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) | (arr_1 [i_0]))), 3175));
        var_21 = (max(((max((max((arr_1 [i_0]), (arr_1 [i_0]))), (arr_1 [i_0])))), (((arr_0 [i_0]) ? ((34208 ? -16384 : 27770)) : (((((arr_1 [i_0]) == var_9))))))));
    }
    var_22 = (((16384 && var_4) > ((var_2 ? ((max(51, 34188))) : 5337))));
    #pragma endscop
}
