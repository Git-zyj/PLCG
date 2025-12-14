/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 -= (((((arr_5 [i_2] [7] [i_1] [i_2]) >> ((((9336844493928134133 ? 9109899579781417483 : 9336844493928134133)) - 9109899579781417462)))) + (1 / 17493259932233758217)));
                    arr_7 [i_0] [i_0] [1] = (32744 | -29687);
                    var_15 = (min(var_15, ((min((~-29686), 1)))));
                    arr_8 [i_0] [i_0] [i_0 + 1] [1] = ((~(~18900)));
                }
            }
        }
    }
    var_16 += (~91);
    #pragma endscop
}
