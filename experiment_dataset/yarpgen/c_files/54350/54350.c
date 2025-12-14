/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_20 = (~var_11);
                var_21 = (min(var_21, ((max(((min(var_11, (arr_0 [2])))), (max((arr_3 [i_0] [i_1]), (min(var_16, var_3)))))))));
            }
        }
    }
    var_22 = max(var_17, ((min(var_10, var_10))));
    #pragma endscop
}
