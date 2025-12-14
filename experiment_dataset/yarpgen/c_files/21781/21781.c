/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = (min(var_13, ((max((((((min((arr_2 [i_1]), var_1))) != ((((arr_2 [i_0]) >= (arr_1 [i_0]))))))), (((2147483647 / var_11) ? (arr_1 [i_1]) : (arr_0 [i_1] [i_1]))))))));
                arr_5 [i_0] [i_1] [13] = (((arr_0 [i_0] [i_1]) / (194971015 * 51788)));
                arr_6 [6] = (arr_0 [i_0] [i_0]);
            }
        }
    }
    var_14 = (536870911 ? 4099996268 : -607625478);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                arr_13 [i_3] [i_3] = var_12;
                arr_14 [i_3] [i_3] [i_3] = (1 && 1);
                var_15 -= var_6;

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_22 [i_5] [i_3] [i_4] [i_5] [1] = (max(204, (min((arr_10 [i_2]), (arr_3 [i_2])))));
                                var_16 = (((min((max(4124858082, var_8)), 0)) - var_6));
                            }
                        }
                    }
                    var_17 = (max(var_17, (32739 >= 13040)));
                }
            }
        }
    }
    #pragma endscop
}
