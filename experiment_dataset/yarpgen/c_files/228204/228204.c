/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = (min(var_12, (((var_13 ? (var_2 | 0) : 27127)))));
                var_16 = min(((((arr_0 [i_0]) ? 38397 : (arr_1 [i_0 + 3])))), (((!(27127 == var_1)))));
            }
        }
    }
    var_17 = (max(var_17, var_13));
    var_18 += (~var_8);
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    var_19 = ((((-((1435164209 & (arr_0 [i_4]))))) > ((max(((((arr_2 [i_2] [i_4]) >= 27127))), 309916728)))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_18 [i_2] [i_4] [i_6] = 2314;
                                var_20 = (((!76) || (arr_4 [i_3 + 1] [i_3 + 2])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
