/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_11 = 32767;
                    arr_10 [i_0] [i_0] [i_0] = max(((((((-65 ? 16320 : var_10))) <= (arr_4 [i_1 - 1] [i_1 - 1] [i_2 + 1])))), ((-65 ? 1152921504606846976 : (arr_0 [i_1 - 1] [i_2 + 1]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [2] [i_2 - 1] [i_3] [i_4] [i_3] [i_1 - 2] = (arr_9 [i_0] [i_1]);
                                arr_18 [i_4] [i_1] [i_2] [i_3] = (~17293822569102704653);
                                var_12 *= (arr_0 [i_0] [i_0]);
                                arr_19 [i_0] [i_1] [i_0] [i_0] [i_3] [i_0] [i_0] = ((var_1 ? var_4 : ((((arr_11 [i_4] [i_2 - 1] [i_1] [i_1]) != var_2)))));
                                var_13 = -54191;
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 |= ((10619 >> (143552238122434560 - 143552238122434531)));
    var_15 ^= (~var_6);
    var_16 |= var_9;

    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        var_17 = (max(var_17, var_4));
        var_18 += min((((1668465619 > (arr_21 [i_5] [i_5])))), ((-(52683 >= var_6))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {

                        for (int i_9 = 4; i_9 < 7;i_9 += 1) /* same iter space */
                        {
                            arr_33 [1] [i_6] [i_7] [i_8] [i_9] [i_9] = (((((arr_8 [i_7] [i_6] [i_7] [i_8]) & (arr_14 [i_9] [i_9 + 3] [i_9 - 3] [i_9 - 1] [i_9 - 1]))) < (21 / 57)));
                            var_19 -= (arr_15 [i_9] [12] [i_7] [14] [i_5]);
                            arr_34 [i_5] &= (var_1 != 1668465619);
                            arr_35 [i_5] [i_5] [i_7] [i_8] [i_9] [i_5] [i_7] |= (((arr_6 [i_5]) + (max((arr_27 [i_9 - 1] [i_8] [i_5] [i_5]), var_2))));
                            var_20 = 17293822569102704653;
                        }
                        for (int i_10 = 4; i_10 < 7;i_10 += 1) /* same iter space */
                        {
                            arr_39 [i_7] [i_6] [i_7] = (((((var_8 ? var_10 : var_2))) ? (min((arr_38 [i_10 - 1] [i_10 + 1] [i_10 - 3] [i_10 - 4] [i_10] [i_10] [i_10 + 2]), var_3)) : (10619 > 1935329842)));
                            arr_40 [i_5] [i_6] [i_7] [i_8] = ((((-14634 + (arr_15 [i_10 - 2] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 4]))) * ((((arr_6 [i_10 - 3]) == 8757)))));
                            var_21 = (min(var_21, ((min(((((max(17293822569102704653, var_1))) ? (arr_4 [i_10] [i_7] [i_5]) : 10619)), var_9)))));
                            arr_41 [1] [i_6] [1] [i_6] [i_6] [9] [i_6] = (((((max(var_3, var_6)))) && 2388));
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            var_22 = var_8;
                            arr_45 [i_5] [i_6] [i_5] [i_11] [i_11] = 239130616381537981;
                            arr_46 [i_5] [i_6] [i_7] [8] [i_11] [i_11] = (((arr_13 [i_5]) | 0));
                        }
                        var_23 = min(((((((arr_36 [i_5] [i_6] [i_6] [i_7] [i_8]) ? 15568519280619783384 : var_2)) == 221))), 8828);
                    }
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        arr_51 [i_5] [i_5] [5] [i_12] = (-87 ^ 12853);
                        var_24 = (max(var_24, ((min(((!((((arr_9 [i_7] [i_6]) ? var_5 : (arr_22 [i_7] [i_12])))))), var_5)))));
                        var_25 = max((((((max(var_7, var_4)))) <= ((~(arr_4 [i_5] [i_6] [i_6]))))), (((186 & var_6) > (~var_6))));
                    }
                    var_26 = (min((var_10 <= 9253728591374415760), (((((arr_12 [i_6]) ? 14633 : (arr_15 [i_7] [i_6] [i_6] [i_5] [i_5]))) ^ var_5))));
                }
            }
        }
    }
    #pragma endscop
}
