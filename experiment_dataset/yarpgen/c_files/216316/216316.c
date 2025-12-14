/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_19 = ((((max(4127776496, var_4))) ? 1275291857480120677 : ((((!var_5) + (((1 == (arr_3 [i_0] [i_1] [i_0])))))))));
                var_20 |= (arr_1 [i_1]);
            }
        }
    }
    var_21 = var_11;
    var_22 ^= ((((max(var_2, 4127776496))) ? (max(var_9, (var_9 % var_0))) : (((var_17 ? var_12 : var_6)))));
    #pragma endscop
}
