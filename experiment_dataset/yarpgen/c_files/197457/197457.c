/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_1 != var_5);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_17 = 5898230921772786031;
                    var_18 = 5898230921772786050;
                }
            }
        }
    }
    var_19 = var_9;
    #pragma endscop
}
