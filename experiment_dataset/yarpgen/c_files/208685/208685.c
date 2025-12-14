/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, 6901862505712180762));
    var_20 = 6901862505712180770;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_0] = 53741;
                var_21 = (min(var_21, -6901862505712180763));
                arr_8 [7] [i_0] = -6901862505712180758;
                var_22 = (min(var_22, (!0)));
            }
        }
    }
    #pragma endscop
}
