/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_14 = (min(var_14, (!var_12)));
                            var_15 = (min(var_15, (((-117 ? 17455 : 0)))));

                            for (int i_4 = 0; i_4 < 12;i_4 += 1)
                            {
                                arr_12 [i_0] [i_0] [8] [i_2] [i_1] [i_3] [i_3] = ((-(((var_2 ? 1 : 24442)))));
                                arr_13 [i_0] [i_1 + 2] [i_1] [i_0] = ((((((arr_10 [i_1]) ? 573972140 : -1526455819))) || (((arr_7 [i_1]) > 29499))));
                            }
                        }
                    }
                }
                var_16 = ((((var_11 ? 1 : (arr_1 [i_1 + 3] [i_1 - 1]))) < ((-(arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 4] [i_1 - 1])))));

                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    var_17 = (((max(var_9, var_12))) ? (((!(arr_8 [i_1 + 1] [i_1 + 3] [i_1 - 1] [i_1 + 2])))) : 249258678);
                    var_18 *= ((((max(1, 1))) * (arr_0 [i_1 + 3])));
                }
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    var_19 ^= (((!var_4) <= ((max(0, (arr_0 [i_1 + 2]))))));
                    arr_19 [i_1] = (max((!-24443), (min((arr_1 [i_0] [i_1 + 3]), (arr_9 [i_0] [i_1 + 3] [i_6] [i_0])))));
                    var_20 = (max(var_20, (0 >= -3723785265226075393)));
                    var_21 = (((!42660) ? (1 || 1) : ((-(22875 % 1)))));
                    arr_20 [i_1] = ((1 ? (max((~var_10), var_9)) : 19321));
                }
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    var_22 &= ((~(arr_6 [i_7])));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_23 = (max((((arr_17 [i_1] [i_1 + 4] [i_1 + 2] [i_1 + 1]) ? (arr_2 [i_1 + 1] [i_1 + 4]) : 1)), (((-32761 <= (arr_23 [i_1] [i_1] [i_1 - 1] [i_1] [0] [i_1]))))));
                                var_24 = (max((((((0 << (var_10 - 197)))) ? ((~(arr_23 [i_0] [i_1 + 2] [i_1 + 2] [i_0] [i_9] [i_1]))) : 1342024425)), var_8));
                            }
                        }
                    }
                }
                var_25 = ((57285 ? var_5 : (min(296156716312283583, (arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))));
            }
        }
    }
    var_26 = ((((((1 + 0) ? (((-322652042 ? 127 : 7850))) : -var_7))) ? ((((var_12 < (~-4869))))) : var_11));
    var_27 = var_6;
    var_28 = var_8;
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 9;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 9;i_13 += 1)
                    {
                        {
                            var_29 = (max(var_29, (((~(((!(arr_29 [i_13])))))))));
                            arr_39 [i_10] [i_11] [i_12 - 1] [i_12] [i_13 - 1] = (min((arr_27 [i_12 + 1] [i_13] [i_13] [i_13 - 2] [i_13]), (((1 + (arr_27 [i_12 + 1] [i_13] [i_13] [i_13 - 2] [i_13]))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_14 = 0; i_14 < 10;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 10;i_15 += 1)
                    {
                        for (int i_16 = 3; i_16 < 9;i_16 += 1)
                        {
                            {
                                var_30 = ((((min(var_3, (arr_17 [i_10] [i_10] [i_15] [i_15])))) ? -5508367264683836872 : ((((arr_24 [1] [i_16 + 1] [i_16 - 1] [i_16 - 1] [i_16 - 2]) ? (arr_24 [i_16] [i_16 + 1] [i_16 - 1] [i_16 - 1] [i_16 - 2]) : 322652047)))));
                                var_31 = ((var_6 ? (min(((853006236 ? var_10 : var_13)), (arr_45 [i_10] [i_11] [i_14] [i_11] [i_15] [i_16 - 1]))) : (max((25897 / 39639), (~24844)))));
                            }
                        }
                    }
                }
                var_32 = (min(var_32, (((~(max((min(121, 8510065712981108762)), 1)))))));
                var_33 = (!((max((min(var_5, var_13)), 32270))));
                var_34 = ((1 ? (!var_4) : (!var_7)));
            }
        }
    }
    #pragma endscop
}
