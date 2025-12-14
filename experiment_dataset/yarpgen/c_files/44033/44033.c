/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_15 = ((((((max(var_9, var_8))) ? 112 : (~1))) - (((!(((~(arr_2 [i_0])))))))));
        var_16 += -3;
        arr_3 [i_0] [i_0] = ((80823856 ? (((0 >> (((((-2147483647 - 1) - -2147483623)) + 50))))) : ((-(arr_1 [i_0 + 1])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (arr_0 [10] [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_2] [i_3 - 1] = ((var_7 ? var_12 : (arr_0 [i_1] [i_2])));
                    arr_13 [i_1] = (-3 ? (0 <= 17) : (arr_8 [i_3 - 1]));
                    arr_14 [15] [i_1] [i_1] = (arr_4 [i_1]);
                }
            }
        }
        var_17 = (!(((1 ? 131040 : 27194))));
    }
    var_18 &= max(var_2, ((min(1, -1783848243))));
    #pragma endscop
}
