/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((max(4294967295, (-2147483647 - 1)))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_16 = ((((((arr_0 [i_0]) != (arr_0 [i_0]))))) | ((min(-126, var_10))));
        var_17 = (((((((~(arr_1 [i_0])))) + (max((arr_0 [i_0]), (arr_2 [i_0] [7]))))) << (((arr_1 [15]) - 58859))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 4; i_2 < 17;i_2 += 1)
        {
            arr_7 [i_2 - 4] [i_1] = (arr_3 [i_1] [i_1]);
            arr_8 [i_1] = ((((((arr_3 [i_1] [i_2]) ^ var_3))) ? (arr_2 [i_2 - 2] [i_2 - 1]) : (arr_4 [i_1])));
        }
        var_18 = var_9;
        arr_9 [i_1] [i_1] = (arr_2 [i_1] [i_1]);
    }

    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 21;i_7 += 1)
                    {
                        {
                            var_19 = (((arr_17 [i_5] [i_7 - 1]) > var_0));
                            arr_23 [i_3] [i_4] [i_5] [i_6] [i_7] = (arr_21 [i_3] [i_7 + 2] [i_5] [i_3 + 1]);
                            var_20 *= var_6;
                        }
                    }
                }
                var_21 = (arr_13 [i_3 + 1] [i_3 + 2] [i_5]);
                var_22 = 0;
                var_23 ^= (arr_12 [i_4]);
            }
            for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
            {
                var_24 = var_4;
                arr_26 [i_3] [i_4] [i_8] [i_8] = ((var_13 ? (arr_25 [i_8] [i_4] [i_3]) : (((arr_25 [i_3] [i_4] [i_8]) * (arr_21 [i_3] [i_3] [i_4] [i_8])))));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        {
                            var_25 = (arr_21 [i_3 - 1] [i_3] [10] [i_3 + 1]);
                            var_26 = (arr_10 [i_3 + 1] [i_8]);
                        }
                    }
                }
            }
            var_27 = (arr_28 [i_4] [i_4] [i_3 + 2] [i_3 + 2] [i_3 + 2]);
            var_28 = (((arr_11 [i_3 + 1]) ? (arr_11 [i_4]) : (arr_11 [i_3 - 1])));
        }
        arr_33 [i_3 - 1] [i_3 - 1] = (((((-787914429 || (arr_16 [i_3] [i_3 + 2] [i_3] [i_3])))) == (arr_15 [i_3] [i_3] [20] [i_3])));
        var_29 = ((max(7502058513561616504, 0)));
        arr_34 [i_3 + 1] [i_3 + 1] = ((0 ? (arr_10 [i_3 - 1] [i_3 + 1]) : 27));
        var_30 = -1610612736;
    }
    var_31 = 3784028926;
    #pragma endscop
}
