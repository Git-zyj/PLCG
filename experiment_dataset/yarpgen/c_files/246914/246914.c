/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (3209632375 / 1085334920)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_13 *= (arr_2 [i_0] [9] [i_0]);
                    var_14 = (max(var_14, (arr_2 [i_0] [i_1] [9])));
                    var_15 = (arr_4 [i_1] [12]);
                }
            }
        }
    }
    var_16 += (((((min(var_8, (12790927518248912657 <= var_1))))) & 12790927518248912627));
    #pragma endscop
}
