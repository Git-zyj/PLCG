/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        var_19 = 125926880114230127;
                        var_20 = (min((((0 ? 13 : -1))), (arr_9 [10] [i_1] [19] [1])));
                    }
                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        var_21 = 1152921504606846976;
                        arr_12 [i_4 + 1] [i_4] [i_2] [i_2] [i_1] [i_0] = min(2500137368, 0);
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_22 = (((arr_10 [i_0]) / ((~(arr_16 [i_0])))));
                        arr_17 [i_0] [i_0] = 2;
                        arr_18 [i_5] = (arr_11 [i_0] [i_0]);
                    }
                    for (int i_6 = 2; i_6 < 19;i_6 += 1)
                    {
                        var_23 += (22586 ? 2500137368 : (-2147483647 - 1));
                        arr_22 [i_1] = ((-831572786 ? (arr_11 [i_2] [i_0]) : ((2147483647 ? 0 : (arr_1 [i_6 - 2])))));
                    }
                    arr_23 [19] [19] [i_2] [i_2] = (((9223372036854775793 ? (9223372036854775793 / -19638) : 147)));
                    arr_24 [i_0] [i_0] [i_2] = -22586;
                    arr_25 [i_0] [i_0] [19] [i_2] = ((-989478441 ? (-2147483647 - 1) : 14137440616901040797));
                    arr_26 [i_0] [8] = (arr_5 [i_1] [i_1] [i_1]);
                }
            }
        }

        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            var_24 = (((((0 ? 15510486870061980273 : 8568118751729832074)) == (((65535 ? 29454 : 989478440))))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    {
                        var_25 = var_6;
                        arr_35 [i_0] [17] [17] [i_7] [i_0] [i_9] = 0;
                        arr_36 [i_0] [19] [i_7] [19] [i_7] = 28;
                    }
                }
            }
        }
        var_26 = ((min(((min((arr_6 [i_0] [i_0] [i_0] [i_0]), 65531))), ((64 ? (arr_9 [19] [i_0] [i_0] [i_0]) : var_14)))));
    }
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        var_27 = (~65535);
        var_28 = 126;
    }
    var_29 = min((!-var_3), (max(((var_11 ? 227 : var_11)), var_5)));
    var_30 = (max((-9223372036854775793 || 9223372036854775793), ((min(96, var_5)))));
    var_31 = (max((max(-8454352210248332719, ((max(var_16, 2447012987))))), var_7));
    #pragma endscop
}
