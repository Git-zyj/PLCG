/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231755
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
                arr_5 [i_0] = var_10;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {

                            for (int i_4 = 3; i_4 < 15;i_4 += 1)
                            {
                                arr_14 [4] [i_3] [13] [i_3] [i_0] = ((((min((((arr_8 [13] [i_1] [13] [13]) | (arr_4 [i_4 - 3]))), 3))) ? (min((~4080848646), var_17)) : (((((arr_3 [i_0] [i_1]) != var_13))))));
                                var_20 = arr_2 [i_2] [i_2] [i_1];
                                var_21 = (max(var_21, (((min(6857893691642229168, 0))))));
                            }
                            for (int i_5 = 0; i_5 < 18;i_5 += 1)
                            {
                                var_22 = (((min(39932, 1119321948)) % (arr_13 [i_0] [i_0] [12] [3] [i_5])));
                                var_23 = (((arr_0 [i_2 + 1]) << ((((max(361, 131))) ? (((var_19 ? 1 : 1))) : (max(7654621540348698129, 1))))));
                            }

                            for (int i_6 = 0; i_6 < 18;i_6 += 1)
                            {
                                var_24 = (min(var_24, ((((((var_5 ? var_4 : 9205412786797488416))) ? 39 : ((min((arr_13 [i_0] [14] [i_2 + 2] [i_3] [11]), (!var_15)))))))));
                                var_25 = (max(var_25, (min((max(((2147483647 ? var_2 : (arr_4 [i_0]))), ((max(71, (arr_18 [i_1] [i_0] [i_2] [12] [i_0])))))), (((~(arr_9 [i_6] [i_6] [i_2 - 1] [i_3] [i_2 - 1]))))))));
                                var_26 = (max((((arr_10 [i_2] [i_2 + 1] [i_2 + 1]) ? -1 : (arr_10 [13] [i_2 + 1] [i_2 + 1]))), (arr_10 [i_2] [i_2 + 2] [i_2 + 2])));
                                var_27 = ((4221437540054642792 ? (((arr_8 [i_6] [i_2 - 1] [10] [i_0]) ? var_17 : (arr_8 [11] [11] [7] [11]))) : var_15));
                            }
                            var_28 = ((var_19 ? ((((!(arr_12 [i_0] [5] [i_0]))))) : (arr_8 [3] [i_2] [i_0] [i_0])));
                            arr_20 [i_3] [i_1] [i_3] [i_3] [i_3] [i_3] = (min(-1845221303, (min(1335034734, (arr_17 [i_2 + 1] [i_3] [i_3] [15] [i_2] [16])))));
                            var_29 = (((-(arr_15 [i_2 + 2] [i_2] [i_2] [5] [i_2] [i_2 + 1] [i_3]))));
                        }
                    }
                }
            }
        }
    }
    var_30 = (max(var_30, (!var_7)));
    #pragma endscop
}
