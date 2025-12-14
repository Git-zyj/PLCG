/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -777137493;
    var_17 = (max(0, ((20252 | (min(4176771452, 0))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = (max(var_18, ((min((max(872652382927625831, 4294967295)), (arr_0 [i_0 + 3]))))));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_8 [i_0] [i_0 + 2] [i_1] = (max((arr_4 [i_1] [i_1 - 1]), (arr_2 [i_0])));
                    arr_9 [i_1] [14] [i_2] [i_1] = (arr_1 [2]);
                }
                var_19 = (max(var_19, ((min(1919396277, ((max((min(0, (arr_6 [i_0] [i_1] [i_1 + 1] [10]))), (arr_6 [i_0] [i_0] [12] [6])))))))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_20 = (max(var_20, (arr_1 [i_4])));
                            arr_15 [i_1] [i_3] [i_0] [i_1] = -16777216;
                            var_21 += (arr_4 [i_3] [0]);
                        }
                    }
                }
                var_22 |= (min((arr_2 [19]), ((((arr_0 [i_0]) || ((max((arr_3 [i_1] [i_0 + 1]), -1))))))));
            }
        }
    }
    #pragma endscop
}
