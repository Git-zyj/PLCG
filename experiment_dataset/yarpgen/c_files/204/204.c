/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((min(((var_6 ? var_5 : var_2)), (var_3 > 1))), ((((((~var_10) + 2147483647)) << (var_8 - 1))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((-(((33538048 + -22964) + -1))));
                var_13 = 32767;
                arr_5 [i_0] = (!2147483632);
            }
        }
    }
    var_14 = (min(var_14, (((((((var_1 <= -3) ? var_5 : var_4))) ? var_6 : (var_9 * var_8))))));
    #pragma endscop
}
