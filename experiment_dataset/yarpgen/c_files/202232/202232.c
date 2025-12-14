/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((var_6 > var_8), 40230));
    var_15 = (max((min((min(15097, -6329044768074028089)), var_1)), (min((min(var_1, -6329044768074028087)), (25305 * var_10)))));
    var_16 ^= 31;
    var_17 = max((((((min(var_4, var_8))) || (!var_11)))), var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_18 -= (5302638935811919797 / 1291276495);
                            var_19 = (min(((var_4 ? ((1367245920932181749 ? (arr_8 [i_0] [i_1] [i_1] [i_0] [i_3]) : var_2)) : ((-6329044768074028113 ? var_0 : (arr_8 [i_0] [i_0] [i_0] [i_3] [i_0]))))), var_13));
                            var_20 |= (~-5302638935811919808);
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    var_21 = (max(var_21, (max(((-6329044768074028113 ? (((-6329044768074028095 || (arr_11 [i_4])))) : (arr_8 [i_0] [i_1] [i_1] [i_0] [i_0]))), (min(((min(var_6, (arr_2 [i_4] [i_0])))), (min(var_3, var_4))))))));
                    var_22 = ((-1291276482 <= (((((arr_9 [i_4] [i_4] [i_4] [i_4]) | (arr_0 [i_0] [i_0])))))));
                }
                arr_12 [i_1] [i_0] = (min((((arr_1 [i_1 + 3]) ? var_6 : (arr_1 [i_1 + 1]))), (((arr_1 [i_1 + 2]) ? 1291276495 : (arr_1 [i_1 - 1])))));
            }
        }
    }
    #pragma endscop
}
