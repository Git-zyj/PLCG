/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;
    var_19 -= var_10;
    var_20 = var_9;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                var_21 = var_0;
                var_22 = ((517906900 - ((-(arr_2 [i_0])))));
            }
            for (int i_3 = 3; i_3 < 18;i_3 += 1)
            {
                arr_10 [i_0] [i_1] [i_0] = (arr_1 [i_0]);

                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    var_23 = (~1);
                    var_24 += (+(max((arr_7 [i_1]), (arr_7 [i_0]))));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        var_25 = (((((arr_2 [i_0]) ? var_2 : (arr_11 [17] [i_5]))) <= 1));
                        var_26 = (max(var_26, (arr_5 [i_5] [i_4] [i_4] [i_0])));
                        var_27 = (((arr_5 [i_3 - 2] [i_3 + 1] [i_0] [i_3 - 1]) ? var_6 : 11));
                        arr_15 [i_0] [i_1] = ((-((~(arr_8 [i_0] [16] [i_5])))));
                        var_28 ^= ((1 ? 0 : 1));
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                    {
                        var_29 ^= var_1;
                        var_30 = (arr_4 [i_4] [i_0]);
                    }
                    for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                    {
                        var_31 -= ((max(var_0, -19640)));
                        var_32 = ((+(max((arr_3 [i_0]), var_1))));
                    }
                    arr_23 [i_0] [i_1] [i_3] [i_0] = (~(arr_12 [i_0] [11] [i_0] [i_3] [13]));
                    var_33 = (arr_20 [6] [i_1] [6] [i_3] [9] [i_1] [i_4]);
                }
                var_34 = (min(var_34, 192));
                var_35 = (max(var_35, (arr_14 [16])));
            }
            var_36 = var_7;
            var_37 = (max((arr_13 [i_0] [i_0] [i_1] [i_1] [i_1]), 2566346332));
            var_38 -= (arr_11 [i_0] [i_1]);
        }
        for (int i_8 = 2; i_8 < 17;i_8 += 1)
        {
            var_39 ^= (arr_20 [i_0] [i_0] [i_0] [3] [i_8 + 1] [i_8 + 1] [3]);

            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                var_40 = (arr_7 [i_0]);
                arr_29 [i_0] [i_8] [i_0] [0] = (arr_16 [i_0] [i_0] [i_8 + 2] [i_9] [0]);

                /* vectorizable */
                for (int i_10 = 1; i_10 < 18;i_10 += 1)
                {
                    arr_34 [i_0] = (arr_2 [i_0]);
                    var_41 = ((573515288 ? (arr_16 [i_0] [i_0] [16] [i_9] [i_10]) : (~var_12)));
                    var_42 = (((arr_6 [i_0] [i_0] [i_10]) + (arr_31 [i_0] [i_8 - 2] [i_9])));
                    arr_35 [i_0] [13] = (arr_26 [i_0] [i_0] [i_0] [i_0]);
                    arr_36 [i_0] [i_0] [i_9] [i_10 + 1] = (((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]) <= (((arr_24 [i_0] [i_9] [i_0]) & (arr_7 [i_8])))));
                }
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {

                    for (int i_12 = 3; i_12 < 15;i_12 += 1) /* same iter space */
                    {
                        var_43 = var_1;
                        var_44 = (arr_38 [i_11] [17] [i_9] [12] [0] [i_11]);
                    }
                    for (int i_13 = 3; i_13 < 15;i_13 += 1) /* same iter space */
                    {
                        arr_43 [i_0] [i_0] [i_0] [i_0] [7] [i_0] [i_0] = ((!((max(((max(65530, (arr_8 [13] [12] [6])))), 0)))));
                        arr_44 [i_0] [i_0] [i_0] [i_11] [i_13] = (max((arr_22 [17] [i_8] [i_9] [i_11] [i_0] [i_0]), -var_7));
                        var_45 = (max((max(1738033358, (arr_24 [i_0] [i_13 - 1] [i_13 + 2]))), (arr_24 [i_0] [i_13 - 3] [i_13 - 3])));
                        var_46 = (arr_42 [i_0] [i_8] [i_8 + 1] [i_9] [i_13 - 3]);
                        arr_45 [i_8] [10] [0] [0] [i_8] [i_8] &= ((~(arr_8 [i_0] [i_9] [3])));
                    }
                    var_47 -= var_5;
                }
                arr_46 [i_0] [i_0] [i_8] [i_9] &= max((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_9]), (((arr_37 [4]) / (arr_38 [17] [i_0] [i_0] [i_8 - 2] [10] [i_9]))));
            }
            for (int i_14 = 1; i_14 < 16;i_14 += 1)
            {
                arr_49 [i_0] [12] [i_8] [i_8] &= var_5;
                arr_50 [i_0] [i_0] [i_0] [7] = (((max(65525, var_16))));
            }
            var_48 -= (((!((max((arr_32 [i_8] [2] [14]), (arr_33 [i_8] [i_8])))))));
            var_49 = 1;
            arr_51 [i_0] [i_0] [5] = ((max((max((-2147483647 - 1), 605485918)), var_13)));
        }
        for (int i_15 = 0; i_15 < 19;i_15 += 1)
        {
            arr_55 [i_0] [i_0] = (arr_7 [i_0]);

            for (int i_16 = 2; i_16 < 17;i_16 += 1)
            {
                arr_58 [i_0] [i_15] [i_15] = var_16;

                for (int i_17 = 0; i_17 < 19;i_17 += 1)
                {
                    var_50 = (max(var_50, ((max(((max((arr_27 [i_0] [i_15] [i_16]), (arr_27 [i_17] [i_16 + 1] [i_15])))), (((var_14 + 2147483647) >> (((arr_27 [i_16 - 1] [i_15] [i_0]) - 115)))))))));
                    arr_62 [i_0] [i_0] [i_15] [i_15] [i_15] [11] = ((max((arr_32 [i_0] [i_16 - 1] [i_16 - 2]), -844550096)));
                    var_51 = (arr_20 [i_16] [i_16] [i_16 + 2] [i_16] [i_16] [i_16] [i_16]);
                }
                for (int i_18 = 1; i_18 < 18;i_18 += 1)
                {
                    arr_66 [i_0] = (max(-17, (max(var_1, (arr_6 [i_16 + 2] [i_18 - 1] [i_18 - 1])))));
                    arr_67 [i_0] [i_15] [i_16] [i_0] = -19634;
                }
                /* vectorizable */
                for (int i_19 = 0; i_19 < 19;i_19 += 1)
                {
                    arr_70 [i_0] [i_15] [i_16] = var_7;
                    var_52 = var_12;
                }
            }
            arr_71 [i_0] [i_0] [i_15] = ((!(!31)));
        }
        for (int i_20 = 1; i_20 < 16;i_20 += 1)
        {
            var_53 = (35534 ^ 2100344250);
            arr_75 [i_0] [i_0] = arr_2 [i_0];
            arr_76 [i_0] = (arr_73 [i_20] [i_0]);
            arr_77 [i_0] [i_0] = (((max(57, 4363686772736))) ? var_8 : var_7);
            var_54 = 19632;
        }
        arr_78 [i_0] [i_0] = (8372224 ? 82 : -844550096);
        var_55 = (arr_74 [i_0] [i_0] [i_0]);
        var_56 -= (max((arr_28 [10] [i_0]), (((var_6 > (~18446744073709551613))))));
    }
    #pragma endscop
}
