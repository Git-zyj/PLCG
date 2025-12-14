/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_11 = ((((~(-32767 - 1))) / -32767));
                var_12 = var_0;
            }
        }
    }
    var_13 = (min(0, (-32767 - 1)));
    var_14 = ((((var_5 != (~-32759))) ? (((((0 ^ 44845) < (0 / var_7))))) : var_7));
    #pragma endscop
}
