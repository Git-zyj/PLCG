/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
        {
            arr_6 [i_1] = (((arr_0 [i_1]) ? (arr_0 [i_0]) : (arr_0 [i_0])));
            arr_7 [i_1] [i_1] [i_1] = ((arr_3 [i_0] [i_1]) ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0] [i_1]));
            var_20 = (arr_1 [i_0] [i_1]);
            arr_8 [i_0] [i_0] = (((arr_3 [i_0] [i_1]) ? (arr_4 [i_1] [i_0] [i_0]) : 32750));
            arr_9 [i_0] [i_1] [i_1] = (arr_2 [i_0]);
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
        {
            var_21 = ((var_10 ? (arr_4 [i_2] [i_0] [i_0]) : (~var_5)));
            arr_13 [i_0] [i_2] [i_2] = ((((((arr_5 [i_0] [i_2]) ? (arr_5 [i_0] [i_2]) : var_12))) ? ((9 ? -32741 : 0)) : (~var_2)));

            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                var_22 -= (!var_15);
                arr_16 [i_3 + 1] = var_17;
                arr_17 [i_2] [i_2] = ((-(arr_14 [i_3 - 1] [i_3 + 1] [i_3 + 1])));
                var_23 = (min(var_23, (((((arr_2 [i_2]) ? var_8 : (arr_1 [i_2] [i_3 - 1])))))));

                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        arr_23 [i_5] [i_4] [i_4] [i_3 - 1] [i_3 - 1] [i_2] [i_5] = arr_12 [i_0] [i_2];
                        var_24 += (((arr_2 [i_0]) ? (arr_14 [i_3 + 1] [i_3 + 2] [i_2]) : (arr_10 [i_3 - 1] [i_3 + 1] [i_3 - 1])));
                    }
                    var_25 &= (arr_22 [i_2] [i_4]);
                    var_26 = ((((arr_4 [i_0] [i_0] [i_0]) ? var_1 : (arr_4 [i_0] [i_2] [i_3 - 1]))));
                }
            }
            for (int i_6 = 1; i_6 < 10;i_6 += 1)
            {
                arr_27 [i_0] = var_7;
                arr_28 [i_0] [i_2] [i_6 + 3] = (arr_4 [i_0] [i_2] [i_6]);
            }
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
        {
            var_27 -= (arr_0 [i_7]);
            arr_32 [i_0] [i_7] [i_0] = ((-((var_17 ? var_7 : -32751))));

            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                var_28 += (((arr_14 [i_0] [i_7] [i_8]) ? (arr_14 [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_0] [i_0])));
                arr_35 [i_0] [i_7] [i_8] [i_8] = (((arr_34 [i_0] [i_7] [i_8]) ? var_9 : (arr_34 [i_0] [i_7] [i_8])));
                arr_36 [i_0] [i_0] = var_0;
                var_29 = var_10;
                var_30 = ((!(arr_20 [i_8] [i_8] [i_7] [i_7] [i_0] [i_0])));
            }
            for (int i_9 = 1; i_9 < 11;i_9 += 1)
            {
                arr_39 [i_0] [i_9 + 2] [i_9 + 1] = -var_4;
                arr_40 [i_9 + 2] [i_7] [i_7] [i_0] = (var_8 ? (((arr_4 [i_0] [i_7] [i_9 - 1]) ? (arr_15 [i_0] [i_7] [i_7] [i_9 + 1]) : var_18)) : (arr_10 [i_0] [i_0] [i_0]));
                arr_41 [i_0] [i_7] [i_9 + 2] [i_9 - 1] = (arr_22 [i_9] [i_0]);
                arr_42 [i_9 + 1] [i_7] [i_7] = (arr_4 [i_0] [i_7] [i_9]);
            }
            var_31 = -65526;
        }
        var_32 = (min(var_32, (arr_31 [i_0])));
    }
    var_33 += ((-((max(9, 0)))));
    var_34 = var_1;
    #pragma endscop
}
