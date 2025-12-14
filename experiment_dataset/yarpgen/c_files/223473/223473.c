/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_10 = (max(var_10, (arr_0 [14])));
                arr_4 [i_0] [i_0] = (var_6 < -21769);
            }
        }
    }
    var_11 = ((var_1 ? var_0 : ((max((var_9 + var_7), ((max(3900003315, 59663))))))));
    var_12 = var_3;
    #pragma endscop
}
