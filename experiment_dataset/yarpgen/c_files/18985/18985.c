/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] = 7;
                                var_12 = (((min(var_2, -127))) ? (-12 & 32767) : (((arr_3 [i_2 - 1] [i_1 + 3]) ? (arr_3 [i_2 + 1] [i_1 + 2]) : 3458764513820540928)));
                                arr_15 [i_0] [i_4] [i_2] [i_3] [i_0] = (min((arr_9 [i_0] [i_3]), (457819414 >> 0)));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_13 = ((((52135 >> (((arr_2 [i_1 - 1]) - 150)))) ^ ((((arr_4 [i_5]) == (arr_4 [i_1 + 4]))))));
                                arr_22 [5] [5] [5] [i_6] [i_5] [i_5] [3] = 14987979559889010658;
                                var_14 = 1;
                            }
                        }
                    }
                }
                arr_23 [i_0] [i_1 + 2] = 52112;
            }
        }
    }
    #pragma endscop
}
