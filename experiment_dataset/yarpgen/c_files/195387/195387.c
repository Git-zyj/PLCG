/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (min((min((min(-4286513711554756818, (-32767 - 1))), var_1)), 4286513711554756807))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_15 += -117;
                    arr_10 [i_0] [i_1] [i_2] = ((-4286513711554756831 ? ((min((max(-4286513711554756818, -126)), ((max((-32767 - 1), 14158)))))) : (~7875005465266686427)));
                    var_16 ^= (max(114, 51372));
                }
            }
        }
    }
    var_17 = (min(-var_2, (~2672277183)));
    #pragma endscop
}
