/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_1] = ((!(((var_13 % (arr_3 [i_1] [i_1]))))));
                    var_15 -= ((9223372036854775807 ? 110 : 53912));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_16 ^= ((min(var_5, 594588021022225726)));
                        arr_9 [i_0] [i_0] [i_0] [i_1] [i_2 - 3] = ((((arr_0 [i_0] [i_0]) ? ((18446744073709551590 ? 17852156052687325899 : 594588021022225726)) : (arr_4 [i_1] [i_1]))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_1] [i_0] [i_5 - 1] |= (((((arr_4 [i_0] [i_4]) ? 17599 : (arr_4 [i_0] [i_4])))) ? (!17852156052687325865) : ((-(arr_4 [i_0] [i_1]))));
                                arr_16 [i_1] [i_1] [i_2 + 1] [i_4] = 17852156052687325865;
                                arr_17 [i_1] [i_1] [i_2 + 1] [i_2 + 1] [i_5 - 1] = (max((((~(arr_12 [i_0] [i_0] [i_2 + 2] [i_0] [i_1] [i_5 - 1])))), (((((var_6 ? var_3 : 4294967294))) ? ((var_10 ? var_11 : var_4)) : (arr_0 [i_2] [i_5 - 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (((17852156052687325854 ? 157 : 17852156052687325860)));
    #pragma endscop
}
