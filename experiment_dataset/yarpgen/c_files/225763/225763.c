/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 246;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = (((((5136 ? 679434710 : 6817110383827768441))) ? ((((((arr_2 [i_1]) / -5140))) ? (max(28783, (arr_1 [i_0 + 1] [i_1]))) : -6926481261457574581)) : (~2088393807452903226)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_16 -= (min(var_1, (~var_3)));
                            arr_9 [i_3] [8] [i_1] [8] [i_0] = (((max((((955001266 ? (arr_7 [i_0] [i_1] [i_3 + 1]) : (arr_8 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))), 1))) ? (arr_7 [i_0] [i_1] [i_2]) : ((min(1920, (!var_6)))));
                            var_17 = ((!(((var_11 ? (arr_2 [i_1]) : ((0 & (arr_1 [i_0] [i_0]))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
