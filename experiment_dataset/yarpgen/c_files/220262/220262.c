/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 = 4294967289;
        var_21 = (max(var_21, var_4));
        arr_2 [3] [i_0] = (+((min((arr_1 [i_0] [i_0]), 192))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_7 [i_1] = var_10;
        arr_8 [1] [i_1] = (((~0) ? (arr_4 [i_1]) : 16777215));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_22 = (max(var_22, var_3));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 22;i_4 += 1)
            {
                {
                    var_23 = (min(((1 ? 32767 : 4278190080)), var_18));
                    var_24 = (min(var_24, (((6804272693565307263 >> (4278190057 - 4278190038))))));
                    var_25 = (max(var_25, (~4278190078)));
                }
            }
        }
    }
    var_26 = ((min((min(var_14, var_2)), var_14)));
    #pragma endscop
}
