/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 703944618;
    var_11 = (!703944598);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 ^= 0;
        arr_2 [i_0] = (((arr_0 [i_0]) == (arr_0 [i_0])));
        var_13 = (-18446744073709551588 != 592933825);
    }
    #pragma endscop
}
