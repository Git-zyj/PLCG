/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_2 > var_13);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                var_20 |= (min(((~((max(118, (arr_3 [i_0])))))), (!-119)));
                var_21 *= ((((118 / (arr_0 [i_1 - 3] [i_1 - 4]))) < (arr_3 [i_1 - 1])));
            }
        }
    }
    #pragma endscop
}
