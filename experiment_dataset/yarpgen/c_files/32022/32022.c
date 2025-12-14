/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((~(min((-2147483647 - 1), 9007164895002624))));
    var_20 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_0] [i_1] = ((-(var_6 + 9007164895002617)));
                var_21 = ((9007164895002624 * ((((min(-125, 268402688)) * 65535)))));
            }
        }
    }
    var_22 = 18437736908814548977;
    #pragma endscop
}
