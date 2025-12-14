/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((((min(1, var_8))) ? var_9 : 11437961669139388100))) ? (((-(~-1299718711823801730)))) : -var_11));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_14 = (((arr_5 [i_0] [i_1]) != (((((var_1 ? var_11 : (arr_4 [i_0] [i_0] [i_0])))) ? var_9 : (arr_3 [i_0])))));
                    var_15 = (((arr_4 [14] [i_1] [5]) ? (arr_4 [13] [i_1] [i_1]) : (((!var_3) ? ((max(1111, 1110))) : ((-10752 ? (arr_6 [i_1]) : 1))))));
                    var_16 = (((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (((var_11 - (arr_4 [i_1] [i_1] [i_0])))) : (arr_0 [i_1])));
                    var_17 = (~var_5);
                }
            }
        }
        var_18 *= ((((max((arr_5 [8] [8]), -10736)) + (((max(-10736, var_6)))))));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_19 = ((var_12 + (((arr_6 [i_0]) ? var_7 : (arr_8 [12] [i_3] [i_3])))));
            var_20 = ((~((-10736 ? (arr_2 [i_0] [i_3]) : -1112))));
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            arr_16 [i_0] [i_0] = -10736;
            var_21 = ((!(((+((var_3 ? (arr_1 [i_0] [i_4]) : (arr_5 [i_0] [i_4]))))))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    {
                        var_22 = (((max((((arr_3 [i_4]) ? 0 : (arr_17 [i_0] [i_0] [i_0]))), 5302107139568252968))) - (((((2147483648 ? (arr_18 [i_0] [i_5] [i_5] [i_6]) : 576460752303423488))) ? (((arr_9 [i_0] [i_0] [i_0]) + 17979214137393152)) : (52 != 29876))));
                        var_23 = arr_11 [i_0];
                        var_24 = (((((((-24925 * 1) + 2147483647)) << (1771582528 - 1771582528))) | (((((arr_8 [i_0] [i_0] [i_0]) & (arr_6 [i_5])))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 13;i_7 += 1)
    {
        var_25 = ((-576460752303423488 ? (arr_20 [2] [2] [i_7] [i_7] [i_7] [i_7 + 1]) : (arr_17 [1] [i_7 - 2] [i_7 + 1])));
        arr_23 [i_7] = ((-(((1114 >= (arr_17 [i_7] [i_7] [i_7]))))));
        var_26 |= (arr_15 [i_7 + 1] [i_7]);
    }
    var_27 -= 10736;
    #pragma endscop
}
