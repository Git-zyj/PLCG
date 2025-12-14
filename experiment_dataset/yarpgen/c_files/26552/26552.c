/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_16 = (max(var_16, ((min(4, (-15 > 113807515))))));
        var_17 *= ((~(arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_18 = (((arr_3 [i_1]) ? -8887140998324792592 : (arr_3 [i_1])));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    {
                        arr_12 [i_1] [i_2] [i_2] = (arr_3 [i_1]);
                        var_19 = ((16320 ? ((16320 ? -8595121387579695457 : 0)) : (arr_6 [i_1] [1] [i_1] [i_1])));
                    }
                }
            }
        }
    }
    var_20 = (max(var_20, (((636959668 ? 32767 : 636959671)))));
    #pragma endscop
}
