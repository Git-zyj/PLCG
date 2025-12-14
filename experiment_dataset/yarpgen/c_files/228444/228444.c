/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_15 = (((((var_6 || (arr_3 [18] [i_0 - 2] [i_1]))) ? ((max(-18, (arr_3 [i_0] [i_0] [i_1])))) : (8637 && var_2))));
                arr_4 [i_0] = (arr_0 [i_0]);
                arr_5 [22] = (((((!(((-76 | (-9223372036854775807 - 1))))))) << ((((((min(-22923, (arr_1 [i_0] [i_1]))))) != (arr_3 [i_0] [i_0] [i_0]))))));
            }
        }
    }
    var_16 = (min(var_16, (!-17183)));
    var_17 = (min(var_17, -2));
    #pragma endscop
}
