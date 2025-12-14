/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((!((max((-4872114098980610742 && var_14), var_13)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [15] [14] = 4872114098980610731;
                arr_7 [i_1] = var_1;
            }
        }
    }
    #pragma endscop
}
