/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [i_2] = (~1);
                    arr_9 [i_2] [16] [i_1] [i_2] = (arr_6 [i_2] [i_2] [i_0]);
                }
            }
        }
        var_11 = ((arr_0 [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : ((min((arr_2 [i_0] [i_0] [i_0]), var_10))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_12 ^= var_10;
        var_13 = ((((arr_11 [i_3] [i_3]) >> (-23236 + 23242))));
    }
    var_14 |= 0;
    var_15 += var_4;
    #pragma endscop
}
