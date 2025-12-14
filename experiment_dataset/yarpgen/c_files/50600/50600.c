/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_14 > (((~(min(var_0, var_2)))))));
    var_18 = 192;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 = (max(((((!136) || (arr_0 [2])))), 18));
        var_20 *= (~-5110953784626605677);
        var_21 = 136;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_22 = (140 % 36026597995708416);
            var_23 = var_7;
            var_24 = 123;
        }
        var_25 = (((arr_3 [i_1] [i_1]) ? (arr_3 [i_1] [3]) : var_4));
    }
    #pragma endscop
}
