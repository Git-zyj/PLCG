/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -var_9;
    var_14 = (max(((max(var_1, var_11))), (max(var_6, (~var_6)))));
    var_15 = (min(var_15, var_12));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_1] [i_1] = ((~((~(arr_4 [i_0] [i_0] [i_1])))));
            arr_7 [i_0] = (arr_5 [i_0]);
            var_16 += (arr_0 [8]);
            arr_8 [i_1] [i_0] [i_0] = (arr_4 [i_0] [i_0] [i_1]);
        }
        var_17 |= ((-(arr_5 [i_0])));
        var_18 = (max(((-((max((arr_4 [i_0] [i_0] [i_0]), (arr_2 [i_0])))))), (arr_2 [8])));
        var_19 ^= var_8;

        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_20 &= (arr_2 [i_0]);
            arr_12 [i_0] = (arr_11 [i_0]);
            var_21 = max(((~(!var_12))), (!var_2));
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    {
                        arr_19 [i_4] [i_4] = (max((arr_0 [i_3 - 2]), (max((arr_0 [i_3 + 1]), (arr_15 [12] [i_3 + 1] [i_4] [i_4] [i_4])))));
                        var_22 = (arr_11 [i_0]);
                        arr_20 [i_0] [i_0] [i_2] [i_0] [i_4] [i_0] = (~var_7);

                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            arr_24 [i_4] [i_4] = (arr_23 [i_4] [i_2 - 1] [i_3] [i_2 - 1] [i_4]);
                            arr_25 [i_3] [i_4] [i_3] [i_4] [i_0] = var_1;
                            arr_26 [i_0] [i_0] [i_2 - 1] [i_3] [i_3 + 1] [i_4] [i_5] = (max((max((max((arr_10 [i_3] [i_3] [i_3]), var_9)), (max((arr_10 [i_0] [i_2] [i_5]), var_9)))), ((max((max((arr_14 [i_2 - 1] [6] [i_5]), (arr_16 [i_4] [i_4] [7] [0]))), (((!(arr_21 [i_0] [9] [9] [0] [0] [i_4] [0])))))))));
                        }
                    }
                }
            }
        }
        for (int i_6 = 3; i_6 < 15;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            arr_37 [i_0] [i_0] [i_0] [i_0] [i_6] [1] = ((~((max((arr_16 [i_6] [i_6] [i_6] [i_6 + 3]), var_5)))));
                            arr_38 [i_0] [i_6] [i_6] [i_6 - 3] [i_6] [i_7] [i_7] = (arr_5 [i_6 - 1]);
                        }
                        var_23 = var_9;
                        arr_39 [i_8] [i_6] [i_6] [i_6] [i_6] [i_0] = (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [6] [i_0]);
                    }
                }
            }
            arr_40 [i_6] = (max((max((arr_16 [i_6] [i_6] [i_6] [i_6]), (~var_9))), var_6));
        }
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 22;i_10 += 1)
    {

        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {

            for (int i_12 = 3; i_12 < 23;i_12 += 1)
            {
                arr_52 [i_12] = (!(arr_44 [1] [1]));
                var_24 = (arr_51 [i_10 + 2] [i_12] [i_12 - 3]);
            }
            var_25 = arr_50 [i_10] [i_11] [i_11];
            arr_53 [i_11] [i_10] = (arr_45 [17] [i_11]);
        }
        for (int i_13 = 0; i_13 < 24;i_13 += 1)
        {
            var_26 = (arr_51 [i_10] [0] [0]);
            arr_56 [1] [i_10] = (!(arr_54 [i_10 - 1]));
        }
        arr_57 [i_10] = ((-(arr_55 [2] [18] [i_10 + 2])));
        arr_58 [i_10] = (arr_51 [i_10 - 1] [20] [i_10]);
        var_27 = (arr_41 [i_10]);
    }
    #pragma endscop
}
