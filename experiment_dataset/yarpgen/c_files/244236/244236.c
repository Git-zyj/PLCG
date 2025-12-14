/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= (max(var_11, (!var_12)));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = (((arr_2 [i_0] [i_0]) & 15));
        arr_5 [1] [i_0] = var_13;
        var_19 -= var_11;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 18;i_2 += 1)
        {
            var_20 -= (!var_5);
            var_21 -= (4294967279 & 185);
        }
        var_22 += 4294967280;
        arr_10 [i_1] = ((32767 ? -91 : (((var_17 << (var_3 - 3489508028611018429))))));
        var_23 = var_4;
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        arr_15 [i_3] [i_3] = ((~((((((-12713 ? var_17 : (arr_8 [i_3] [i_3] [i_3])))) <= (arr_3 [i_3]))))));
        var_24 += ((arr_2 [i_3] [i_3]) ? (arr_9 [i_3] [i_3] [17]) : ((max((arr_2 [i_3] [i_3]), (arr_2 [i_3] [i_3])))));
        var_25 += ((-((max((arr_0 [i_3]), (arr_0 [i_3]))))));

        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            arr_20 [i_4] = (arr_1 [0]);
            var_26 = ((var_10 & ((((arr_3 [i_3]) <= 5)))));
        }
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            var_27 = ((var_13 + ((max((arr_18 [i_3]), (arr_2 [i_5] [i_3]))))));
            var_28 = (arr_12 [i_3]);
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            {
                var_29 = var_15;

                /* vectorizable */
                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    var_30 = ((var_1 & ((~(arr_7 [11])))));
                    arr_32 [6] = ((-(((!(arr_31 [0] [i_7]))))));
                    var_31 += var_6;
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    var_32 = (((arr_30 [i_9] [i_6]) << ((((-(arr_30 [i_7] [i_9]))) - 16830467190059172612))));
                    arr_35 [17] [17] [i_6] = 0;
                }
                var_33 = (arr_29 [8] [8] [i_6]);
                var_34 -= (((((max((arr_28 [i_6]), (arr_28 [i_6]))))) & (max(2200149393, (arr_28 [i_6])))));
            }
        }
    }
    var_35 += var_3;
    var_36 -= (min((max((10 - var_2), (((1 ? var_9 : 126))))), ((-((var_16 ? 4294967281 : 39))))));
    #pragma endscop
}
