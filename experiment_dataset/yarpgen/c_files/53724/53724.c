/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((min(39270, 26265)))) & (((min(var_15, var_15)) / ((min(-483922381331501476, var_12)))))));
    var_21 = ((min(7720, var_17)));
    var_22 = (5965101433370798081 + var_10);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (min((max(9324, -1621776636)), var_4));
        var_23 ^= -5965101433370798069;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_24 = (max((-9223372036854775807 - 1), 1548112850));
        var_25 ^= (((min((min(var_12, 7106987154874152110)), var_16)) << (((max((min(62, var_15)), (min(1, var_15)))) - 29))));
    }
    #pragma endscop
}
