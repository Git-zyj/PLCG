/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_8 - 27040);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (min((min(27035, (arr_1 [i_0 - 3]))), ((65526 / ((max(1, -107)))))));
                arr_7 [i_1] = (arr_4 [i_0] [i_1] [i_1]);
                var_12 = ((((arr_4 [i_0] [i_1] [i_1 + 1]) >> (((arr_0 [i_0 - 3]) - 19898)))));
            }
        }
    }
    #pragma endscop
}
