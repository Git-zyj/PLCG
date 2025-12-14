/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_10 = (max(50922, 4023904767));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_7 [i_0] = ((!(((var_5 ? 1001163330 : 0)))));
                    var_11 = max((((((min(1, (arr_0 [i_0] [i_0]))))) - -1)), ((min(0, -13145))));
                }
            }
        }
    }
    var_12 = var_7;
    #pragma endscop
}
