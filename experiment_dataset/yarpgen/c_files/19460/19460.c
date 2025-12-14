/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((+(((var_0 && 36911) ? ((var_5 ? -4330113425237887781 : var_3)) : var_12))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 = (((((29211 ? var_11 : (arr_7 [i_0] [i_1] [i_2])))) ? (3992050916 == 20) : (arr_7 [i_0] [i_1] [i_1])));
                    arr_12 [i_0] [i_0] [i_2] = ((47689 ? 87 : 20));
                }
            }
        }
        var_18 = (max(var_18, ((min(-1056964608, (max(-1697748860843154399, 347349987)))))));
        var_19 = ((((!(48 / var_1)))));
    }
    var_20 &= var_3;
    var_21 = ((!((max((((59961 ? var_9 : 0))), 4645739870591220660)))));
    var_22 = (~var_5);
    #pragma endscop
}
