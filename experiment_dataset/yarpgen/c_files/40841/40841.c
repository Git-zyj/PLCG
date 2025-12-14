/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= ((16383 ? ((var_15 ? var_14 : (var_8 & var_4))) : ((max(var_6, (~var_13))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [12] = (((arr_3 [i_0]) & (((((((arr_1 [i_0]) || (arr_1 [i_0]))))) / (min(var_1, (arr_2 [15])))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_2] [i_3] = ((((((max((arr_3 [16]), (arr_11 [i_0] [i_1] [i_2] [i_3])))) ? ((((arr_7 [i_0] [i_1] [i_1] [i_3]) << (((arr_6 [i_0] [i_0]) - 9725104489891340964))))) : var_14)) >> (((!((max((arr_6 [i_0] [i_0]), (arr_12 [i_3] [9] [i_1] [i_0])))))))));
                        arr_14 [i_1] [i_1] [i_1] [1] = (arr_3 [i_2 - 2]);
                        var_17 = ((-(arr_1 [i_2 - 2])));
                        arr_15 [i_2] [19] = (max(((min((arr_2 [i_2 - 1]), (arr_2 [i_2 - 1])))), (arr_2 [i_2 - 2])));
                        arr_16 [i_0] = (((arr_2 [i_2 - 1]) * ((((arr_5 [i_0] [i_2] [i_3]) < (((arr_3 [1]) & (arr_8 [i_0] [i_2 + 1] [i_3]))))))));
                    }
                }
            }
        }
        var_18 = ((~((((~(arr_1 [i_0]))) ^ (arr_11 [i_0] [10] [i_0] [10])))));
        arr_17 [i_0] [i_0] = (((54557 && 54536) && ((!(arr_11 [i_0] [i_0] [i_0] [4])))));
    }
    var_19 = var_2;
    var_20 = (min(var_15, var_15));
    var_21 *= (((((((min(var_6, var_10))) ? var_13 : ((var_2 ? var_13 : var_5))))) ? var_6 : ((var_13 + (min(11006, 8))))));
    #pragma endscop
}
