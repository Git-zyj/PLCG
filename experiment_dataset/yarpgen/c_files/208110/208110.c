/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_10 -= (var_6 > (((arr_10 [20] [i_0 + 3] [i_0 + 3] [i_1]) * (((var_7 == (arr_10 [i_0 + 1] [i_0 + 1] [10] [i_1])))))));
                    arr_12 [i_2] = ((var_7 - ((((!var_6) < (-127 - 1))))));
                }
            }
        }
    }
    var_11 = (!var_4);
    #pragma endscop
}
