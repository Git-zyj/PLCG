/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 0;
    var_16 = -1616720756;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_17 = (max(((var_5 ? 234 : var_14)), (~8257536)));
                    var_18 = (min((max((max(2391, -3635699564821417168)), 1)), (arr_4 [i_0 - 3] [i_1 - 1] [13])));
                    var_19 = ((((min((arr_5 [i_1 + 1]), (var_9 && 726658659)))) ? ((-8853261610508783772 ? (min(13178, 4319833489484554076)) : ((min(1, 1617836655))))) : (min((arr_5 [i_0 - 1]), (-9223372036854775807 - 1)))));
                }
            }
        }
    }
    var_20 = ((var_11 ? (~var_1) : var_8));
    var_21 = (((((1 >= var_8) ? ((var_5 ? var_13 : var_14)) : 1402944404)) < var_13));
    #pragma endscop
}
