/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_0] = (max((~var_12), (arr_1 [i_1])));
                arr_7 [i_0 - 3] [i_1] = ((!(((1 - (arr_3 [i_1 + 1] [i_1 - 1]))))));
                arr_8 [i_1] [i_1 - 1] = ((min((min((arr_4 [i_0]), -31078)), 1)));
                arr_9 [i_0] [i_0] [i_1] = -32534;
            }
        }
    }
    var_19 = (var_1 || var_5);
    var_20 = max((((var_10 ? ((max(var_15, 1))) : var_3))), var_14);
    #pragma endscop
}
