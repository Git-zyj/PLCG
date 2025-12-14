/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_11 = (-9223372036854775807 - 1);
                var_12 = ((!((min((65535 + 2013265920), 186)))));
                var_13 = 41;
                arr_6 [i_0] [i_0] = ((min(((min(65524, var_10))), ((48 ? var_9 : (arr_4 [i_1] [i_1]))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_14 = ((-(max(65486, (((arr_4 [i_4] [i_5]) & var_2))))));
                                var_15 = var_2;
                                var_16 = ((((min(0, (arr_14 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))) | ((-(((arr_18 [i_2] [i_3] [7]) ? -29121 : var_0))))));
                                arr_20 [i_2] [i_5] [i_5] [i_6] [i_2] [i_3] [i_2] = (arr_11 [i_2]);
                                arr_21 [i_2] [i_6] [i_4] [i_2] [i_4] = 48;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            {
                                arr_28 [i_2] [i_3] [i_4] [i_7] [i_7] = 172;
                                var_17 = (arr_11 [i_2]);
                            }
                        }
                    }
                    var_18 = (-2147483647 - 1);
                }
            }
        }
    }
    var_19 = (max(var_19, 65522));
    #pragma endscop
}
