/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((min((32767 ^ 3538168698), ((var_1 ? var_4 : -452098505952143006))))) ? (max(((var_2 ? var_2 : -452098505952142998)), (var_11 || 6318632504121916533))) : (max((var_13 && var_12), (max(3642375872, -452098505952142988))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                {
                    var_19 = (max(((max((arr_1 [i_0 + 4]), (arr_5 [i_0 + 4] [i_0 + 3] [i_0 - 1] [i_2 + 2])))), (min(452098505952143001, (((var_16 ? var_8 : (arr_4 [i_0] [i_0] [5]))))))));
                    var_20 = (!-452098505952143001);

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_9 [i_0 - 1] [i_0 - 1] [i_3] = (-452098505952142990 / 40);
                        arr_10 [i_0] [i_1] [i_0] [i_1] [i_3] &= min((((!(arr_8 [i_0] [i_1] [1])))), (((arr_5 [i_0 + 3] [i_1] [i_2] [i_3]) & -18446744073709551615)));
                        arr_11 [8] [i_1] [i_2] [i_3] = (((1 == var_6) ? (~1) : ((9008042150494527302 / (arr_2 [i_0])))));
                    }
                }
            }
        }
    }
    var_21 = ((!(((((max(var_9, var_12))) % var_8)))));
    var_22 = var_1;
    #pragma endscop
}
