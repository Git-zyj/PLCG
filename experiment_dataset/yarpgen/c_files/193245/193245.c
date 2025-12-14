/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    var_11 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    arr_6 [i_0] [i_1] [4] = var_9;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_1] [i_1 - 1] [i_2] [i_3] [i_3] = 1;
                                arr_14 [i_0] [i_2] = (min((~var_1), var_2));
                                arr_15 [6] [i_2] [i_2] [6] [1] [i_4] = (min(255, ((-(arr_8 [i_1] [i_1 - 1] [i_1 + 2] [8] [i_1 + 2])))));
                                arr_16 [i_2] = ((min((arr_7 [i_0] [i_2]), (arr_10 [1] [i_4]))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        {
                            arr_21 [i_0] [10] [7] [9] = (((arr_1 [i_5]) - 20587));
                            arr_22 [i_0] [i_0] [i_0] [1] [i_0] [i_0] = -1833200779;

                            for (int i_7 = 0; i_7 < 14;i_7 += 1)
                            {
                                arr_27 [i_0] [i_1 + 1] [i_0] [i_6] [i_6] [i_6] = ((~(var_2 <= 1)));
                                arr_28 [i_0] [i_0] [i_5] [i_0] [10] = (arr_2 [i_0] [i_1 + 2]);
                                arr_29 [i_5] [12] [i_5] [i_6] [9] [i_7] [i_5] = (arr_12 [i_1 + 2] [i_1 - 1] [i_1] [i_1 + 2] [i_1]);
                            }
                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 14;i_8 += 1)
                            {
                                arr_33 [i_1] [i_1] [i_5] [i_6] [i_8] = (((arr_0 [i_5 + 1]) ? 1500501514 : -30847));
                                arr_34 [i_8] [i_6] [i_5 + 1] [0] [i_1] [i_0] [i_0] = var_4;
                                arr_35 [i_1] [6] [i_1] = 1990270915013455817;
                                arr_36 [i_0] [i_1 + 2] = 1;
                            }
                        }
                    }
                }

                for (int i_9 = 1; i_9 < 11;i_9 += 1)
                {
                    arr_40 [i_0] [6] [i_9] [1] = (min(((15006 << (var_7 - 22028))), (min((arr_2 [i_0] [i_1]), -1015425232))));
                    arr_41 [i_0] [i_1] = var_1;
                }
                for (int i_10 = 3; i_10 < 13;i_10 += 1)
                {
                    arr_44 [i_1 - 2] [i_0] = (((~79334553) << ((((max(var_0, var_8))) - 9321))));
                    arr_45 [i_0] = 101;
                    arr_46 [i_0] [i_10] [i_10] [i_10] = 1;
                    arr_47 [i_10] = (+-6980);
                }
                arr_48 [i_1] = 12;
            }
        }
    }
    var_12 = var_0;
    #pragma endscop
}
