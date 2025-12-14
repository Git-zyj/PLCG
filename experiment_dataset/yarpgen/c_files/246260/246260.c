/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (arr_2 [0]);

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_11 = ((((arr_0 [i_0]) >> (var_5 - 2070955211))) * (var_5 - var_1));
            var_12 = (((((9223372036854775794 == (arr_0 [i_1])))) * ((((arr_1 [i_0] [i_0]) == var_0)))));
        }
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_13 ^= ((65535 ^ (arr_1 [i_2] [i_2])));
        var_14 = (((((-651090821 + 2147483647) << (9100564254853942330 - 9100564254853942330))) / 1));
    }
    var_15 = (max(var_15, var_6));
    var_16 = (max(var_16, (((!(!var_8))))));
    #pragma endscop
}
