/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_20 += 7737127134249325794;
                var_21 -= (arr_3 [8] [8]);
            }
        }
    }
    var_22 |= 2967837861;
    #pragma endscop
}
