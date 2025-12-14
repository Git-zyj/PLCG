/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(((((-9 ^ var_8) | var_13))), ((var_9 & (((143 ? var_7 : var_3)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = (((-(((var_8 || (arr_0 [i_1])))))));
                var_17 = (-(max(2114074533879705607, 1)));
                arr_4 [i_1] = -2114074533879705629;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] = ((((4528311510938287178 && (((var_12 ? -2114074533879705629 : -21661)))))));
                            arr_12 [i_3] [i_1] [1] = var_3;
                            var_18 = ((2114074533879705629 - (((-24656 ? var_12 : ((max(var_8, var_8))))))));
                            arr_13 [i_0] [12] [i_1] [6] [i_2] [i_1 + 3] = ((-24655 - (min((arr_8 [5] [i_1 - 2] [i_1 - 1] [i_1 + 1]), (arr_1 [i_1 - 1])))));
                            arr_14 [i_1] [2] [i_2] [1] = ((((arr_10 [i_1] [i_1] [i_1 + 1]) >= (arr_10 [7] [i_0] [i_1 + 3]))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 0;i_6 += 1)
            {
                {
                    var_19 = (arr_0 [1]);
                    var_20 = (((!((max(24656, -2114074533879705607))))));
                }
            }
        }
    }
    #pragma endscop
}
