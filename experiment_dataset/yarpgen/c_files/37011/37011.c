/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 31706;

    for (int i_0 = 2; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (max((((arr_1 [i_0 - 2]) ? -796410866 : (arr_1 [i_0 - 2]))), (((arr_1 [i_0 + 1]) ? (arr_1 [i_0 - 2]) : (arr_1 [i_0 - 2])))));
        var_15 = (((arr_2 [i_0] [i_0 - 2]) ? (arr_2 [i_0] [i_0 - 1]) : (arr_2 [i_0] [i_0 - 1])));
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_16 = (((((arr_6 [i_1 + 1]) != 5520983860170927976)) && 255));
        arr_7 [i_1] = (((arr_4 [i_1]) >> (((((arr_2 [i_1] [i_1]) + 3589206407)) - 3589267686))));
    }
    for (int i_2 = 2; i_2 < 18;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2 - 1] = (min((((((-(arr_8 [i_2 + 1])))) ? -1403503810 : (var_13 != 37420))), 22));
        arr_11 [i_2] = (((((1 ? var_5 : (arr_1 [i_2 - 2])))) - ((-606121206 ? (arr_9 [i_2 - 2]) : (((arr_1 [i_2 + 1]) - 4117605007))))));
    }
    #pragma endscop
}
