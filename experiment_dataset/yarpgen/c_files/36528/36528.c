/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= var_18;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_20 &= ((arr_3 [i_0]) == 14409);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_21 = (max(var_21, ((((arr_5 [i_0] [i_2] [i_2]) ? (arr_6 [1] [i_2] [1] [i_3]) : (((-(arr_6 [14] [i_2] [14] [i_3])))))))));
                            var_22 = (max(var_22, (((((min((arr_3 [i_0 - 1]), (arr_3 [i_0 + 2])))) ? (((var_9 ? (arr_4 [i_3] [i_0 - 1] [i_3]) : (arr_4 [i_3] [18] [i_3])))) : (arr_1 [i_0]))))));
                            var_23 = (min(var_23, ((min((arr_6 [16] [i_3] [i_2] [2]), (((((((arr_7 [i_3]) ? var_9 : (arr_6 [i_0] [i_3] [i_2] [8])))) ? (arr_7 [i_2]) : (~var_4)))))))));
                            var_24 = (!var_3);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
