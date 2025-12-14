/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (arr_1 [i_0]);

                /* vectorizable */
                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    var_12 = ((((var_1 ? var_9 : 63131))) ? 824 : (arr_1 [i_0]));
                    var_13 = ((1 ? 0 : 32));
                }
                for (int i_3 = 2; i_3 < 21;i_3 += 1)
                {
                    arr_12 [i_0] [i_0] = ((4416342133287912865 ? 38 : 11226915141879989626));
                    var_14 = (arr_8 [i_1]);
                }
                /* vectorizable */
                for (int i_4 = 1; i_4 < 18;i_4 += 1) /* same iter space */
                {
                    var_15 -= (arr_9 [i_1 - 1] [i_1 - 1] [i_4 + 3]);

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_16 = (min(var_16, (((var_11 ? -4416342133287912869 : -var_1)))));
                            var_17 = (45100 <= 211);
                            var_18 = (((arr_14 [i_4 - 1] [i_1 + 1] [i_1 + 2]) % (arr_14 [i_4 - 1] [i_1 + 2] [i_1 + 1])));
                            arr_20 [i_0] [i_0] [i_0] [i_4] [i_0] [i_0] [i_0] = 53;
                            arr_21 [i_0] [i_0] [i_1 - 2] [i_1 + 2] [i_1 - 2] [i_4] = (!(((var_11 ? 203 : 14178080124546206620))));
                        }
                        var_19 = (max(var_19, -13));
                    }
                    var_20 = (-7214 ? var_3 : (arr_19 [i_0] [i_1] [i_1] [i_1] [i_1]));
                    var_21 = (!1);
                    arr_22 [i_0] [i_4] [i_4] [i_4] = -1;
                }
                /* vectorizable */
                for (int i_7 = 1; i_7 < 18;i_7 += 1) /* same iter space */
                {
                    arr_26 [i_0] = ((!(arr_24 [i_1 + 2] [i_7] [i_7] [i_7 + 2])));
                    arr_27 [i_0] [i_1] [i_0] [i_1] = var_2;
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_22 = (arr_6 [i_8 - 1] [i_1] [i_1 - 2]);
                                var_23 = ((-49210 ? 1721469790 : var_6));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        arr_36 [i_10] = ((!((max(var_5, (!-1541907845))))));
        /* LoopNest 2 */
        for (int i_11 = 2; i_11 < 11;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                {
                    var_24 = var_10;
                    var_25 = ((var_2 ? (arr_7 [i_11 - 1] [i_11 - 2] [i_11] [i_11]) : (arr_31 [i_10] [i_11 + 1] [i_11 - 1] [i_11] [i_10])));
                }
            }
        }
        var_26 = (max(((min(4268663949163344996, (arr_3 [i_10])))), ((-((min((arr_13 [i_10] [i_10] [i_10] [i_10]), (arr_4 [i_10] [i_10] [i_10]))))))));
    }
    #pragma endscop
}
