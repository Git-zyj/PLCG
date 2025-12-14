/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -var_2;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            {
                var_21 = (((!(arr_0 [i_0]))));
                var_22 = 5;
                var_23 = (max(var_23, (((!((((arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 2]) ? (arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 2]) : (arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 2])))))))));
                var_24 = var_0;
            }
        }
    }
    #pragma endscop
}
