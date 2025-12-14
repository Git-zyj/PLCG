/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((!-16773120) ? ((min(-249070059, var_3))) : 8191));
    var_16 = var_12;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_17 = (max(var_17, ((max((max((max((arr_1 [i_0] [10]), 12499)), (arr_0 [i_0]))), ((((~1) >= (((arr_0 [i_0]) ^ var_4))))))))));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_18 = (--1);
            var_19 = (1 > 12496);
        }
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_20 = (min(var_20, (((~(max(2465449997, (arr_9 [i_3]))))))));
            arr_10 [i_2] [i_2] = (((((arr_4 [i_2] [i_2]) ? 1953279456 : (max(12507695578980840573, -52))))) ? ((max(1953279456, (arr_8 [i_2] [i_3] [i_3])))) : 1991677606);
            /* LoopNest 3 */
            for (int i_4 = 3; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_21 += arr_9 [i_2];
                            var_22 += (arr_16 [i_2] [i_5] [i_4] [i_5] [2]);
                            var_23 = (arr_8 [i_2] [i_4 - 3] [i_2]);
                            arr_17 [i_5] [i_5] [i_5] [i_5] [0] [i_5 - 3] |= ((~(((arr_11 [i_5] [i_3] [i_3] [i_3]) ? (arr_15 [i_6 + 2] [6] [i_4 - 1] [i_6 + 2] [i_6] [i_5 - 1] [i_4]) : var_6))));
                        }
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 0;i_7 += 1)
        {
            arr_20 [i_2] = ((max((min(var_4, (arr_4 [i_2] [i_2]))), (arr_7 [i_7 + 1] [i_7]))) % (((max(((max((arr_16 [14] [i_2] [i_2] [i_2] [i_2]), 1))), (min(0, (arr_11 [i_2] [i_2] [i_7 + 1] [i_7]))))))));
            var_24 += (((max((arr_18 [i_7] [i_7 + 1]), var_2))) ? 52 : (((!(arr_11 [10] [i_7] [i_7 + 1] [i_2])))));
        }
        arr_21 [i_2] [i_2] = (((~(arr_14 [i_2]))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        var_25 = (((((33 ? -1252925396 : (arr_23 [i_8])))) ? 1 : 1817270483));
        arr_24 [i_8] = (753629803 && 1);
        var_26 |= ((var_10 ? 204 : ((((arr_23 [i_8]) && 2141174968)))));
        arr_25 [i_8] [i_8] = var_9;
        arr_26 [i_8] = 52;
    }
    for (int i_9 = 1; i_9 < 17;i_9 += 1)
    {
        arr_30 [i_9 + 1] = ((var_13 != (((max((arr_7 [i_9] [i_9]), 1))))));
        var_27 = (max((~var_3), ((~((var_3 ? var_5 : (arr_11 [0] [0] [i_9 + 1] [i_9 + 2])))))));
    }
    #pragma endscop
}
