/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (!var_12);
                                var_20 = (((-18 / 1) == var_15));
                                var_21 ^= ((((!(var_12 || 152))) ? 10 : (((!var_15) * var_8))));
                            }
                        }
                    }
                    var_22 = (!var_17);
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_23 = (max(var_23, (((((((arr_9 [i_1 - 2] [i_2] [i_2 - 1] [i_1 - 2] [1] [i_5 - 1] [i_6]) ? var_1 : var_16))) ? 12596690734283435692 : (arr_9 [i_1 - 1] [i_1] [i_2 + 1] [i_2 + 1] [i_1] [i_5 - 1] [i_6]))))));
                                arr_17 [i_0] [i_0] [i_1 + 1] [i_0] [i_2 - 1] [i_5] [i_1] = var_19;
                                arr_18 [i_0] [i_0] [i_0] [i_1] [i_0] = (!var_13);
                            }
                        }
                    }
                    var_24 ^= 11392868677856351118;
                }
            }
        }
    }
    var_25 ^= -1813683888;
    var_26 = (var_13 ^ -28076);
    #pragma endscop
}
