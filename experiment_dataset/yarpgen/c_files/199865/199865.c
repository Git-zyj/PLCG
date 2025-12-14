/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (((-(!var_11))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = 31;
                var_14 = (((((-(arr_1 [i_0 - 1])))) ? (((var_0 ? ((max((arr_0 [i_0 + 2]), var_9))) : -var_9))) : var_2));
            }
        }
    }
    var_15 ^= var_7;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_16 = var_6;
                        var_17 = ((((!(arr_12 [17] [2] [1] [i_5]))) ? (max(var_7, -var_8)) : (arr_8 [i_2] [i_3] [i_4])));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        var_18 = 57;
                        var_19 = ((1 ? (arr_7 [i_6]) : var_4));
                        var_20 = ((var_3 | ((((!(arr_15 [i_2] [i_3] [i_4] [i_6] [i_3])))))));
                    }
                    var_21 += (((((((var_4 >> (1270875588 - 1270875582)))) ? -3024091707 : -130)) >> (!-36)));
                    var_22 = (max(((256 ? 3024091679 : 117)), (((!(((-(arr_18 [18])))))))));
                }
            }
        }
    }
    #pragma endscop
}
