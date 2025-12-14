/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= 7103463506970538305;
    var_21 = (min(var_21, 2326511851));
    var_22 = ((((min((~var_11), 1))) ? ((max(2625818106, 1))) : (((((83 ? 8238 : var_9))) | 7103463506970538304))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_23 -= (max((max(((8238 ? 1354577037709556340 : 120)), 201)), ((max(139, 87)))));
                arr_5 [i_0] [i_0] [i_0] = 255;
            }
        }
    }
    #pragma endscop
}
