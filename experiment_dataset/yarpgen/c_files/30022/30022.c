/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] = (-971144217 ? (arr_1 [i_0]) : -1343636450);
                    arr_7 [i_0] [i_1] [14] [i_2 + 3] = ((((((min(2880300056, -1029144055))) ? 991017731 : (1 / 193))) / 1343636432));
                    var_16 = (arr_2 [i_1 - 2] [i_1 - 2] [i_2 - 4]);
                }
            }
        }
    }
    var_17 = (min((max(-991017732, 197)), ((var_3 ? var_3 : ((15 ? 195 : 1343636451))))));
    var_18 |= (((((((max(var_8, var_13))) & (~var_10)))) ^ (99 & -1343636466)));
    var_19 = (max(((((max(var_15, 1))) ? (!803374256) : (min(var_5, var_5)))), (((((max(4128768, var_15))) ? 16670 : var_15)))));
    #pragma endscop
}
