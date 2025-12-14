/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_13 |= ((1661451863 ? (((arr_0 [i_1]) ? 42312 : -1661451880)) : ((~(arr_4 [i_0] [i_1])))));
                arr_5 [i_1] [i_1] = (max(-23, ((((arr_1 [i_0] [i_1]) != (arr_1 [i_0] [i_1]))))));
                var_14 = (max(var_14, (-857540055 + 19)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 4; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    var_15 = (min((arr_8 [i_2 + 3] [i_2]), (min((arr_8 [i_2 - 4] [i_2]), (arr_8 [i_2 + 3] [i_2])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_16 = -1661451864;
                                arr_18 [i_4] [i_4] [i_2] = (((((((504 ? 64354 : var_4))) ? (~65513) : ((127 % (arr_10 [i_2] [i_2]))))) % (((((arr_10 [i_2] [i_2]) ? (arr_15 [11] [i_4] [6] [i_2]) : (arr_11 [i_2] [i_4] [1]))) + 8))));
                                var_17 = (max(var_17, 23));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (min(((~(max(8803055825939367062, (-32767 - 1))))), -8803055825939367035));
    var_19 = (~52577);
    #pragma endscop
}
