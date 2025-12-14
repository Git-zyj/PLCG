/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_20 |= var_2;
                arr_6 [i_0] [i_1] [i_1] = max(21659, 11972897824851037906);
                arr_7 [i_0] [i_1] = var_19;
            }
        }
    }
    var_21 |= var_13;
    var_22 = var_12;
    #pragma endscop
}
