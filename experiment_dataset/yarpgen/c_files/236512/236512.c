/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_11 [i_3] [i_1 - 1] = ((arr_6 [i_0] [i_0] [i_2 + 3] [i_0]) ? (arr_7 [i_0] [i_1] [i_2 + 1] [i_3 + 1]) : (!var_1));
                            arr_12 [i_0] [i_1 - 1] [i_2 + 1] [i_3 + 1] [i_1 - 2] = (max((arr_5 [i_2] [1]), (((((-1761379819 ? var_0 : (arr_5 [i_0] [i_0])))) ? var_11 : ((-1226748604 ? var_13 : (arr_7 [i_3] [i_3] [i_2] [i_3])))))));
                        }
                    }
                }
                var_16 = (var_11 <= var_10);
                var_17 = (arr_4 [i_0]);
                arr_13 [i_0] [i_0] [i_0] |= ((max(1, (arr_10 [i_0] [i_0] [i_0] [i_1 - 2]))));
            }
        }
    }
    var_18 = ((var_9 ? (min((((12945 ? 1 : 203))), 11952)) : ((min(var_13, var_10)))));
    var_19 = (max(-var_6, -11970));
    #pragma endscop
}
