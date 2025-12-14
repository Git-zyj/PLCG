/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= var_0;

    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        var_15 *= ((16281 ? 169 : (max((arr_2 [i_0 + 2]), (arr_2 [i_0 + 4])))));
        var_16 = (max(var_16, (arr_1 [i_0])));

        for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
        {
            var_17 = 16275;
            var_18 *= (arr_3 [6] [6]);
            var_19 *= ((!(arr_2 [i_1])));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {
            arr_10 [3] = ((!((((arr_7 [i_0 + 2] [i_2] [i_0 - 3]) * (arr_2 [i_0 - 3]))))));
            var_20 = -var_1;
        }
        arr_11 [6] = ((~(49268 != var_7)));
    }
    var_21 *= var_9;
    #pragma endscop
}
