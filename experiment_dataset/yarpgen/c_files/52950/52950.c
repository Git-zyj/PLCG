/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 = (max((((min(-9223372036854775791, 23170)))), ((~(min(-9223372036854775795, 9223372036854775791))))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_12 = (arr_1 [i_0]);
        arr_3 [i_0] = (arr_1 [i_0 + 1]);
        arr_4 [i_0 + 1] [i_0 + 1] = (11155047085793598438 >> (-8 + 58));
    }
    var_13 = (!var_2);
    #pragma endscop
}
