/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1 - 1] [i_2] = var_1;

                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        arr_12 [i_1] [i_2] [i_3] = 16777184;

                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            arr_17 [i_0] [i_1] [i_4] [i_1] = (((((~(72 == 1)))) ? ((((var_11 == 1) ? 2098758536 : var_11))) : ((var_15 ? 17047028260380796633 : (arr_0 [i_1 + 2])))));
                            arr_18 [i_0] [i_4] [i_1] [i_4] = ((var_5 * (((arr_2 [i_1 + 2] [i_3]) ? 1399715813328754983 : 7))));
                        }
                        var_16 = ((~((var_11 ? (var_13 - var_2) : ((var_11 ? 0 : var_2))))));
                        var_17 = (!var_13);
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                {
                    arr_27 [i_6] [i_6] = ((!(((1399715813328754981 ? 1026005153 : (37308 & 1399715813328754983))))));
                    var_18 = ((-var_12 - ((30 ? 98 : 17047028260380796633))));
                    arr_28 [i_6] [i_6] = ((((158 ^ (arr_22 [i_6 - 1] [i_7] [18]))) ^ (((~(arr_23 [i_6 + 1]))))));
                }
            }
        }
    }
    var_19 = var_9;
    #pragma endscop
}
