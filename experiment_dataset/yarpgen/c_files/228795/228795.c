/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((3019382013301877114 / (((max(var_4, var_0))))))) ? 5913383485950933846 : (((var_10 ? var_7 : var_3))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_12 = ((min(12533360587758617770, 45632)));
                    var_13 = var_1;
                }
            }
        }
    }
    var_14 = (max(var_14, var_9));
    var_15 &= var_8;
    #pragma endscop
}
