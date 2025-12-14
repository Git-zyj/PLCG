/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 24;i_3 += 1)
                    {
                        var_18 = ((59925 ? 59895 : 1));
                        var_19 = (((arr_7 [i_0] [i_1] [i_2 + 2] [i_3] [2] [3]) ? 59925 : (arr_3 [i_1])));
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_1] [i_0] = (!-3802440324657506785);
                        arr_12 [i_1] [i_4] [i_2 - 1] = 1;
                        arr_13 [i_0] [i_0] [i_0] [i_1] [i_4] = 59918;
                        var_20 = (min(var_20, (arr_0 [i_1])));
                        arr_14 [i_0] [i_1] [8] |= (max((arr_1 [i_0]), 252406945698221576));
                    }
                    var_21 = (min(var_21, ((((~(arr_2 [i_2] [1] [i_2 + 1])))))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                for (int i_7 = 4; i_7 < 23;i_7 += 1)
                {
                    {
                        arr_23 [i_7] [i_5] = (arr_15 [i_5] [i_6] [i_6]);
                        var_22 = (arr_1 [i_0]);
                        var_23 = (min(var_23, (arr_0 [i_0])));
                        arr_24 [i_6] [i_7] |= ((min(980868853, (arr_1 [i_7 - 2]))));
                    }
                }
            }
        }
        arr_25 [7] = ((~((max((arr_1 [i_0]), (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [13]))))));
        var_24 = ((~(arr_10 [i_0])));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        arr_29 [i_8] = ((-87 ? (!48862) : (-32767 - 1)));

        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {

            for (int i_10 = 3; i_10 < 21;i_10 += 1)
            {

                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    arr_37 [i_8] [i_8] = (!252406945698221576);
                    var_25 = (min(var_25, ((((!252406945698221581) ? (arr_36 [9] [i_10 - 3] [i_10 - 2]) : 59895)))));
                    var_26 ^= (((arr_21 [i_10 + 2] [i_10] [i_10 + 1] [i_10]) ? 16384 : 1));
                    var_27 = ((32758 ? ((((arr_8 [i_8] [i_8] [i_8] [i_8] [i_8] [1]) ? (arr_33 [i_8] [i_9] [i_8] [i_11]) : (arr_3 [i_9])))) : 1));
                    var_28 = (max(var_28, (((8787503087616 ? (arr_9 [i_10 - 2] [i_9] [i_10]) : (arr_26 [i_11]))))));
                }
                for (int i_12 = 2; i_12 < 22;i_12 += 1)
                {
                    var_29 += 242;
                    arr_40 [i_8] [5] [i_10 + 1] [i_12] [i_8] = (arr_18 [i_10 - 3] [i_10] [i_10 - 3] [i_8]);
                }
                var_30 = (max(var_30, ((((arr_18 [i_8] [i_9] [i_8] [8]) ? 2097148 : (arr_28 [i_8] [i_8]))))));

                for (int i_13 = 0; i_13 < 24;i_13 += 1) /* same iter space */
                {
                    var_31 = 1577104189784193244;
                    var_32 = (max(var_32, -100));
                    var_33 = 255;
                    arr_43 [i_9] [i_9] [i_10 - 2] [15] [i_9] [i_8] = (arr_4 [8] [i_10 + 3]);
                }
                for (int i_14 = 0; i_14 < 24;i_14 += 1) /* same iter space */
                {
                    var_34 = (min(var_34, (~212)));
                    var_35 = (arr_22 [i_8] [i_9] [i_9] [i_8]);
                    arr_47 [i_14] [i_9] [i_8] [i_14] = (arr_15 [i_8] [i_10 + 1] [i_8]);
                    var_36 &= 2145386496;
                }
                var_37 = (arr_7 [i_10 + 3] [i_9] [i_8] [i_10 + 1] [i_10] [i_10 - 3]);
            }
            arr_48 [i_8] [i_8] = ((-32176 ? -43 : -1587118738));
        }
    }
    var_38 = 5645;
    #pragma endscop
}
