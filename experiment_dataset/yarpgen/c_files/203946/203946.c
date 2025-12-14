/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_18 = (arr_2 [10] [i_0]);
        arr_3 [0] [0] |= ((2384297802 ? 254 : 11));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 9;i_3 += 1)
                {
                    {
                        arr_13 [i_3] [i_3] [i_0] [i_1] [i_0] = (-(max((arr_0 [i_0]), var_5)));
                        var_19 = -2302411837;
                    }
                }
            }
        }
        var_20 ^= 356221760;
    }
    var_21 = min(var_7, (((var_0 ? var_0 : (!var_3)))));
    #pragma endscop
}
