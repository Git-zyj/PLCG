/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = var_2;
                arr_4 [i_0] [i_1] = ((var_9 ? (min((arr_0 [i_0]), -var_6)) : var_4));
                var_14 = (((arr_2 [i_0] [i_0] [i_1]) ? ((((((((arr_3 [i_0] [3]) ? (arr_1 [i_0]) : var_8))) || (arr_2 [i_0] [i_0] [i_1]))))) : ((var_1 ? (min(4246163571552612743, 4294967295)) : (arr_1 [i_0])))));
            }
        }
    }
    var_15 *= var_10;
    #pragma endscop
}
