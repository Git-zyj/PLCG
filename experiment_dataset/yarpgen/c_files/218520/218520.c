/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!(((-((77 ? var_3 : var_6)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = max(var_3, (!var_3));
                arr_5 [i_1] [i_1] = 18856;
                arr_6 [i_0] [i_1] = ((-((-1 ? (arr_1 [i_1]) : (arr_1 [i_1])))));
                var_13 = (max((arr_1 [i_0 + 1]), 65535));
            }
        }
    }
    #pragma endscop
}
