/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 |= (-((~(max(6, 6050571755706359358)))));
                    var_18 = (min((((~(~-27)))), (min(10874, -18006075752082971568))));
                }
            }
        }
    }
    var_19 = ((((((239 ? 8514152686401056151 : 14813452818457115130)) * (3047768757 && -8514152686401056142))) <= (((3887530535742636456 ? var_8 : -642299128)))));
    var_20 = ((var_3 ? 2 : 421853889));
    var_21 = var_10;
    #pragma endscop
}
