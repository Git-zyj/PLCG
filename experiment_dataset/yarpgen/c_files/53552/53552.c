/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = var_6;
                arr_4 [i_1] [i_1] [i_0] = 1;
                arr_5 [i_0] [i_0] [i_0] = 936607865;
                arr_6 [i_1] [i_0] = var_17;
            }
        }
    }
    var_19 = -936607856;
    var_20 = 1;
    var_21 = var_12;
    #pragma endscop
}
