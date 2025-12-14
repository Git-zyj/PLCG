/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 ^= (arr_2 [9] [i_0]);
        var_17 = (arr_1 [4]);
        var_18 = ((((((arr_0 [i_0]) ? 1 : 140462610448384))) && 140462610448413));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        var_19 &= 244;
                        var_20 = (min(var_20, (arr_5 [i_0] [i_0] [i_2] [i_3])));
                        arr_10 [6] [i_1] [i_1] [i_2] [i_3 - 1] [i_1] = (var_11 % 10);
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 8;i_6 += 1)
                {
                    {
                        var_21 = (((!115553079) ? (!var_4) : ((32767 ? (arr_14 [i_0] [i_5] [i_6]) : (arr_8 [i_0] [i_0] [i_4] [i_5 - 2] [i_5] [i_6 - 2])))));
                        arr_20 [i_0] [i_4] [i_5 - 2] [i_6 + 2] [i_4] = ((+(((arr_3 [i_6] [i_5]) ? (arr_11 [i_5] [i_6]) : 5437756668824425333))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            {
                var_22 = (min(var_22, ((min(var_3, (arr_23 [i_8] [i_8]))))));
                var_23 = (((arr_21 [i_7]) ? (max((arr_23 [i_7] [i_8]), (max(0, (arr_24 [5] [i_8]))))) : 53324));
            }
        }
    }
    var_24 = (min(var_24, var_7));
    #pragma endscop
}
