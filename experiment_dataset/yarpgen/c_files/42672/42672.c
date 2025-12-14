/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [9] [i_0] = (-699899779 ^ var_7);
                arr_7 [i_1] = ((((((1 ? 14 : var_5)) & var_1)) * ((((!4294967281) && (((1 ? -699899758 : var_10))))))));
            }
        }
    }
    var_11 = ((-1674944632 ? 9 : 1));
    #pragma endscop
}
