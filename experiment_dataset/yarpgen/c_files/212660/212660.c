/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;

    for (int i_0 = 3; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_11 = (min(var_11, -23799));
        var_12 = ((((((max(23799, 23804))) ? 0 : 41737)) >> (62426 - 62422)));
        var_13 = (~41747);
    }
    for (int i_1 = 3; i_1 < 17;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                arr_10 [i_1] [i_3] = (~-1);
                arr_11 [i_1] [i_1] = 41738;
                var_14 = ((-((max((arr_8 [i_1] [i_1] [i_2] [i_2 + 2]), (arr_8 [i_1] [i_1] [i_2] [i_2 + 1]))))));
                arr_12 [i_1] = ((((min((arr_8 [i_1 + 1] [i_1] [i_3] [i_3]), (arr_9 [i_1] [i_1])))) << (((max((min((arr_0 [i_2]), 43101397)), (max((arr_2 [i_1] [i_2]), 1)))) - 3170030740))));
            }
            /* vectorizable */
            for (int i_4 = 3; i_4 < 19;i_4 += 1)
            {
                var_15 ^= (((arr_13 [i_4 + 1] [i_2 - 2] [3] [i_1]) ? (((arr_4 [8] [16] [i_1 + 1]) ? (arr_7 [10] [i_2 - 1] [i_4]) : 1)) : (arr_5 [i_1 + 2] [i_1 + 2] [0])));
                var_16 = (arr_1 [i_1 + 1] [i_4]);
                var_17 = (min(var_17, ((((arr_13 [i_1 + 3] [i_4 - 3] [i_4 - 3] [i_4 - 3]) ^ (arr_13 [i_1 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 3]))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 18;i_6 += 1)
                    {
                        {
                            arr_19 [i_1] [i_4 - 2] [i_1] = (arr_14 [i_1] [i_2] [i_1 - 1] [13]);
                            var_18 = (((arr_9 [i_1] [i_6 + 2]) ? (arr_9 [i_1] [i_6 + 2]) : (arr_9 [i_1] [i_6 + 1])));
                            var_19 = (arr_16 [i_1] [i_1] [i_4 - 2] [i_5]);
                        }
                    }
                }
            }
            arr_20 [i_1] [i_1] = (~0);
            arr_21 [i_1] [i_1 + 1] [i_2] = (((min((arr_7 [i_1] [i_1 - 1] [i_2 - 1]), (arr_14 [i_1] [i_2] [i_1] [i_1]))) > (arr_7 [i_1] [i_1 - 2] [i_2 - 1])));
        }
        var_20 = ((max(((24585 ? 16777215 : 98304)), (arr_15 [i_1 - 3] [i_1 - 3] [i_1] [i_1 + 3] [i_1] [i_1 + 3]))));
        arr_22 [i_1] = ((((((((-(arr_2 [i_1] [i_1])))) ? ((var_1 ? 28 : 208)) : (arr_8 [i_1] [i_1] [i_1] [i_1 + 3])))) ? 1 : (((((arr_3 [i_1] [i_1 + 3]) > (((arr_3 [i_1] [i_1]) ? (arr_15 [i_1] [i_1] [i_1 - 2] [i_1] [i_1] [i_1 - 3]) : (arr_17 [i_1] [i_1] [i_1])))))))));
        var_21 = (min(var_21, ((min((!389352783), (-2147483647 - 1))))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 0;i_7 += 1)
    {
        arr_25 [i_7] [i_7] = (arr_6 [8]);
        arr_26 [i_7] &= (((arr_17 [i_7] [i_7] [16]) ? (arr_23 [i_7 + 1]) : (arr_17 [i_7] [i_7] [2])));
        var_22 = 1;
    }

    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        arr_30 [i_8] = (max((((arr_27 [i_8] [i_8]) ? (arr_3 [i_8] [i_8]) : (arr_3 [i_8] [i_8]))), (arr_27 [i_8] [i_8])));
        arr_31 [i_8] [i_8] |= 23808;
        var_23 = ((68 ? (-127 - 1) : ((((var_4 ? 1736081131 : 0))))));
        var_24 &= min((arr_8 [i_8] [i_8] [i_8] [i_8]), (((min((arr_2 [11] [i_8]), 1545973209)))));
    }
    #pragma endscop
}
