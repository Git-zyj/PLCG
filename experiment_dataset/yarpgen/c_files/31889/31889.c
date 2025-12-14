/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= (var_5 >= var_4);

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] = ((((89 ? 0 : 8094))) ? (arr_0 [i_0 - 1]) : (((arr_0 [i_0 + 1]) >> 1)));
        var_21 *= ((-(max((((255 * (arr_0 [i_0])))), (arr_1 [i_0 + 1] [i_0 + 1])))));
        var_22 += 8077;
    }
    var_23 = var_7;
    var_24 = (min(var_24, ((max(100, 0)))));
    #pragma endscop
}
