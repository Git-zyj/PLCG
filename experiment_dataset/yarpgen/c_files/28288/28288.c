/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;
    var_17 &= ((var_13 ? (max((var_6 * 6952783138659965812), (((879887118 ? var_9 : 43400))))) : (((var_0 ? 6 : var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_18 += ((((((((max(var_13, var_3)))) + var_8))) ? ((22135 ? 22134 : 6)) : (((49152 ? (3958489051 <= 36561) : (arr_1 [i_0] [i_1]))))));
                var_19 += ((!(4 & var_14)));
            }
        }
    }
    #pragma endscop
}
