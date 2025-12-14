/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_0] [i_1] [i_0] &= (min((max((arr_1 [i_1] [i_1]), (arr_4 [i_2]))), 65511));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [i_1] [i_1] = ((((arr_3 [i_4 - 3]) ? ((var_13 ? (arr_13 [12] [12] [i_2] [i_4 + 2] [12]) : var_9)) : ((var_10 ? var_0 : (arr_12 [i_0] [i_1] [i_2] [i_3] [i_4 + 1]))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [18] [i_0] = min(((((!(arr_4 [i_0]))) ? (min(var_7, (arr_1 [i_0] [1]))) : var_14)), (var_9 - var_7));
                                arr_16 [i_4 - 2] [i_3] [i_2] [16] [i_2] [i_1] [i_0] &= (32767 + var_2);
                                arr_17 [i_0] [i_1] |= (((((((min(var_11, var_14))) ? var_3 : var_17))) ? (min((arr_11 [i_0] [i_1] [17] [i_3] [i_4] [17]), (((arr_12 [i_0] [i_1] [i_0] [i_3] [i_4]) + var_8)))) : -119547414));
                                var_18 = (((arr_7 [i_4 - 1]) ? ((var_7 ? (arr_7 [i_4 - 2]) : 7712900937296359401)) : (((max(20, -29269))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = ((((((min(var_17, var_5))) ? var_8 : var_14)) / -var_10));
    var_20 = var_6;
    #pragma endscop
}
