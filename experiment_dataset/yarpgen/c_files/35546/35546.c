/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((max(var_6, var_11)) / (max(var_0, var_6)))) * -109));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            arr_4 [i_0] [i_1] [i_0] = (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])));
            var_14 ^= var_3;
            var_15 = (arr_1 [i_0]);
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    arr_10 [i_0] [i_2] [i_2] |= (((arr_7 [i_3] [i_2] [i_3]) > var_9));
                    var_16 = (((arr_2 [i_0]) && var_1));
                    var_17 |= (((arr_7 [i_0] [i_2] [i_3]) & var_0));
                }
            }
        }

        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_18 = ((6 ? (arr_6 [i_0]) : (arr_3 [i_0] [i_4])));
            var_19 = ((~(arr_2 [i_0])));
            var_20 += (arr_1 [i_4]);
            var_21 = (arr_7 [i_0] [i_0] [i_4]);
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            var_22 -= (((arr_2 [16]) >> (-9819 + 9827)));
            var_23 = (min(var_23, ((((arr_9 [i_0] [i_0] [1]) ? 2096896 : (arr_0 [18]))))));
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        var_24 = (min(var_24, var_10));
        var_25 = ((arr_18 [i_6]) && (arr_18 [i_6]));
    }
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        var_26 -= (((((~((min(var_9, (arr_17 [i_7]))))))) ? ((max((arr_17 [i_7]), (arr_9 [i_7] [i_7] [i_7])))) : (((-66 | -14754) & (arr_6 [i_7])))));
        arr_21 [i_7] = ((((arr_20 [i_7]) ? (arr_17 [i_7]) : (arr_17 [i_7]))));
        var_27 &= ((-((min((arr_0 [i_7]), (arr_0 [i_7]))))));
        var_28 = (0 & -1576240747);
    }
    #pragma endscop
}
