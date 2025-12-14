/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_1 + 3] [i_1] [i_0] = 5941;
                var_19 = (min(var_19, 5941));
                var_20 = (max(var_20, (arr_3 [6] [i_1 - 1] [i_1])));
            }
        }
    }
    var_21 = (min(-1747035355, 5941));
    var_22 = ((min((min(-9223372036854775784, -5939)), 44)));
    var_23 |= var_6;
    #pragma endscop
}
