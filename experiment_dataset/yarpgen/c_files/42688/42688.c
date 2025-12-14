/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;
    var_13 = -11628;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    var_14 = (~7706109617041474009);
                    var_15 = var_7;
                    var_16 = (max(var_16, ((min(var_9, 1092129962)))));
                    var_17 = (max(10740634456668077606, ((min((min(-7946248431901445162, var_4)), (var_6 + 32767))))));
                }
            }
        }
    }
    var_18 = var_2;
    var_19 = (max(((((min(var_2, 13696))))), -8147025589937864759));
    #pragma endscop
}
