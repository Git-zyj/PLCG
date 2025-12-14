/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_13;
    var_21 -= var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (((min(695230572, -15065)) <= (((((arr_4 [i_1 + 2] [i_1 - 3]) > 1))))));
                var_22 += ((+((min((arr_2 [i_1 - 4] [i_0]), 60)))));
            }
        }
    }
    #pragma endscop
}
