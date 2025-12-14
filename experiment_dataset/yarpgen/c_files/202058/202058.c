/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                var_19 = (min(var_19, 1939104848263153849));
                var_20 = (max(var_20, ((max(61, ((min((arr_1 [i_1 + 1] [i_1 - 1]), (arr_1 [i_1 + 1] [i_1 - 1])))))))));
                arr_4 [12] [14] = ((~((min((arr_3 [i_1 + 1] [16]), (arr_3 [i_1 - 1] [7]))))));
            }
        }
    }
    var_21 = 1207412041;
    #pragma endscop
}
