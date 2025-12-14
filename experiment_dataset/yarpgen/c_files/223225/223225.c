/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(0, 919890002));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((arr_0 [i_0]) ^ 114))) && 28);
        var_18 -= ((((arr_0 [i_0]) == (arr_0 [i_0]))));
        var_19 = (min(var_19, (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_20 = (((((0 > 0) > (arr_4 [11]))) ? ((~(arr_3 [i_1] [i_1]))) : (min(-0, (arr_3 [7] [i_1])))));
        arr_5 [i_1] = (max((~4101609690), (((((((arr_3 [i_1] [i_1]) ? var_0 : var_7))) || var_6)))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_8 [i_2] = ((((max((!-2147483635), 4251))) ? (arr_7 [i_2]) : ((((arr_6 [i_2]) << (((arr_6 [i_2]) - 3561879699)))))));
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 8;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    {
                        arr_19 [0] [0] [i_4 + 3] [i_3] = (((arr_3 [i_4 - 1] [i_5]) & ((((arr_1 [i_3 + 2]) & (arr_1 [i_4]))))));
                        arr_20 [i_3] [i_4 - 3] [i_4 - 2] [i_5] [i_2] [i_4 + 1] = (((660392423 != -8) ? (min(((14719924915589752198 ? 34 : (arr_14 [i_2] [i_3]))), (max((arr_10 [i_2] [9]), 215)))) : var_9));
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_6 = 4; i_6 < 20;i_6 += 1)
    {
        arr_23 [i_6] [i_6 - 4] = ((-(arr_21 [i_6])));

        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            var_21 = (-919889995 > 32767);
            var_22 = (((arr_21 [i_6]) ? (arr_22 [i_6]) : (arr_25 [i_6 - 4])));
            arr_27 [2] [i_6] [i_7] = (((193357606 >> (4101609677 - 4101609659))));
        }
        for (int i_8 = 1; i_8 < 18;i_8 += 1)
        {
            var_23 = ((arr_21 [i_6]) ? (arr_21 [i_6]) : (arr_21 [i_6]));
            var_24 = ((-((154 ? var_9 : (arr_24 [i_8 + 2])))));
        }
        for (int i_9 = 4; i_9 < 20;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 20;i_11 += 1)
                {
                    {
                        arr_40 [i_9] [i_6] = (arr_22 [i_6]);
                        var_25 = (arr_38 [i_11]);
                        var_26 = ((-2096409209 + ((var_11 / (arr_26 [i_6])))));

                        for (int i_12 = 4; i_12 < 17;i_12 += 1) /* same iter space */
                        {
                            arr_44 [i_6 - 4] [i_6] [i_6 - 4] [i_11 + 1] = ((var_16 != ((var_1 ? 8574676402804685917 : -8556735682266486046))));
                            arr_45 [i_6] [i_6] [i_10] [i_11] [i_10] [i_6] [i_6] = (31 >= var_0);
                        }
                        for (int i_13 = 4; i_13 < 17;i_13 += 1) /* same iter space */
                        {
                            arr_48 [i_6] [i_9] [i_10] [i_6] [i_6] = (arr_43 [i_9] [i_6]);
                            var_27 = (arr_32 [i_9 + 1] [i_6]);
                            var_28 = (((arr_36 [i_6 - 4] [i_6 - 4] [i_6] [i_6]) ? (arr_36 [i_13] [i_6 + 1] [i_6] [i_6]) : 107));
                        }
                        var_29 = (!143);
                    }
                }
            }
            var_30 = (max(var_30, -var_7));
        }
        for (int i_14 = 0; i_14 < 21;i_14 += 1)
        {
            arr_53 [i_6] = var_8;
            arr_54 [i_6] [i_6] [i_6] = ((-(arr_34 [i_6] [i_6 - 4] [i_6])));
            var_31 = arr_28 [i_14];
            /* LoopNest 2 */
            for (int i_15 = 3; i_15 < 19;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    {
                        arr_63 [i_6] = var_2;
                        var_32 = (((arr_38 [i_6]) ? 144 : (65509 | 3697715942)));
                        var_33 = (((arr_42 [i_6 + 1] [i_6 + 1] [i_6 - 4] [i_6 + 1] [i_6] [5]) ? (arr_42 [i_6 + 1] [12] [i_6 - 4] [i_6 + 1] [i_6] [5]) : 4));
                    }
                }
            }
            var_34 = ((32767 ? (arr_34 [i_6] [i_6 - 3] [i_6]) : -1164460167208759000));
        }
        arr_64 [i_6] = 2147483641;
        var_35 *= 15263242793613021828;
    }
    #pragma endscop
}
