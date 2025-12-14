/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 62705;
    var_16 = (min(20728, 1));
    var_17 = (max(var_17, ((min(((max(24495, -890712717))), 0)))));
    var_18 = (max((max(-96, (min(12808, 8191)))), ((max(30877, 1585)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_19 = (min(((min(126, 43358))), (max(8822, 2157102737))));
                var_20 = 47;
                var_21 = (min(((max(13197, (max(64, 15344))))), (min((min(-1968414830, 3555017626)), 15916))));
            }
        }
    }
    #pragma endscop
}
