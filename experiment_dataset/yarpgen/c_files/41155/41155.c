/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_10));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_2] [6] [i_2] = (((((~(((!(arr_0 [i_0]))))))) ? 184 : var_3));
                    var_18 = (min(var_18, 3267));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_3] [i_2] = ((((((arr_6 [i_0] [i_0] [i_2] [i_0]) ? var_5 : (arr_2 [i_0])))) ? ((16008 ? 0 : 93)) : (((!((((arr_11 [i_0 + 1] [i_1 + 4] [i_2] [i_1 + 4] [8]) ? var_11 : 1))))))));
                                var_19 -= ((+(max((arr_4 [i_1 + 4]), 1))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
