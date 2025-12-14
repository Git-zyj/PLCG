/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    var_14 = (((min((!var_3), (max(var_3, 3416974626)))) == ((((var_10 >= ((var_1 ? var_10 : 0))))))));
    var_15 = ((((((((521987135 ? var_7 : (-127 - 1)))) ? (((max(-27514, var_1)))) : (17361378981728674411 - var_6)))) ? var_1 : (min((var_1 * var_4), ((var_2 ? var_12 : var_11))))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_16 &= 18345;
        var_17 = arr_2 [i_0];
        var_18 = (min(var_18, ((((((var_4 ? (arr_1 [i_0 + 4]) : (arr_2 [i_0 + 3])))) ? (var_12 <= var_0) : (((((~var_8) + 2147483647)) >> (-var_6 - 5832345952702014712))))))));
        arr_3 [i_0] [i_0 + 2] = var_1;
    }
    #pragma endscop
}
