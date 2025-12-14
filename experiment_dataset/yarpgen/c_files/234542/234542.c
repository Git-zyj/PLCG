/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += var_15;

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        var_18 = (arr_1 [i_0 - 4]);
        arr_3 [i_0] [i_0] = ((((((arr_2 [i_0] [i_0]) ? ((var_6 ? (arr_0 [i_0]) : var_14)) : 2190817792))) ? (min(2104149505, var_7)) : (((577236641 && 2190817792) ? var_2 : ((((var_8 && (arr_0 [i_0 - 3])))))))));

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            arr_8 [i_0] [i_0] = (min(-1857441358, (arr_7 [i_1])));
            var_19 -= (((((min((arr_5 [i_0] [i_0]), var_1)) & 1)) & (((-(arr_5 [i_1] [i_0 - 3]))))));
        }
    }
    #pragma endscop
}
