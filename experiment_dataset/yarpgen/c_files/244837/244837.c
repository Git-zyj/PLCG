/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (!89);
    var_21 |= var_19;
    var_22 = ((!((((min(-290742427, var_19)) & var_17)))));
    var_23 = ((-var_19 ? (max((max(var_12, 5833275260276654470)), (((var_15 << (25863 - 25861)))))) : ((((((2147483647 ? 0 : var_12))) ? var_4 : (!15086))))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_24 ^= ((var_16 ? var_4 : (arr_1 [i_0 - 3] [i_0])));
        var_25 |= (((arr_1 [i_0 + 1] [i_0 + 1]) <= (arr_1 [i_0 + 1] [i_0])));
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_26 = (max(var_26, ((max(44449, ((-(!-75))))))));
        var_27 ^= var_10;
    }
    #pragma endscop
}
