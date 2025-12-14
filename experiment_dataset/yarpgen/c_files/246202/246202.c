/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~var_3);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_0] = var_14;
                    var_20 += (min(((31405 > (min(var_16, var_13)))), (var_7 >= var_11)));
                }
            }
        }
    }
    var_21 += var_11;
    #pragma endscop
}
