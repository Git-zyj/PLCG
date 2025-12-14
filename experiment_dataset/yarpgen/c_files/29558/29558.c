/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = (~5671758847264200262);
                var_19 = ((-(max(((var_11 ? 17750547512931370011 : (arr_4 [11] [i_1] [i_1]))), (arr_5 [i_0] [i_1] [i_1])))));
            }
        }
    }
    #pragma endscop
}
