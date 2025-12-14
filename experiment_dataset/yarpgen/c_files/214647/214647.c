/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_4 [i_0] = (arr_2 [i_0]);
        var_12 = ((502210055887253066 ? 9059245935064311788 : (arr_2 [i_0])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = (min((min((arr_3 [i_1]), (min((arr_2 [i_1]), -1945761137)))), (arr_3 [i_1])));
        var_13 = (((!((2437715531 || (arr_6 [i_1]))))));
    }
    var_14 = (max(((min(var_5, 13221))), (max(((max(54443, 1))), (max(1, 2791425623))))));
    #pragma endscop
}
