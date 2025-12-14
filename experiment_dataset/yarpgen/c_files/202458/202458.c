/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_0));
    var_13 = ((58536 ? (~-10999480181868323) : 58536));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [i_1 - 2] [i_1] [i_2] [i_3] = ((max(((0 ? var_0 : 7147508159208277311), (arr_3 [i_3 - 2])))));
                            arr_14 [i_0] [i_1] [i_2] [i_3 - 2] [i_2] = 11299235914501274305;
                            var_14 = -537167708;
                            var_15 = (arr_12 [i_1] [i_1 - 3] [i_3 - 3] [i_3 + 2] [i_3 + 2]);
                        }
                    }
                }
                arr_15 [i_1] [i_1] = (((arr_12 [i_1 - 1] [i_1 - 1] [i_1 - 2] [i_1] [i_1 - 2]) != 11299235914501274297));

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    arr_18 [i_0] [i_0] [i_0] [i_1] = (((arr_7 [i_0] [i_0] [i_0] [i_4]) ? (arr_17 [i_0] [i_1] [i_4]) : ((((((11299235914501274293 == (arr_12 [i_0] [i_1 + 1] [i_1] [i_1 + 1] [i_4]))))) ^ (max(11299235914501274314, 1787839431))))));
                    arr_19 [i_1] [i_1] = ((!(arr_10 [i_4] [i_1 - 3] [i_1] [i_1] [i_1])));
                }
            }
        }
    }
    var_16 = var_5;
    #pragma endscop
}
