/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] [i_2 + 1] [i_2] [i_2 - 2] = ((-((560011078 ? (((!(arr_1 [i_0] [i_0])))) : (max(var_0, 560011094))))));
                            var_15 = 89;
                            var_16 = var_13;
                            arr_11 [i_1] [i_1] = ((((min((arr_9 [i_1] [i_1] [i_2 - 1] [i_3] [i_3 + 1]), (arr_9 [i_1] [i_2] [i_2 + 1] [i_3 + 1] [i_3 - 1])))) || (((-560011058 ? (arr_3 [i_3 + 1] [i_3]) : (arr_3 [i_3 - 2] [i_3 - 1]))))));
                        }
                    }
                }
                arr_12 [i_1] [i_1] = 3458185446;
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_17 = ((((~(max(7128536689206486407, (arr_5 [16] [i_1] [i_4] [i_5]))))) + ((max(4827471195710899859, (((4001695672 ? 560011089 : -560011089))))))));
                            var_18 = ((~((~(arr_2 [i_4 - 2])))));
                        }
                    }
                }
            }
        }
    }
    var_19 = ((!((5034 <= (~560011102)))));
    #pragma endscop
}
