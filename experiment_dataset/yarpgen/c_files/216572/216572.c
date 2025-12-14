/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_10 / var_6);
    var_15 += -var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_16 += (~var_0);
                var_17 = (max((max(var_12, -22950)), (max(((-4921082629944308867 + (arr_5 [i_0] [i_0]))), ((~(arr_1 [i_1 - 1])))))));
            }
        }
    }
    #pragma endscop
}
