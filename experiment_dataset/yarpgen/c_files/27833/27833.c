/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -5282;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [1] = ((!(arr_0 [i_0])));
                var_12 = (min(((~(!-37))), ((min((!var_0), (0 || var_8))))));
                var_13 = (((!1) || ((min(var_1, (arr_2 [i_1 - 2] [i_1 - 1] [i_1 + 1]))))));
            }
        }
    }
    #pragma endscop
}
