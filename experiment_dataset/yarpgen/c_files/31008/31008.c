/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_13 -= (min(511, 5));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_14 = (min(var_14, ((((arr_8 [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3]) ? (arr_8 [i_3 - 1] [i_3 + 4] [i_3] [i_3 + 1]) : (((min((arr_8 [i_3 - 1] [i_3 - 1] [i_3 + 4] [i_3]), -20447)))))))));
                                var_15 = (min((((max(var_3, -37)) * ((~(arr_5 [i_0 - 1]))))), -20434));
                            }
                        }
                    }
                    var_16 = ((((((arr_8 [i_0 - 1] [i_0] [i_0 - 1] [i_0]) / (arr_8 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))) / ((((arr_6 [i_2] [10] [11]) ? (arr_2 [i_0]) : -20447)))));
                    arr_13 [11] [i_1] [i_0] = (min((min(((134217727 ? 20434 : var_10)), ((max(20434, var_6))))), (((arr_6 [i_0] [i_1 - 1] [i_0 - 1]) * (arr_6 [i_0 + 1] [i_1 + 1] [i_0 + 1])))));
                    arr_14 [i_0] [i_0 - 1] [i_0 - 1] [i_0] = var_12;
                }
            }
        }
    }
    var_17 = (((min(var_12, var_8)) - var_2));
    var_18 = -49;
    #pragma endscop
}
