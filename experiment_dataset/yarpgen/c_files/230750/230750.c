/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, (((min((arr_0 [i_1 - 4] [i_1 - 1]), (~8599848603056129792))) >> (((min(var_8, (8191527778368560795 | var_9))) - 8642398742802022124))))));
                    arr_6 [i_2] [i_1] [i_1] = (5647017488868724253 | 31);
                }
            }
        }
    }
    var_13 = 2305843000623759360;
    #pragma endscop
}
