/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;
    var_12 = (min(var_12, var_7));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_13 = (((-9223372036854775807 - 1) & (--9223372036854775793)));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_14 |= (arr_0 [i_1]);
            var_15 = (5185544341337589350 / var_1);
        }
        arr_5 [i_0] = (min((min((arr_1 [i_0 + 1]), var_8)), (((1771615140 ? 1995195457 : (arr_1 [i_0 + 1]))))));
        var_16 = 109;
    }
    var_17 = (min(var_17, var_3));
    var_18 = (min(var_4, ((min(var_3, (!2299771821))))));
    #pragma endscop
}
