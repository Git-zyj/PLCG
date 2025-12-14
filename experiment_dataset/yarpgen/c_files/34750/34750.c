/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_11;
    var_19 = (max(var_19, ((((((~var_5) ? var_4 : 1354928144)) != (((-(var_1 && var_3)))))))));
    var_20 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] &= ((((((arr_0 [i_1 - 1] [i_1]) ? (((arr_4 [17] [17] [i_1 - 4]) << (((-18 + 47) - 12)))) : (arr_4 [i_1 - 2] [i_1 - 1] [i_1 - 4])))) | ((~(arr_2 [i_1 - 3])))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_13 [i_2] [i_2] [i_2] [i_2] = (arr_6 [i_1 - 4] [i_1 - 3] [i_1 - 4] [i_1 + 2]);
                            var_21 = (((((!(arr_9 [i_3] [i_3 - 1] [i_3])))) * ((~(arr_9 [i_3] [i_3 - 3] [i_0])))));
                        }
                    }
                }
                var_22 = (max(var_22, (((var_11 % 216) || ((max((arr_11 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]), (((22507 || (arr_4 [2] [i_1] [i_0])))))))))));
            }
        }
    }
    #pragma endscop
}
