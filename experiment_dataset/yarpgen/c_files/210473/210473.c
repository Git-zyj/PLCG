/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (-3467549382150867014 | -3467549382150867016);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_1] = (825050973 + -825050974);
                    arr_8 [i_1] [i_0] [i_2] [i_1] = ((((min((max(-3467549382150866989, 825050973)), -825050973))) / ((-69 ? 15856576980178649087 : (max(-31580, 1769870036453582667))))));
                }
            }
        }
    }
    #pragma endscop
}
