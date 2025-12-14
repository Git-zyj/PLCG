/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 2241328472373524900;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_2] [i_2] [i_1] = (1274567337 - (arr_9 [i_0] [i_0] [i_0 - 2] [i_0 + 2]));
                        arr_13 [i_1] [i_1] [i_2] [i_2] [i_3] = (arr_5 [i_1]);
                        arr_14 [i_0] [i_1] = ((-(arr_11 [i_1] [i_0 + 2] [i_1] [i_3] [i_1] [i_3])));
                        arr_15 [i_0] = (((-(var_13 < var_5))));
                    }
                    arr_16 [i_0] [i_2] [i_1] = -238;
                    arr_17 [i_1] = 1565943346;
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        arr_20 [i_4] = 8330;

        /* vectorizable */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                arr_26 [i_5] [i_4] = (arr_23 [i_4] [i_5]);
                arr_27 [i_4] [i_4] [i_4] [i_6] = ((!(((-23 - (arr_11 [i_6] [i_5] [i_6] [i_5] [i_5] [i_4]))))));

                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    arr_32 [i_4] [i_5] [i_4] [i_7] [i_7] [i_7] = (arr_24 [i_4] [i_4] [7] [11]);

                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        arr_35 [i_4] [i_4] [i_4] [i_4] = (((arr_31 [i_5] [i_4]) >> (643456016 - 643456001)));
                        arr_36 [14] [i_5] [i_5] [i_4] [i_5] = arr_6 [i_5] [i_6] [i_7] [i_8];
                    }
                    arr_37 [i_4] [i_4] [i_4] = -var_4;
                }
            }
            arr_38 [i_4] [i_4] [i_5] = (arr_21 [i_4] [i_5]);
            arr_39 [i_4] = (arr_34 [10] [i_4] [i_4] [i_5] [i_5] [i_5]);
        }
    }

    for (int i_9 = 0; i_9 < 10;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                {
                    arr_48 [i_9] [i_11] [i_10] [i_9] = (var_12 + 4053010800261714727);
                    arr_49 [i_9] [i_10] [i_9] = (arr_33 [i_11] [i_11] [12] [i_9] [i_9] [i_11]);
                }
            }
        }
        arr_50 [i_9] [i_9] = 14;
    }
    for (int i_12 = 1; i_12 < 13;i_12 += 1)
    {
        arr_53 [i_12] = ((-((~((~(arr_4 [i_12] [i_12])))))));
        arr_54 [i_12] [i_12] = 5474419139141929867;
        arr_55 [i_12] [i_12] = 122;
    }
    #pragma endscop
}
