/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_3 [i_0 - 1] = (253 || var_4);
        var_18 = 0;
        var_19 = (4263538265 < -27659);
        var_20 = (min(var_20, ((max(((3571315540 ? (1345948481 - 31429031) : (134217600 - 31429030))), var_13)))));
        var_21 ^= ((90 ? (max(31429050, var_8)) : (arr_1 [i_0 - 1])));
    }
    var_22 = ((((min((((63 ? var_13 : 1310404800))), var_7))) ? (-1 % -24299) : var_13));
    #pragma endscop
}
