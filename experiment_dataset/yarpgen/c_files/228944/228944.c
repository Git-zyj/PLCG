/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (((((var_10 == (arr_0 [i_0]))))));
        var_20 -= 0;
        var_21 = (max(var_21, (arr_0 [i_0])));
        var_22 *= (arr_0 [i_0 - 1]);

        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            var_23 = (max(var_23, var_19));
            var_24 = ((1 ? 1 : ((var_4 ? (((arr_3 [i_1]) | 1)) : var_3))));
            arr_7 [i_1] [15] = ((1 - ((max((10357 == var_5), 1)))));
            var_25 = ((max(1, 1)) ? (((arr_1 [i_0 - 2]) ? (arr_1 [i_0 - 2]) : var_3)) : (((var_2 ? ((0 ? 1 : 75)) : 28942))));
            var_26 = (min(((((arr_3 [i_1]) ? var_8 : 2492510016))), ((var_1 ? (arr_5 [i_1]) : ((((1 == (arr_6 [4] [4])))))))));
        }
    }
    var_27 = (max(var_27, 1));

    for (int i_2 = 4; i_2 < 12;i_2 += 1)
    {
        var_28 = (!var_17);
        arr_10 [i_2] [i_2 - 4] = (arr_5 [i_2]);
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_13 [i_3] = ((~(~1)));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 8;i_6 += 1)
                {
                    {
                        arr_21 [i_6] [i_4] [i_4] [4] = (arr_19 [i_6 + 1] [i_5] [3] [i_3]);
                        arr_22 [i_6] = 2554605681;
                        arr_23 [i_6] [0] [i_6 + 2] [i_6] [i_6 - 2] = (((max(1618266013, 90)) + -77));
                    }
                }
            }
        }
        arr_24 [i_3] [i_3] = (max((((!((((arr_18 [i_3] [i_3] [3] [3] [2]) ? 1 : 2676701275)))))), (((1618266015 ? 1 : 8578170369630856969)))));
    }
    #pragma endscop
}
