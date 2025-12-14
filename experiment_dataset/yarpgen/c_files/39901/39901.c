/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0 - 1] [i_1] = (-2147483647 - 1);
                var_12 = ((((arr_3 [i_0] [i_1] [4]) * (min((arr_3 [i_0] [16] [7]), (arr_0 [i_0]))))));
            }
        }
    }
    var_13 = var_2;
    var_14 -= 29566;
    #pragma endscop
}
