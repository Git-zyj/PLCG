/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((209 * ((var_6 ? var_6 : (~var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_11 = (((arr_2 [i_0]) ? (arr_4 [i_0] [i_1 - 3]) : (arr_3 [i_0] [i_0])));
                var_12 = (((!2253677501) ? (!5085) : ((127 ? 5659210089236108891 : 1))));
            }
        }
    }
    #pragma endscop
}
