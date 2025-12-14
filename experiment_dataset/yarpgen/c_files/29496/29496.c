/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((~-var_4), ((((~1) ? 1 : var_10)))));

    for (int i_0 = 2; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0 - 1] = ((((((arr_1 [i_0 - 2] [i_0]) ? 25 : (arr_2 [i_0 - 2])))) ? ((var_1 ? (arr_1 [i_0 - 1] [i_0]) : (arr_1 [i_0 - 2] [i_0 - 2]))) : ((~(arr_1 [i_0 + 1] [i_0])))));
        var_17 = (max((((~(~var_8)))), (min(var_14, (arr_1 [13] [i_0 - 2])))));
        var_18 -= ((((((arr_0 [i_0 + 1]) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 - 2])))) ? ((var_0 ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 - 2]))) : ((var_13 ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 2])))));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_19 = ((((max(23655, 3816482613))) ? 107 : var_14));
        var_20 = (!(~1));
        arr_7 [10] = (min((arr_5 [i_1 + 1]), -22338));
    }
    var_21 = (min(var_0, var_2));
    var_22 = 2255448972;
    #pragma endscop
}
