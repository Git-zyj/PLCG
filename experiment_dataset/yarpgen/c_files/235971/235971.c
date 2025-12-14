/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;
    var_19 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_0 - 3] [i_1] [i_1] [i_1] = ((((max(var_12, (arr_5 [i_0] [i_0 - 2] [i_1] [i_1])))) && (((max(var_7, (arr_1 [i_2])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_20 = ((var_6 ? ((min((arr_6 [i_1] [i_3] [i_4]), -42))) : ((min(var_12, ((((arr_14 [i_0] [i_0] [i_2 + 1] [i_0] [i_0] [i_4]) ? var_16 : var_15))))))));
                                var_21 = ((((min(var_7, (arr_4 [i_0] [i_3 + 1])))) ? ((~(arr_4 [i_0] [i_3 + 1]))) : (!-2845407399461554660)));
                                var_22 ^= (min((!-1), ((((min(4211126917, 2845407399461554631))) % (min(11155582981644565852, 2845407399461554631))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
