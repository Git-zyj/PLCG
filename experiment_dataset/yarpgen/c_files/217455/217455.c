/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_14));
    var_21 += ((var_8 ? (0 * 80) : ((((var_10 ? var_15 : var_19)) / -4181817624))));
    var_22 -= ((var_16 * (min(5069249929944028237, 1))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_23 = (min(var_23, 0));
                arr_6 [i_0 + 1] &= ((!(((2147483647 ? 1 : -3184913690229375345)))));
                var_24 &= (((max((min(1, 2243023478)), (((72022409665839104 ? 63471 : 1))))) != (arr_0 [i_1])));
                var_25 = (max((arr_1 [i_0]), (min(2047, 8324706160028174068))));
            }
        }
    }
    #pragma endscop
}
