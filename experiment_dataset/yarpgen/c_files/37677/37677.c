/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_10 = (min(((((((min(-118, (arr_4 [i_0]))))) <= 7040))), -74));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_4] = max(3906364774, (arr_0 [i_0]));
                                arr_15 [i_0] [i_1] [i_0] [4] = max(388602521, 35);
                                arr_16 [i_0] [i_1] [i_0] [i_3] [i_3] [i_4] = max((min((arr_9 [i_4] [i_4] [i_4 - 2] [i_3] [i_2 + 1]), (((arr_7 [i_4 + 3]) ^ 4294967295)))), (min((arr_3 [i_0] [i_1]), (3906364776 - 4294967295))));
                                arr_17 [i_0] [i_1] [4] [i_0] [1] [i_2] = ((1146035757 ^ (min(190338319, (11353187149597809214 & 190338319)))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_11 = ((min((min(868734768, 125)), (388602521 != 0))));
                            var_12 += (min((arr_8 [i_0] [i_5] [i_6]), (min((~3906364774), (min(111, 15679418624248176676))))));
                            var_13 = 11609977043556195470;
                            arr_25 [i_0] [8] [i_1] [i_0] = max(7759, 1146035766);
                        }
                    }
                }
                var_14 = (((15585772474306003596 / 125) > ((((arr_20 [i_0] [i_1]) - 20110)))));
                var_15 = (max(var_15, (((!(((arr_5 [i_0] [6]) < (max(4294967295, (arr_0 [2]))))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            {
                arr_33 [i_8] = min(65534, 4104628971);
                var_16 += (min((((arr_32 [i_8] [i_8]) * 4294967273)), (arr_30 [i_8])));
                arr_34 [i_8] [i_8] = (min((arr_29 [i_7]), (max((max((arr_19 [i_8] [13] [i_7]), 388602537)), (max((arr_5 [i_7] [i_7]), 2928387991))))));
                arr_35 [i_7] [7] = (min(4104628998, 2986527086544030569));
            }
        }
    }
    #pragma endscop
}
