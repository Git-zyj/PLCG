/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= (~3);
    var_20 = 56054;
    var_21 |= var_3;
    var_22 &= min(var_17, (!1784304127));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_23 = (max(var_23, ((((var_0 ? var_8 : var_9))))));
                arr_5 [11] [i_0] [i_0] = ((~(max((-1 / 1784304125), ((-980569074 ? -1784304096 : 1605636063))))));
                var_24 += (!1);
            }
        }
    }
    #pragma endscop
}
