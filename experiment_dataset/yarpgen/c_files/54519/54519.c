/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [14] = (max(((((arr_0 [i_0]) * (arr_0 [i_0])))), (min((arr_1 [i_0 - 1] [i_1 + 1]), ((var_10 ? var_9 : (arr_1 [i_0] [i_1])))))));
                var_18 += (var_10 ? ((((arr_6 [i_0]) ? (max((arr_0 [6]), 261888)) : (arr_0 [0])))) : (arr_6 [i_0]));
                arr_8 [i_0] [i_1 - 1] [17] = ((((30720 < (arr_3 [i_0 + 2])))));
                var_19 = var_12;
            }
        }
    }
    #pragma endscop
}
