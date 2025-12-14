/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_12, var_6));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_16 = arr_7 [i_0] [i_0];
                        var_17 = (((arr_0 [i_0]) & (((-1 || (((252 ? var_8 : 0))))))));
                        arr_8 [i_0 - 1] = ((max((arr_2 [i_0 - 1] [i_0 - 1]), 2147483630)));
                    }
                }
            }
        }
        arr_9 [i_0] [i_0] = (arr_5 [i_0 - 1] [i_0]);
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_18 = (max(var_18, ((36528 ^ ((((((arr_12 [i_4]) ^ var_11))) ? (1 & 537041554) : ((-421660383 & (arr_5 [i_4] [i_4])))))))));
        arr_14 [i_4] = (min(122, 1970892671));
        arr_15 [i_4] = (arr_6 [i_4]);
    }
    #pragma endscop
}
