/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_1] = (max((var_18 && -2952), ((var_0 ? var_4 : (arr_3 [i_1])))));
                arr_6 [i_0] [i_0] [i_1] = ((((((arr_2 [i_1] [i_1]) & var_17))) || ((min(((var_15 ? 1 : var_16)), (!1))))));
                var_20 = ((((min((arr_3 [i_1]), (arr_3 [i_1])))) | (((arr_0 [i_0]) ? (((2948 ? 67108863 : 1))) : ((var_15 ? var_8 : (arr_1 [13])))))));
                var_21 |= ((-(((~(arr_0 [i_0]))))));
                var_22 += (arr_3 [i_0]);
            }
        }
    }
    var_23 = 1;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    var_24 = ((+(max((~1954600394), var_1))));

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_25 = (max(var_25, (((-var_9 << ((((((min(var_4, var_10))) ? (((~(arr_3 [i_4])))) : ((~(arr_13 [i_2]))))) - 1206473806)))))));
                        var_26 += ((((min((!var_12), var_6))) ? (((arr_2 [i_4] [i_5]) ? (arr_8 [i_3]) : (arr_2 [i_3] [i_3]))) : (((-2 ? var_8 : (~var_6))))));
                    }
                    for (int i_6 = 2; i_6 < 14;i_6 += 1)
                    {
                        arr_20 [i_2] [i_2] [i_4] [8] [i_2] [i_2] = ((~(max((((!(arr_18 [i_2] [i_6] [i_4] [1] [i_3] [4])))), (((arr_3 [i_3]) + 0))))));
                        arr_21 [i_3] [i_3] [i_3] = arr_19 [i_2] [i_2] [i_6 - 2] [i_6] [i_2];
                        var_27 = (min(var_27, (((!((min((arr_16 [i_2] [i_3] [8] [8] [i_6 - 2] [i_2]), (arr_16 [i_2] [i_3] [i_3] [i_3] [i_6 - 1] [i_2])))))))));
                        var_28 = (((arr_9 [i_2] [i_2] [i_2]) ? ((min((arr_18 [i_6 - 2] [i_6 - 2] [i_6 - 2] [i_6] [i_6 - 2] [i_6]), -1))) : var_6));
                        arr_22 [i_2] [i_3] [i_4] [i_6] = min(-2931, 1);
                    }
                }
            }
        }
    }
    var_29 = (min(var_29, (!var_1)));
    #pragma endscop
}
