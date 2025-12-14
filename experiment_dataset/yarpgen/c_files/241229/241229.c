/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((((max(var_0, var_12))) && (((var_6 ? var_0 : var_6))))), var_3));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_19 = (max(var_19, ((min(1, 112)))));
        var_20 ^= (min(23260, 1412));
        var_21 |= (((((1829010008 ? 1 : ((max(1, 1)))))) ? var_15 : var_15));
        var_22 = ((((max(255, -23758))) ? 64140 : -129920646));
        var_23 = ((!(arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_24 *= -var_5;

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_25 = (!var_3);
            var_26 = ((-(-1829010016 ^ -23758)));
            var_27 = (((((var_1 ? var_8 : var_0))) ? var_1 : (arr_5 [i_1])));
            var_28 ^= (((arr_3 [i_2]) ? (arr_5 [i_1]) : (arr_5 [i_2])));
        }
    }
    #pragma endscop
}
