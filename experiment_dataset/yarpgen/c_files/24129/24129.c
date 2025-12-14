/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    var_14 = (min((((91 != 25) ? ((var_8 ? 1023 : var_5)) : 18446744073709551610)), (165 & 1827946592)));
    var_15 = ((((((((max(var_11, 1827946592))) >= (max(var_3, var_5)))))) >= var_9));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_16 = (min(var_16, 28399));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_2] [i_3] = (max((((((-(arr_5 [i_0] [i_1] [i_2])))) ? 1 : (min((arr_4 [i_0] [i_1]), var_9)))), ((2026862358 ? 5777228489716460202 : 5))));
                            arr_13 [i_0] [i_2] [i_3] = (arr_3 [i_0 - 1] [i_3]);
                            var_17 = (min(var_17, ((((((arr_7 [i_3] [i_1] [i_2]) ? (arr_7 [i_3] [i_1] [i_2]) : (arr_7 [i_3] [i_1] [i_2]))) ^ (arr_11 [i_1 + 1] [i_2] [i_2] [i_3]))))));
                            var_18 = (arr_1 [i_0]);
                            var_19 = (min((((((~(arr_10 [i_0] [i_1] [i_2] [i_3])))) ? -var_3 : var_5)), 212));
                        }
                    }
                }
                var_20 = (max(var_20, ((((((2305843009213693952 ? -1537765636 : -1827946604))) ? (((!((min((arr_2 [i_0] [i_1]), (arr_11 [i_0] [i_0] [i_1] [i_1]))))))) : ((((max(165, 63))) ? (arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1 - 1]) : (arr_9 [i_0 - 1]))))))));
            }
        }
    }
    #pragma endscop
}
