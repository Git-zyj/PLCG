/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((-15184 ? var_10 : var_7))) ? 50352 : -7108));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_12 = (arr_3 [i_1] [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 = (arr_3 [i_2 - 2] [i_1 - 3]);
                                var_14 = (-9223372036854775807 - 1);
                                var_15 = ((+(((!(((arr_10 [i_0] [i_0]) && 7105)))))));
                                var_16 = ((((((~(arr_2 [i_2 - 2] [i_4])))) ? var_1 : var_6)));
                                var_17 = ((7108 ? (((((arr_6 [i_4] [i_1] [i_4] [i_3]) / (arr_6 [i_4] [i_3 + 1] [i_1] [i_1]))) << ((((min((arr_1 [i_1] [i_2]), (arr_0 [i_0] [i_1])))) + 7773)))) : ((~((-32755 - (arr_0 [i_4] [i_2])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = var_10;
    var_19 = ((var_0 < (((min(var_7, var_0))))));
    var_20 = 74;
    #pragma endscop
}
