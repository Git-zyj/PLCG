/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [22] [22] [i_1] = (arr_3 [19] [19]);
                arr_6 [i_0] = 183;
                var_10 = (max(var_10, 58));
            }
        }
    }
    var_11 = ((var_6 < (!var_0)));
    var_12 = (max(var_12, var_8));
    #pragma endscop
}
