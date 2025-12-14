/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] [10] [i_0] = ((-(max(9951764032847592232, (!-28047)))));
                var_13 -= ((-28559 ? -28047 : 2049));
            }
        }
    }
    var_14 = var_2;
    var_15 = (max((((~(~28046)))), ((var_8 ? (max(28055, 7144794070126090496)) : var_5))));
    #pragma endscop
}
