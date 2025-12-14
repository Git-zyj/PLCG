/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] = (min(-1706090733, ((24 / (arr_3 [i_0] [i_0] [i_0])))));
                var_10 *= arr_1 [i_0];
                arr_6 [i_0] [i_0] = ((arr_2 [i_0]) > (max(var_9, 4289992577)));
                arr_7 [i_0] [i_0] [i_0] = var_0;
            }
        }
    }
    var_11 = var_2;
    #pragma endscop
}
