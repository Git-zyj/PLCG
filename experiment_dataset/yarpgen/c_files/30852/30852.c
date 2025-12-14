/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = 180;
                var_16 *= (min((max((max(3098560471, 3098560471)), (((46292 << (1814 - 1805)))))), (min((max(1196406843, 44147)), (max(1196406824, 3098560485))))));
            }
        }
    }
    var_17 = 63721;
    var_18 = (max(var_18, ((min((min((min(1196406825, 63722)), var_10)), var_13)))));
    #pragma endscop
}
