/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= ((~((var_3 ? var_11 : -var_1))));
    var_21 = (var_17 & var_11);

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((min(29026, (((1691342695 < (arr_1 [8])))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_22 = (arr_6 [i_0] [i_0]);
                    var_23 ^= var_3;
                }
            }
        }

        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            arr_12 [i_0] [9] = (min(2162949762, ((((arr_8 [i_0] [i_3] [i_3] [i_0]) > 583462343)))));
            arr_13 [i_0] [6] [i_3] &= -1622179438;
            arr_14 [i_0] = (((((~0) + 2147483647)) << (69 - 69)));
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                arr_22 [i_0] [i_0] [i_0] = ((1068892961 >= (arr_21 [i_0] [i_4] [i_4] [i_5])));
                arr_23 [i_0] [i_0] = 0;

                /* vectorizable */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    arr_27 [i_0] = (93 ? 477020586 : 1);

                    for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                    {
                        arr_30 [i_7] [i_0] [i_4] [i_0] [i_0] = (~var_0);
                        var_24 = (min(var_24, (((62029 & (arr_19 [i_0] [i_5] [i_5]))))));
                    }
                    for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                    {
                        arr_33 [i_0] [i_0] [i_4] [i_5] [i_6] [i_8] = (arr_15 [i_0]);
                        var_25 ^= (46558 || 11);
                        var_26 = -23;
                        var_27 = (max(var_27, (-1054492491 / 2124324980)));
                    }
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    var_28 = -69;
                    var_29 = (var_3 != -11849);
                }
                for (int i_10 = 1; i_10 < 1;i_10 += 1)
                {
                    arr_38 [i_0] = ((((((186 & 50331648) > (arr_4 [i_0] [i_5])))) & (!-13)));
                    var_30 = (min(var_30, -59));
                }
                for (int i_11 = 1; i_11 < 8;i_11 += 1)
                {

                    for (int i_12 = 2; i_12 < 7;i_12 += 1)
                    {
                        var_31 = (((max((arr_31 [i_0] [i_11 - 1] [i_11 + 3] [i_0]), 65530))) <= (max((-127 - 1), var_6)));
                        var_32 += ((~((14 ? var_8 : (arr_36 [i_4] [i_5] [i_4] [i_12] [i_5] [i_12 - 1])))));
                    }
                    for (int i_13 = 1; i_13 < 10;i_13 += 1)
                    {
                        arr_46 [i_0] [i_0] [i_5] [i_5] [i_4] = (!3226074334);
                        arr_47 [i_0] [i_5] [i_4] [i_0] = ((-(~1)));
                        arr_48 [i_0] [i_0] [i_5] [8] [i_0] [i_13] = (!(((37 & (46 > 0)))));
                        arr_49 [i_0] [0] [i_11] [i_13] = ((2890867503 ? 1 : 1));
                    }
                    arr_50 [i_0] [i_4] [i_4] [0] [i_0] = ((!(((~(~var_10))))));
                }
            }
            arr_51 [i_0] [i_0] [i_0] = min((((~1) ^ -10246)), ((21972 ? (247 & 1) : ((max(var_17, 255))))));
            var_33 -= (+((max((arr_35 [i_0] [i_0] [6] [i_0] [1] [i_0]), (arr_35 [1] [2] [0] [i_4] [2] [i_0])))));
        }
        for (int i_14 = 0; i_14 < 11;i_14 += 1)
        {
            arr_54 [i_0] [i_0] [i_0] = ((((!(var_2 ^ var_5))) && (175 & 2045416166)));
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 11;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 11;i_16 += 1)
                {
                    {
                        var_34 = (min(var_34, var_7));
                        var_35 = (max(var_35, (((0 ? ((max((arr_31 [i_16] [i_15] [i_14] [i_16]), (arr_31 [i_14] [i_14] [2] [i_14])))) : ((((max(14, 0)) <= (arr_25 [i_0] [8] [i_0] [i_0])))))))));
                        arr_62 [1] [i_0] = ((+(((arr_53 [i_16] [i_0] [i_14]) >> (arr_53 [i_0] [i_0] [i_0])))));
                        var_36 = ((-((((((arr_18 [i_0] [i_14] [i_14]) / 62)) >= (arr_20 [i_0] [i_0] [i_14] [i_0]))))));
                    }
                }
            }
            var_37 ^= ((((((-24585 + 2147483647) << (((arr_4 [i_14] [i_0]) - 264031258))))) ? 203 : 108));
            arr_63 [i_0] [i_0] [i_0] = ((1807184384 <= (((1 ? (arr_52 [i_0]) : 0)))));
        }
        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {
            arr_66 [i_0] [i_0] [i_17] = (--175);
            var_38 = (max(var_38, (((18217 <= ((((arr_41 [i_0] [i_17] [i_17] [4] [i_17]) != var_2))))))));
        }
        arr_67 [i_0] = (!1);
    }
    #pragma endscop
}
