/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 169;
    var_18 = var_7;
    var_19 = (max(var_19, (((((((((var_9 ? var_8 : 20660))) ? var_1 : 203906806))) ? (-20632 & 1) : (max(203906820, 97)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_20 = ((203906806 > ((((arr_3 [i_1 + 1] [i_1 + 1] [0]) ? (arr_1 [i_0]) : (((arr_3 [i_0] [i_0] [i_1 + 1]) ? var_15 : var_11)))))));
                var_21 ^= max((max(var_9, ((158 ? 1 : 8217)))), var_7);
                var_22 ^= ((arr_2 [i_0] [i_0]) ? ((((min(var_2, var_13))) ? (((arr_3 [i_1] [8] [i_0]) ? var_5 : var_15)) : 38)) : ((var_7 ? (arr_1 [i_0]) : (38 - 8228))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_23 = (((-615224914 + 2147483647) << ((((((4091060475 ? var_6 : (arr_7 [i_2] [i_1 + 1] [i_1 + 1] [i_3]))))) - 12462))));
                            arr_11 [i_0] [i_0] [i_0] [i_3] = var_4;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
