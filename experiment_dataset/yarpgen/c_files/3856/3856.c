/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (((min(1, -var_3)) < var_11));
    var_13 = (((((min(var_0, var_11)) | (~var_8)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 = (max(var_7, (min((min(var_6, var_9)), var_2))));
                    var_15 = (-((var_9 ? var_3 : var_8)));
                }
            }
        }
    }
    #pragma endscop
}
