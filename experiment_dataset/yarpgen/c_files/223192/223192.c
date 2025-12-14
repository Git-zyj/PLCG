/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_10 &= (min((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0]))), ((-(arr_0 [i_0] [i_0])))));
        var_11 &= (((-1 != 18446744073709551615) ? 1024 : (((97 > (arr_0 [i_0] [i_0]))))));
        var_12 = (8191 / 735523055);
    }
    var_13 = ((((((121 ? 735523035 : 735523050)))) < (min(-735523038, 735523052))));
    var_14 &= (((((((min(-121, 2124731933))) ? var_0 : var_4))) ? var_1 : var_5));
    #pragma endscop
}
