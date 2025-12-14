/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((~var_8) ^ 1)) ^ var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = (((max((arr_2 [i_1]), (arr_0 [i_1 + 1]))) >> (arr_5 [i_1] [i_1] [i_1 + 1])));
                var_14 = (arr_0 [i_0]);
                arr_6 [i_0] [i_1] [i_1] = arr_1 [i_0];
            }
        }
    }
    #pragma endscop
}
