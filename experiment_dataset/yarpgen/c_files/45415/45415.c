/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(((var_7 ^ (~1))), var_8));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((1739597592 ? ((-1593449932 ? 2867754408 : var_2)) : var_2)) << (((1 <= (!1427212888)))));
                var_12 = 1;
            }
        }
    }
    var_13 = ((((((((12 ? 9145137619655742722 : var_7))) ? var_5 : (var_1 - -2145755361)))) ? (((-(var_7 - 2521138648)))) : -9145137619655742723));
    #pragma endscop
}
