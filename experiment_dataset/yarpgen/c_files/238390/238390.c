/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        var_18 = ((((12030520619530013143 == (((1 & (arr_1 [i_0]))))))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [1] [i_1] [i_1] [i_0] = (((((min(var_17, (arr_0 [i_0]))) + 2147483647)) << (((((arr_1 [i_0 + 2]) ? var_13 : (arr_1 [i_0 - 3]))) - 3770))));
                    var_19 = (((arr_1 [i_0 + 2]) ^ 7041773095023471745));
                    arr_10 [i_0] [i_0] [i_0] = (~1);
                    var_20 = (((((127 != var_2) <= (max((arr_3 [1] [i_1] [i_0]), var_6))))) < -27131);
                }
            }
        }
        arr_11 [i_0 + 2] = (((((var_14 * (((var_5 / (arr_7 [i_0 + 1]))))))) ? (arr_4 [i_0] [i_0 - 2] [i_0 + 2]) : (((max(1, (var_15 > var_13)))))));
    }
    var_21 = (((((((var_11 ? 12323644901336188324 : var_2))) ? -31580 : (~var_4))) - ((((var_3 > (var_9 | var_6)))))));
    var_22 = (var_16 + (72053195991416832 & -27131));
    #pragma endscop
}
