/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((var_12 ? 0 : (max(var_16, var_13)))), 8463733567710691260));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_19 = (((~var_16) * 994400271));
                var_20 = 2119284082;
                var_21 = (max(((max((arr_4 [i_0] [i_0]), (arr_0 [i_0] [i_1])))), ((max((arr_2 [i_1]), (((arr_3 [i_0] [i_0] [i_0]) & 24260)))))));
                var_22 = ((-0 / ((((arr_2 [i_0]) - (((arr_4 [i_0] [i_0]) ? (arr_5 [i_0] [3] [i_1]) : (arr_3 [15] [i_0] [11]))))))));
            }
        }
    }
    #pragma endscop
}
