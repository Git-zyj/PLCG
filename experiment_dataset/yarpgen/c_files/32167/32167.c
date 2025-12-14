/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_8 [i_1] = ((70 * ((((arr_2 [i_1 - 1]) <= (arr_2 [i_1 + 1]))))));
                var_18 = (min(var_18, ((((((0 + (arr_6 [i_0] [i_0])))) ? (((!(arr_2 [2])))) : ((((arr_2 [i_1]) != (arr_2 [i_1 + 1])))))))));
                arr_9 [i_1] = 2199543814;
                var_19 = ((2051 <= (min((min(1, (arr_2 [i_0]))), 458694035))));
            }
        }
    }
    var_20 = var_6;
    var_21 = ((-(var_7 / -6985521957152310878)));
    #pragma endscop
}
