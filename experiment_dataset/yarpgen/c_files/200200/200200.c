/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 62426060;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [1] = (arr_5 [12] [i_0] [i_0]);
                var_11 = 62426060;
                var_12 = 62426062;
            }
        }
    }
    var_13 = (((-4459665150601527339 ? -1 : ((var_1 ? 29625 : var_8)))));
    var_14 = ((((-397431937 ? -2147483622 : 18095734163610440949))));
    #pragma endscop
}
