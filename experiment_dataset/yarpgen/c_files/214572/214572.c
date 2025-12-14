/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 += (((min(0, -1910918385)) == 1));
                    arr_9 [i_2] [i_0] [i_0] = ((((var_0 ? 0 : var_9)) / ((max((var_3 != -51), 3827846895)))));
                    arr_10 [i_0] [i_0] [i_2] = var_5;
                    arr_11 [i_0] [20] |= var_10;
                    var_15 += max(((!((min((arr_6 [5] [i_1 - 4] [i_1 - 1]), 1))))), (max(var_0, (var_5 <= var_8))));
                }
            }
        }
    }
    var_16 = (max(18031203182461187116, 1));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 8;i_5 += 1)
            {
                {
                    arr_19 [i_4] [i_4] [i_4] [4] = (max((min(var_1, ((!(arr_18 [i_3] [i_3] [i_3] [i_3]))))), var_8));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                arr_26 [i_4] [i_4] [i_4] [1] [1] [i_4] = (arr_17 [i_5 - 2] [i_7]);
                                arr_27 [i_7] [i_7] [i_6] [i_6] [2] [6] [9] = ((+((((max((arr_0 [i_5 + 3] [i_5 + 3]), var_6))) / -1))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = -1;
    #pragma endscop
}
