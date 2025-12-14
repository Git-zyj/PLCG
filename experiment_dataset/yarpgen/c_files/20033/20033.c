/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, ((((((arr_3 [i_0 - 1]) * (arr_3 [i_0 - 1]))) & (!0))))));
                    arr_7 [7] [i_2] [i_1] [i_0] = -9223372036854775792;

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_10 [2] [i_2 + 3] [i_1] [i_0 - 1] = (((max(((~(arr_8 [i_0] [i_1] [i_2 - 1]))), (arr_4 [2] [i_2 + 3] [i_2 - 2]))) * ((((arr_1 [i_2]) ? ((-(arr_2 [i_2] [i_2 - 1]))) : (((216 < (arr_0 [8])))))))));

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_21 = ((var_15 / (((((((arr_5 [i_4] [6] [i_2 + 1]) ^ var_14))) ? ((var_7 ? (arr_5 [i_0 - 1] [i_1] [i_2 + 3]) : (arr_12 [9] [i_3] [i_1]))) : (!4294967284))))));
                            var_22 |= ((max(-215, (max(8288804493305583351, var_6)))));
                        }
                        var_23 = var_1;
                        arr_13 [i_0] [6] [i_2] [i_3] = (~var_17);
                    }
                    var_24 *= arr_0 [i_0 - 1];
                }
            }
        }
    }
    var_25 = (max(var_25, var_0));
    #pragma endscop
}
