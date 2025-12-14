/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_21 = (max(((~(arr_8 [i_0 + 2] [i_1] [i_2 + 1] [22] [i_1 - 1] [i_3 - 1]))), (7742391790560649500 > var_6)));
                                var_22 = (min(((~(-22073 && 107))), -22069));
                            }
                        }
                    }
                    arr_12 [i_0] [11] [i_2 + 2] = ((var_10 ? ((((arr_1 [i_0 + 1]) ^ var_18))) : (max((((arr_0 [i_0]) ? 8 : var_16)), ((((var_4 + 2147483647) >> 1)))))));
                    var_23 = (-(arr_3 [i_2 - 2] [i_2 - 2]));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 0;i_6 += 1)
            {
                {
                    arr_18 [15] [i_5] [i_6] = (arr_14 [i_0] [i_0 - 1]);
                    var_24 = ((min(var_14, (arr_9 [i_6] [1] [i_0 + 1] [15]))));
                    var_25 = (!((max(0, (arr_14 [i_6 + 1] [i_6 + 1])))));
                }
            }
        }
        var_26 = ((+((max((arr_16 [20] [12] [i_0 + 1]), (arr_16 [10] [i_0] [i_0 - 1]))))));
        arr_19 [i_0] = (((((min(1, 492743283)) ? 22060 : ((((arr_8 [21] [19] [i_0] [i_0 - 1] [i_0] [i_0]) || 9)))))));
    }
    #pragma endscop
}
