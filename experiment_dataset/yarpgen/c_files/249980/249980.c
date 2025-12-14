/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_12 = (max(var_12, ((!(((~9) && (!204)))))));
                                var_13 = (max(var_13, (((~(((204 >= (arr_10 [i_4] [i_4 - 2] [i_4 + 4] [i_3] [12])))))))));
                            }
                        }
                    }
                    arr_12 [i_1] [i_1] = ((~(((((var_9 ? 1532015162953220771 : (arr_4 [i_1] [i_1])))) ? 225 : 1))));
                    var_14 -= (((0 <= var_1) <= (~var_1)));
                    var_15 += (((!var_1) ? (16914728910756330849 == -382) : (((arr_6 [1] [i_1] [i_0 + 1]) % (arr_6 [22] [18] [i_0 + 1])))));
                }
            }
        }
    }
    var_16 = (min(var_5, (var_6 + 536325168)));
    #pragma endscop
}
