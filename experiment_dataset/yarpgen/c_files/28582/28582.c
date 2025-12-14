/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_8, (min(((min(var_8, var_13))), (min(5304602725536387609, 1921869515))))));
    var_16 = ((-((min(var_7, var_9)))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 |= ((min(var_2, var_14)));
        arr_2 [i_0] = min((((arr_1 [i_0]) >> (((arr_1 [i_0]) - 3170799878)))), ((min((min((arr_0 [i_0] [i_0]), var_12)), (min(1, 1))))));
    }
    for (int i_1 = 4; i_1 < 12;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_18 ^= var_14;
            arr_10 [i_2] [i_1] = (((min(((min((arr_0 [i_1] [22]), (arr_6 [5] [i_1])))), (arr_9 [i_2] [i_2 - 1]))) & (arr_5 [i_2])));
            arr_11 [i_2] [i_2] = (arr_4 [2]);
        }
        for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
        {
            var_19 = (min(var_19, (arr_0 [i_1 + 1] [5])));
            var_20 ^= (min((min((min(var_5, var_2)), ((min((arr_8 [i_1] [i_3 - 1]), var_0))))), (arr_13 [i_1] [5] [i_1])));
            var_21 &= (min((min(var_4, (min(var_4, var_7)))), var_3));
        }

        /* vectorizable */
        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                var_22 = (min(var_22, var_5));
                var_23 += (~var_1);
                arr_23 [i_1] = (arr_14 [i_1 - 3]);
                var_24 = (max(var_24, var_0));
            }

            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                arr_26 [6] = arr_6 [i_4] [i_4];
                var_25 = (((var_2 & var_1) <= (arr_7 [i_6] [i_6])));
                arr_27 [i_1] [i_4] [i_6] = var_8;
                arr_28 [i_1] = (arr_13 [2] [i_4] [i_6]);
            }
            var_26 = (max(var_26, var_3));
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_27 = ((min((min(var_1, var_12)), var_12)));
            arr_32 [i_1] [i_1] = (min(var_6, (arr_29 [i_1] [i_1 - 3] [i_1])));
            var_28 = (max(var_28, (min((!4095), 49152))));
        }
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            var_29 ^= (min((min((arr_14 [i_1 - 3]), (arr_7 [i_1] [i_1]))), (min(((min(var_3, var_5))), (arr_22 [1] [i_1] [i_8] [1])))));

            for (int i_9 = 3; i_9 < 12;i_9 += 1)
            {
                var_30 = (min((min(((min(1, 104))), 13068159806393541656)), ((min((arr_13 [i_1] [7] [i_9 - 2]), (min(var_1, var_11)))))));
                arr_40 [9] [i_8] [i_1] [i_1] &= (min(((((arr_16 [i_8]) <= var_12))), (min(1, (arr_31 [i_8] [i_8])))));
                var_31 = var_10;
                var_32 -= (min((min((min(var_11, var_9)), var_5)), var_3));
                arr_41 [i_1] [i_8] |= var_1;
            }
            arr_42 [1] = ((var_3 ^ (min(((min(var_9, var_2))), var_14))));

            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                var_33 &= (min((min((arr_34 [i_1 - 3]), (min(var_11, var_13)))), ((((arr_3 [i_1 - 1]) > (arr_3 [i_1 - 4]))))));
                var_34 = (min(((min(-36, 0))), var_11));
            }
            for (int i_11 = 2; i_11 < 10;i_11 += 1)
            {
                arr_49 [i_8] = (min(var_11, ((min((~var_0), var_0)))));
                var_35 -= (min(((~((~(arr_36 [i_1] [2] [i_8] [i_11]))))), (((min(1, var_11))))));
            }
        }
    }
    #pragma endscop
}
