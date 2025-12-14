/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_18 = (min(var_18, var_6));
        var_19 = (arr_1 [i_0]);
        var_20 += 2147483647;
    }
    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {
        arr_5 [i_1] = (arr_0 [i_1 + 1]);
        arr_6 [i_1] = ((min((arr_4 [i_1 - 3]), var_12)) * ((((-2147483647 || (arr_2 [i_1]))))));
        var_21 ^= (min((arr_0 [i_1 - 2]), (((var_11 == (~var_11))))));
    }
    var_22 = (max(var_22, ((((-526096707723639515 + 9223372036854775807) << (162 - 162))))));
    #pragma endscop
}
