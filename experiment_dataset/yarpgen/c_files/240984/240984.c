/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_19 += var_16;
                arr_4 [i_0] [16] [i_1] = (((-5 ? -18 : (arr_3 [i_1] [i_0]))));
                arr_5 [i_1] [i_1] = (((arr_3 [i_0] [i_0]) ? (min((~23048), (((arr_3 [i_0] [12]) ? 7906951360188764742 : 1032712988)))) : (arr_3 [i_0] [i_0])));
            }
        }
    }
    #pragma endscop
}
