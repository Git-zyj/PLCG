/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = (((((18776 ? 1631082830 : 565925794))) ? 11663126214049952378 : (((11663126214049952378 ? 192 : 5049070166241105)))));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_7 [4] [i_1] = (min(32767, 33222));
            var_17 += ((((var_6 ? var_3 : 6783617859659599238)) >= var_1));
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_18 |= -var_2;
            arr_10 [i_0 + 1] [i_0 + 1] [i_2] = (arr_1 [i_0] [i_0]);
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            var_19 = (-9223372036854775807 - 1);
            var_20 = (min(var_20, (arr_2 [i_3])));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        {
                            arr_23 [i_0] [i_6] [i_3] [i_6] [i_0] &= 11663126214049952378;
                            var_21 = (min((max((arr_8 [i_3] [i_3]), (arr_21 [i_0 + 1] [i_0] [i_3]))), (((var_13 ? (arr_1 [i_0 + 1] [i_0 - 1]) : (arr_21 [i_0 + 1] [i_0 - 1] [i_3]))))));
                            var_22 |= -11663126214049952378;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 18;i_8 += 1)
                {
                    {
                        var_23 -= (min(((((min(var_16, 11663126214049952378)) != -1424052921))), (((-(arr_31 [i_0 - 1] [i_0 + 1] [i_0 + 1]))))));
                        arr_32 [i_0] [i_3] [19] [i_3] = var_10;
                        arr_33 [i_0] [i_3] [6] [i_8] &= ((-127 ? ((((134217728 ? 3314934771 : var_8)) | 6783617859659599238)) : (~33222)));
                        var_24 &= ((-((~(max(-1449903852717524249, 0))))));
                    }
                }
            }
        }
    }
    var_25 = var_13;
    #pragma endscop
}
