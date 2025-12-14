/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_10 = (((arr_4 [i_1 - 3] [i_0 + 1]) ? -var_5 : (min(17181521860594898223, var_1))));
                    arr_7 [11] [i_1] [i_1] [i_2 - 1] = ((~(((var_2 && var_2) << ((((min((arr_4 [i_0] [7]), 83))) - 57))))));
                    var_11 = (max(var_11, ((((min(var_4, (var_2 - var_7))) == var_7)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_12 = ((!((min(var_5, (arr_5 [i_1 - 4] [i_1 - 1] [i_1]))))));
                                var_13 = ((var_7 / var_9) / 5);
                                arr_12 [i_0] [i_2] [i_2] [i_4] = (min(var_9, ((max(var_6, var_6)))));
                                var_14 &= (max((min((arr_9 [i_0] [i_0] [i_0] [i_0]), var_9)), ((var_9 ? var_2 : (arr_11 [i_0] [i_1] [i_1] [i_2] [i_2 - 2] [i_3] [i_4])))));
                                var_15 = ((((!(arr_11 [i_4 - 2] [i_4] [i_4 - 1] [i_4] [i_2 - 2] [i_2 - 2] [i_0 + 1]))) ? ((~(arr_1 [i_4]))) : (var_0 - var_2)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = var_0;
    #pragma endscop
}
