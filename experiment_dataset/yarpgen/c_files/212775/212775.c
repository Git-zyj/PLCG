/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!((max(-87, 3823)))));
    var_21 = var_6;
    var_22 = (min(var_22, ((((max(3731841069, 87)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_23 = (((((max(var_18, -87))) ? ((4166210954 ? 2402943214 : 32236)) : -3823)));
                arr_5 [i_0] [i_0] [i_0] |= 3819;
            }
        }
    }
    #pragma endscop
}
