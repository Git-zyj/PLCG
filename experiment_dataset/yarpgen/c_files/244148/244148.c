/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= (~1002205935);
    var_19 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] = 7749586869598059293;
                var_20 = ((((!79) ? 7749586869598059271 : ((48184 ? 255 : 10697157204111492338)))));
            }
        }
    }
    #pragma endscop
}
