/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -321038386;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                var_12 |= (-(arr_1 [i_1 + 1]));
                var_13 = (min(var_13, -321038388));
                var_14 &= ((!(arr_1 [i_1])));
            }
        }
    }
    var_15 = (((((321038371 ? 321038387 : -321038386))) % 2261386778));
    var_16 |= (min(32767, 1));
    var_17 = (max((max(var_9, ((873529841 ? 1 : -1)))), var_2));
    #pragma endscop
}
