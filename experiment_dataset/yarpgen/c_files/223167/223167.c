/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(16602369425469577016, 1));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_18 |= -0;
                                arr_14 [i_0 + 1] [i_1] [i_2] [i_0 + 1] [i_4] = (arr_3 [i_2]);
                                var_19 = (max(var_19, ((((((((max(-94, (arr_10 [1] [i_3] [i_1 - 2] [i_0 - 2])))) ? 10 : (arr_4 [i_0])))) ? (min(((min((arr_5 [i_0] [i_3] [i_4]), (arr_1 [i_0 - 1])))), (max((arr_5 [8] [21] [3]), (arr_0 [i_2]))))) : (((min(12, (arr_8 [i_0] [i_0] [i_3] [i_4]))))))))));
                                var_20 = (((((min(1, -77)))) ? (arr_10 [i_0 - 1] [i_1 - 1] [i_2] [i_4 - 2]) : -81));
                            }
                        }
                    }
                    arr_15 [i_0] [i_1] [i_1 - 2] [i_2] = ((!((max((arr_4 [i_0]), (arr_6 [i_0] [i_1 + 1] [i_0]))))));
                    arr_16 [i_2] [i_2] = (arr_4 [i_1]);
                    arr_17 [i_2] [i_1] [i_1 + 2] [i_0 - 2] = (arr_6 [i_0 - 3] [1] [i_2]);
                }
            }
        }
    }
    var_21 = (min(1, var_11));
    #pragma endscop
}
