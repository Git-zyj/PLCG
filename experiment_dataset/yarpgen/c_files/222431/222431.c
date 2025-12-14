/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [23] = (((((228964276 ? var_8 : (arr_0 [i_0] [i_0])))) ? (var_7 ^ var_10) : (arr_0 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 24;i_2 += 1)
            {
                {
                    arr_9 [i_0] = (((((((arr_8 [i_0] [i_1] [i_0] [i_2]) != 4286578688)))) - (arr_4 [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_16 = ((-(arr_6 [i_2] [i_2] [i_2] [1])));
                                arr_15 [i_2] [i_3] [i_2] [i_1] [i_0] = ((~(arr_8 [4] [4] [i_2] [i_2 + 1])));
                                var_17 = ((~(((arr_8 [i_4] [i_0] [i_2] [i_0]) ? var_3 : var_0))));
                                var_18 ^= (!72057594037927936);
                                var_19 = (min(var_19, -var_5));
                            }
                        }
                    }
                    var_20 += (arr_1 [i_2]);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 17;i_8 += 1)
                {
                    {
                        var_21 = (max(var_21, var_5));
                        var_22 += 4066003020;
                    }
                }
            }
        }
        arr_26 [i_5] = var_4;
        var_23 += (((arr_5 [i_5 + 1] [i_5 - 1]) ? var_6 : 5855562077249668911));
        arr_27 [i_5] = (((arr_5 [i_5] [1]) ? (arr_0 [i_5] [i_5 + 1]) : var_10));
    }
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        var_24 = ((((min(18374686479671623679, 72057594037927937))) ? ((~((4286578660 - (arr_1 [21]))))) : ((var_7 ? (var_5 / 66977792) : (((min(985, (arr_0 [i_9] [i_9])))))))));
        var_25 = (max(((((min(var_3, 6478027504273348202)) < ((min((arr_1 [i_9]), (arr_11 [i_9] [i_9] [i_9] [i_9] [i_9]))))))), (arr_10 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])));
    }
    var_26 &= var_14;
    var_27 = ((max(-var_2, ((5855562077249668911 ? var_8 : var_12)))));
    var_28 = ((((((var_5 == var_15) % var_15))) != (((126100789566373888 ? 7393422461508618944 : var_1)))));
    #pragma endscop
}
