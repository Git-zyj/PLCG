/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (-23984 != -2009447271);
    var_12 = 4294967295;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_13 = ((-(arr_2 [i_1 - 1] [i_1] [i_1 - 1])));
                arr_5 [i_0] [i_0] [i_0] = 1;
            }
        }
    }
    var_14 = max(var_3, (~var_3));
    #pragma endscop
}
