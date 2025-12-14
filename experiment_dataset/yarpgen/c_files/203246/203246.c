/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 3071249803;
    var_11 = var_7;

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0 + 2] = -var_5;
        var_12 *= ((((3071249803 ^ (arr_1 [i_0 + 2] [i_0]))) + (arr_1 [i_0] [i_0])));

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            var_13 = arr_0 [1];
            var_14 = (min(var_14, (arr_3 [i_1] [i_1])));
        }
        var_15 = (arr_1 [i_0] [i_0]);
    }
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        arr_7 [i_2] = (~var_0);
        var_16 = (((arr_3 [i_2 + 1] [i_2 + 1]) != var_8));
        arr_8 [i_2] = (min(((-8727206880640435013 ? 236 : 3071249818)), var_8));
    }
    for (int i_3 = 1; i_3 < 19;i_3 += 1)
    {
        var_17 = (min(var_17, -1));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 21;i_5 += 1)
            {
                {
                    arr_17 [i_3] [i_3] = (((min((arr_15 [i_3]), 8124745995074525320))) ? (min(((5376450331564720576 ? 0 : -1789165919597467339)), (86 | var_4))) : ((((arr_14 [i_3 + 2] [i_3 + 2] [i_3]) / (arr_10 [i_3])))));
                    var_18 += ((((max(11, ((-22 ? (arr_11 [i_4] [i_5]) : 2120484262))))) ? 127 : (((((~(arr_12 [1] [1])))) ? (min(907101562, 32767)) : (arr_16 [18])))));
                }
            }
        }
        arr_18 [i_3] = var_3;
    }
    for (int i_6 = 1; i_6 < 13;i_6 += 1)
    {
        var_19 &= (max(-5376450331564720585, (arr_12 [i_6] [18])));
        var_20 = (max(var_20, (arr_16 [2])));
    }
    #pragma endscop
}
