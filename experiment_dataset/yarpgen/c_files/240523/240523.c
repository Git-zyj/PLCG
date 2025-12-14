/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((min((2048791905 <= 2251799813685184), (-1 * 26)))) > (!1330331703)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_14 *= (max((((!68) && 175)), (((!3167758493642809192) && (!77)))));
                    var_15 = 4194303;
                }
            }
        }
    }
    #pragma endscop
}
