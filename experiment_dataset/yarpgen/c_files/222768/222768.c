/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = (((arr_4 [i_1]) ? ((1020 ? (arr_4 [12]) : (!-3))) : (arr_5 [i_0])));
                    arr_8 [i_0] [7] [i_0] = 1861013510;
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {

        for (int i_4 = 2; i_4 < 20;i_4 += 1)
        {
            var_21 &= (~var_3);

            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                var_22 = (((((arr_12 [i_5] [i_5] [i_5]) <= 0)) ? (arr_12 [i_5] [i_3] [i_3]) : (arr_11 [14])));

                for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                {
                    arr_18 [i_6] [i_4 - 1] [i_6] = 1861013510;
                    arr_19 [18] [i_6] [i_4 - 1] [i_6] [i_3] = 127;
                }
                for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                {
                    var_23 = (14986 < 5);
                    arr_22 [20] [i_7] [i_5] [i_7] = -11;
                }
                for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
                {
                    var_24 = 4407549186349082446;
                    var_25 = (arr_0 [i_8]);
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 21;i_10 += 1)
                    {
                        {
                            arr_30 [i_3] [i_3] [i_3] [i_4] [i_9] [i_10] &= 1;
                            var_26 = (!427891626);
                            var_27 = 1;
                        }
                    }
                }
            }
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                var_28 *= arr_9 [i_4 + 1] [i_4 - 2];
                var_29 = ((~(((~5423623730092704628) ? (arr_16 [i_4 - 1] [i_4] [i_4 + 1] [i_4 + 2]) : (arr_32 [1] [i_4 + 2])))));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 20;i_13 += 1)
                    {
                        {
                            var_30 = ((~(arr_26 [i_3] [i_4] [16] [i_13])));
                            var_31 = 14072346288158037590;
                        }
                    }
                }
            }
            var_32 = (arr_14 [i_4 - 1]);
        }
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 22;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 22;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 22;i_17 += 1)
                    {
                        {
                            var_33 = 145;
                            arr_48 [i_17] [i_14] [1] [i_14] [i_3] = (arr_36 [4] [20] [i_15] [i_16] [18] [i_15] [i_14]);
                            var_34 ^= 427891610;
                            var_35 = 6;
                        }
                    }
                }
            }
            arr_49 [i_14] [i_14] = ((22947 ? (arr_25 [i_14] [i_14] [i_3] [i_14] [i_14]) : ((((!(arr_25 [i_14] [i_14] [1] [i_3] [i_14])))))));
            /* LoopNest 3 */
            for (int i_18 = 0; i_18 < 22;i_18 += 1)
            {
                for (int i_19 = 1; i_19 < 1;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 22;i_20 += 1)
                    {
                        {
                            arr_58 [i_20] [i_20] [i_14] [i_14] [i_14] [i_3] = (arr_7 [i_3] [i_14] [i_3]);
                            var_36 = (((39 <= 15) >= (arr_25 [i_14] [i_14] [i_19 - 1] [i_3] [i_14])));
                            var_37 = (((arr_6 [i_3] [22] [i_3] [i_3]) >= (((arr_51 [i_18] [i_14]) ? (arr_29 [i_19 - 1] [i_19 - 1] [i_19] [i_19 - 1] [i_19]) : (arr_36 [i_19 - 1] [i_19 - 1] [i_19 - 1] [i_19] [i_19 - 1] [i_19 - 1] [i_19 - 1])))));
                        }
                    }
                }
            }
            var_38 = ((((2318729805 ? 1 : 1)) / 65534));
            var_39 = (!18446744073709551615);
        }
        for (int i_21 = 0; i_21 < 22;i_21 += 1) /* same iter space */
        {
            arr_61 [19] [i_21] [i_21] &= ((((((-(arr_37 [i_3]))) + 2147483647)) << (5510109782688766531 - 5510109782688766531)));
            var_40 = (arr_12 [i_21] [20] [i_3]);
            var_41 = (max(var_41, ((((((((arr_59 [i_3]) != 17)) ? 70368744177663 : (((arr_53 [i_3] [16]) ? (arr_25 [i_21] [i_21] [14] [i_21] [i_21]) : 14423)))) | 2147483639)))));
        }
        for (int i_22 = 0; i_22 < 22;i_22 += 1) /* same iter space */
        {
            arr_65 [18] [i_3] [i_3] = 14877;
            var_42 = (((((213 >= 92) ? 5952482095575022734 : 3942490163462963413)) & -117));
        }
        arr_66 [i_3] = (arr_11 [i_3]);
    }
    #pragma endscop
}
