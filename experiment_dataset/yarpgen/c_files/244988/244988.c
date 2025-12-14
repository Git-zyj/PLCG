/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(1, 32406));
    var_11 = ((((min(-9474, 15))) ? -var_2 : (((-1 ? 7 : -1)))));
    var_12 = (min(var_12, var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_8 [i_0] = ((max(-6276177313156042929, 65535)));
                arr_9 [i_0] [i_1] [i_1] = 1;
                arr_10 [i_0] = 31;
                var_13 ^= ((~((((65535 && -1574438001) && (!35223))))));
            }
        }
    }
    #pragma endscop
}
