/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= var_4;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_16 = ((!(arr_2 [i_1])));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_17 = max((arr_6 [i_0] [i_0] [i_0]), 1605887415);
                        var_18 &= ((!((!(arr_0 [i_0] [i_1])))));

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_19 = (max((((arr_7 [i_0] [i_2] [i_4]) - (arr_7 [4] [i_1] [7]))), var_13));
                            var_20 = ((-(max((arr_11 [i_3] [5] [i_3] [i_3] [i_4]), (min((arr_6 [i_1] [9] [2]), (arr_9 [i_0] [8] [i_0] [i_0] [8] [i_3])))))));
                        }
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_21 -= 2689079885;
                        var_22 = (max(var_22, ((((((((max(var_12, var_0)) <= (min(3566824720, (arr_13 [2] [6] [i_0] [9] [i_0] [i_0]))))))) / (max(((((arr_12 [4]) && (arr_10 [i_0] [i_0] [i_2] [i_5] [i_1])))), (arr_11 [i_1] [i_2] [i_1] [i_0] [i_1]))))))));
                        arr_14 [i_2] = ((!(((((arr_8 [1] [i_2] [8] [1] [i_0]) / (arr_6 [i_0] [i_1] [i_5]))) > (arr_9 [i_0] [i_1] [i_2] [12] [i_5] [i_1])))));
                    }

                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_23 -= ((!((max(((-(arr_10 [13] [12] [i_2] [0] [i_6]))), (((var_7 <= (arr_0 [i_2] [i_2])))))))));
                        arr_17 [6] [0] [i_1] [i_1] [i_6] [3] = (((((var_1 | (32767 == var_13)))) || (arr_3 [i_0] [i_0])));
                    }
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        var_24 -= (max((((arr_8 [i_0] [i_1] [3] [i_2] [i_7]) > (min(var_5, (arr_5 [4] [i_2] [i_7]))))), (!var_7)));
                        var_25 = -var_4;

                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            var_26 = (arr_0 [i_2] [6]);
                            arr_23 [i_0] [i_0] = ((((((arr_1 [i_8]) > (((arr_7 [11] [i_1] [i_1]) & (arr_21 [i_0] [10] [5] [13] [i_8]))))))) % var_4);
                            arr_24 [i_0] [i_0] [i_0] [14] [7] [14] [i_0] = ((-((-(arr_5 [i_1] [i_2] [i_8])))));
                        }
                    }
                }
            }
        }

        for (int i_9 = 3; i_9 < 12;i_9 += 1)
        {

            for (int i_10 = 1; i_10 < 14;i_10 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 14;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        {
                            var_27 = 2689079881;
                            var_28 = 9223372036854775807;
                            var_29 = arr_26 [i_9 + 3];
                        }
                    }
                }
                var_30 = max((min((max((arr_4 [i_0] [i_9] [i_10]), var_12)), var_9)), -var_8);
            }
            for (int i_13 = 1; i_13 < 14;i_13 += 1) /* same iter space */
            {
                var_31 = ((max((min(0, (arr_27 [0] [12]))), -28867)) | ((((!(arr_29 [8] [14] [12] [10] [i_9 - 1] [i_9 - 2]))))));
                var_32 = (max(var_32, (((!((((arr_5 [i_0] [i_9 + 3] [i_9 - 1]) + (arr_5 [i_0] [i_9] [i_9 - 3])))))))));
            }
            for (int i_14 = 1; i_14 < 14;i_14 += 1) /* same iter space */
            {

                for (int i_15 = 1; i_15 < 14;i_15 += 1)
                {
                    arr_42 [i_0] [i_9] [i_14 - 1] [i_15 + 1] = (((((arr_32 [i_15] [i_9] [i_15] [i_9 - 3] [i_15] [i_9] [i_15 + 1]) ^ 36679)) >= (-9223372036854775807 >= -1940898367)));
                    arr_43 [i_0] [i_9 - 1] [i_9 - 1] [i_15] = arr_33 [4] [i_9] [i_9] [i_9] [i_14] [i_14] [i_15];
                }
                var_33 = (max(var_33, (max(var_6, (min(-1, (arr_8 [i_9 - 2] [i_9 - 2] [i_14] [2] [i_9 - 2])))))));
                arr_44 [i_0] [i_9] [i_14 + 1] = (arr_25 [i_0] [i_9] [5]);
            }
            for (int i_16 = 2; i_16 < 13;i_16 += 1)
            {
                var_34 = (arr_40 [i_0] [i_0] [9] [i_9 - 1] [9]);
                var_35 = (!-var_14);
            }
            /* LoopNest 3 */
            for (int i_17 = 0; i_17 < 15;i_17 += 1)
            {
                for (int i_18 = 1; i_18 < 14;i_18 += 1)
                {
                    for (int i_19 = 3; i_19 < 13;i_19 += 1)
                    {
                        {
                            var_36 = ((((min((arr_22 [i_19] [2] [i_17] [i_18] [3]), var_10))) || ((max((arr_6 [i_19 - 2] [i_18 + 1] [i_9 + 2]), (arr_10 [i_9 - 3] [i_9 - 3] [i_19 - 3] [i_19 - 3] [i_19 - 1]))))));
                            var_37 = (arr_9 [i_0] [i_9 + 3] [10] [i_17] [i_17] [i_17]);
                        }
                    }
                }
            }
            var_38 = ((-(min(var_10, ((((arr_40 [i_0] [i_9] [i_9 + 3] [i_9] [3]) || 2971637330159012235)))))));
            var_39 = 3;
            var_40 = (arr_9 [12] [12] [i_9 - 1] [i_9] [i_9] [4]);
        }
        arr_54 [i_0] = max(((((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) >> (((arr_13 [i_0] [i_0] [i_0] [i_0] [5] [i_0]) - 1474070343436426783))))), 11587962448281949797);
    }
    var_41 = var_12;
    #pragma endscop
}
