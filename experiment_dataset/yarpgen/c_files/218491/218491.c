/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((min((var_14 ^ 213), (max(var_13, var_1)))) / var_14));
    var_16 += (((max(((5723964589055430892 ? var_13 : var_5)), var_6)) <= (-9223372036854775791 >= 162)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, ((!((((arr_3 [i_2] [i_2 + 2] [i_2 - 1]) ? (arr_3 [4] [4] [i_2 + 2]) : (arr_3 [i_1] [i_1 - 1] [i_2 + 1]))))))));
                    var_18 = (max(var_18, (((!((!((min(236, var_10))))))))));
                    var_19 = var_10;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 14;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_20 = (min(var_20, (arr_12 [i_3] [i_3] [i_3 - 1])));
                                arr_24 [i_3] [i_3 + 1] [i_4] [i_5 - 1] [i_6] [10] = var_13;
                            }
                        }
                    }
                    arr_25 [i_3] [i_3] [i_3] = (((((arr_20 [i_3 - 1] [i_4] [i_4] [i_4] [12] [i_5 + 3]) | (-19877 < var_6))) ^ (max((((arr_17 [i_3] [i_5]) ? 234 : 209132197900691786)), ((max((arr_16 [14] [i_3] [i_5]), (arr_7 [i_4] [i_5]))))))));
                    var_21 = (max((((((var_12 ? var_12 : 19876))) ? (arr_15 [2] [2]) : (arr_7 [i_5] [8]))), (((+((min((arr_11 [2]), var_14))))))));
                }
            }
        }
    }
    #pragma endscop
}
