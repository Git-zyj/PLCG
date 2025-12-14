/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_1, var_1));
    var_19 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] = (min(6151076803423235214, (arr_5 [i_1 + 1] [i_1 - 2] [i_1 - 1])));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_20 ^= (((arr_9 [i_0] [11] [i_2 - 1] [i_2 - 1] [i_4]) && ((((arr_13 [i_0] [i_1 - 2] [i_2] [i_3] [i_3]) >> (var_11 - 1345062735))))));
                                var_21 = (arr_9 [i_0] [i_1 - 3] [i_2 + 1] [3] [4]);
                                var_22 = (min(var_22, ((-(arr_9 [i_0] [i_1 - 3] [i_2] [i_3] [i_4])))));
                            }
                        }
                    }
                    var_23 = (((arr_14 [i_2 + 1] [i_2 - 1] [i_1 + 2] [i_1 - 2] [i_1 + 1] [i_1 - 3]) ? (arr_10 [i_0] [i_0] [i_1] [i_1 + 1] [i_2 + 2]) : (var_13 && 15221671551845006889)));
                    arr_16 [i_2] [i_1] [i_1 + 2] [i_0] = (((((219 ? 8143033951774281719 : -12380))) ? (-1392055746 && 2147483647) : (-1176155302 || 252)));
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_24 = 16028;
                            arr_24 [i_6] [9] [i_5] [0] [6] [i_0] = (-(((arr_7 [i_0]) ? (arr_7 [i_6]) : (arr_19 [i_6] [i_5] [i_0]))));
                            arr_25 [i_0] [i_1] [i_5] [i_6] = ((((((arr_22 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_5] [14] [i_6]) - (arr_22 [i_1 - 2] [i_1 + 2] [i_5] [i_5] [i_1 + 2] [i_6])))) ? ((39247 ? 3430513359 : -8143033951774281705)) : ((((arr_22 [i_1] [i_1 + 1] [i_6] [i_1] [i_6] [i_6]) ? var_8 : 4275575470)))));
                            arr_26 [i_0] [i_1] [i_5] [i_0] = max(var_13, (arr_9 [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_1] [i_1 - 3]));
                        }
                    }
                }
            }
        }
    }
    var_25 = (!var_10);
    #pragma endscop
}
