/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 = ((((max(1, 2147483628))) ? var_10 : 1616968899));
        var_16 -= -var_12;
        var_17 = (min(var_17, ((max(146, 15)))));
    }
    for (int i_1 = 4; i_1 < 12;i_1 += 1)
    {
        var_18 = (max(8419254366612463666, -8136491830161239047));
        var_19 += (((min((min((arr_3 [2]), 1616968898)), ((min(2147483628, (arr_2 [i_1] [i_1])))))) == (((arr_3 [i_1 + 1]) ^ (((arr_3 [i_1]) >> (5426625403120893485 - 5426625403120893459)))))));
    }
    #pragma endscop
}
