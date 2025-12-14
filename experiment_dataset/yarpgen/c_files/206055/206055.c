/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_11 = (max((((arr_3 [i_0 + 1]) ? (arr_3 [i_0 + 2]) : (arr_3 [i_0 - 1]))), (((max(-469, var_5))))));
                    var_12 &= ((((((-488 ? -1 : 0)))) ? (max(481, 2727804370)) : 1));
                }
            }
        }
    }
    var_13 = (max(((min(((max(var_5, var_2))), (min(2727804370, var_5))))), ((((max(34322, var_3))) ? ((var_3 ? var_10 : var_3)) : 0))));
    #pragma endscop
}
