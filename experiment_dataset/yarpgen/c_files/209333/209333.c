/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((max(-7517138751334336785, 643691784)), ((max((8104 < var_5), var_11)))));
    var_15 = (max(((((!var_1) / var_8))), (min(var_11, (-643691784 / var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = var_1;
                var_16 = (arr_0 [i_1] [i_0 + 1]);
                arr_5 [i_0] = (~var_7);
            }
        }
    }
    var_17 = var_13;
    #pragma endscop
}
