/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(105, 1076370305));

    for (int i_0 = 3; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_21 = (max((((max((arr_1 [i_0]), 1076370305)) % (((((arr_0 [i_0] [7]) > (arr_2 [i_0 + 2]))))))), (arr_1 [i_0])));
        var_22 = (max((arr_2 [i_0 - 1]), (((((max(var_1, (arr_1 [5])))) == (max((arr_0 [16] [i_0]), 1985822294)))))));
    }
    for (int i_1 = 3; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = (max((((((-32738 ? 1076370305 : (arr_5 [i_1])))) | (min((arr_4 [i_1] [i_1]), -32738)))), 1));
        arr_8 [0] |= (-2970216609 ? var_13 : ((((arr_2 [i_1 - 2]) && ((max((arr_0 [i_1] [i_1]), 1796386876)))))));
        var_23 ^= (arr_3 [i_1] [i_1]);
    }
    #pragma endscop
}
