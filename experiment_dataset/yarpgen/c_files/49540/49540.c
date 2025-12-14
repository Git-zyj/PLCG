/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((max(1, -3979305252681189945))) && (3979305252681189925 | -3979305252681189948)))) > (((!var_14) >> (((~-1271961500472584634) - 1271961500472584604))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_17 = (min((max((max(var_15, 63523)), -1885649265)), (((-((min(var_8, var_5))))))));
                                var_18 = (max(var_18, ((min((arr_1 [i_0] [i_2]), ((max(var_14, 178))))))));
                            }
                        }
                    }
                }
                var_19 = (max((arr_9 [i_0]), (max((arr_5 [i_0] [i_1]), (((arr_12 [i_0] [i_1] [i_1] [i_0] [i_0]) >> (var_11 - 17)))))));
                var_20 = var_10;
            }
        }
    }
    var_21 = var_1;
    #pragma endscop
}
