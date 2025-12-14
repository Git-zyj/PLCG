/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -17451448556060672;
    var_15 |= var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_16 += ((((1 && (arr_3 [i_1]))) ? var_12 : ((((arr_0 [i_0]) == (arr_0 [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_17 = ((((max((arr_7 [9] [i_2 - 1]), (min((arr_1 [i_0]), 70))))) ? (((arr_1 [10]) % (arr_1 [i_0]))) : 1));
                            arr_12 [i_0] [i_1] [i_2] [i_0] [14] = ((-(arr_9 [i_0] [i_0] [i_0] [i_0])));
                            arr_13 [i_3] [15] [i_3] [9] [i_0] = (max((arr_3 [i_1]), (max(var_3, ((10 ? (arr_6 [2] [7]) : 1))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_0] = (max(35, (arr_17 [i_0] [i_0] [i_4] [i_0] [i_4])));
                            var_18 = var_9;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
