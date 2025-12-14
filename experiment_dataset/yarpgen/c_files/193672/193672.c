/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_14 &= (((((-(var_12 * 8245)))) && ((((((max(255, 1)))) & 7063832115048677152)))));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    arr_7 [i_2] [i_1] = (((arr_4 [i_2 - 1] [i_1] [i_1]) ? (arr_4 [i_2 + 2] [i_2 + 2] [i_2]) : (arr_4 [i_2 + 1] [1] [1])));
                    var_15 = ((236 ? (~6575) : 18));
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    var_16 = ((((min(var_9, var_13))) ? ((var_12 ? -1697275334 : var_6)) : (((((min(241, var_0))) ? 255 : 22223)))));
                    var_17 = (min((((((arr_9 [i_3] [i_3] [i_1] [i_0]) / 9223372036854775793)) % (((var_8 << (var_2 + 2380)))))), (((var_4 << (var_10 - 1))))));
                    var_18 = (max(var_18, (((((((arr_4 [19] [i_1] [i_0]) & var_1))) % ((var_6 ? (((max(8902, var_3)))) : ((var_10 ? -9223372036854775793 : var_1)))))))));

                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_19 ^= (min((max(((max(233, var_3))), var_11)), (((63591 << ((((((9223372036854775807 ? (arr_10 [i_3] [i_3] [14]) : 63488)) + 5674924788491706337)) - 21)))))));
                        arr_15 [8] [i_1] [i_4] [i_4] = ((~((254 ? ((1125899906834432 ? 13121 : -1)) : (~var_8)))));
                    }
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        var_20 = (((var_6 + 9223372036854775807) << (((arr_6 [i_5] [i_5 + 1] [i_5 + 1] [i_5 + 1]) - 37))));
                        arr_18 [i_5] [14] [18] [i_1] [i_1] [i_0] = max(((((var_7 ? var_1 : (arr_0 [i_3] [i_0]))))), (arr_12 [i_0] [i_3] [i_0] [i_5] [i_1] [2]));
                        var_21 = ((~(((max(16376, var_5))))));
                        var_22 = (max((((var_12 || ((max(52396, var_1)))))), (max(var_7, 36))));
                    }
                    for (int i_6 = 1; i_6 < 18;i_6 += 1)
                    {
                        arr_23 [11] [i_1] [i_3] [i_6] [i_1] [i_6 + 1] = (!246);
                        var_23 = (max(var_23, (((var_7 ? var_12 : (((arr_2 [i_3] [2] [i_3]) ? (var_5 ^ var_8) : ((min(234, var_8))))))))));
                        var_24 = ((var_12 % (((arr_13 [i_6 + 2]) ? var_3 : (arr_13 [i_1])))));
                    }
                    var_25 = ((((!(arr_16 [17] [i_3] [i_1] [i_1] [i_0] [i_0]))) ? 52389 : ((-(arr_16 [i_3] [i_3] [i_1] [i_1] [i_1] [i_0])))));
                }
                for (int i_7 = 2; i_7 < 17;i_7 += 1)
                {
                    arr_28 [i_0] [i_1] [i_0] [13] = (min((((min(-538945688, (arr_6 [18] [i_1] [15] [i_0]))))), ((var_1 ? -1125899906834435 : var_12))));
                    var_26 = (((min(24281, ((-568034214 ? 24289 : -1)))) - var_7));
                    arr_29 [i_0] [i_0] [i_0] = (max(72057594021150720, 1479));
                    var_27 = (((min(var_8, 29216))));
                }
            }
        }
    }
    var_28 = var_11;
    var_29 = var_6;
    var_30 &= min(((((((var_6 + 9223372036854775807) << (var_1 - 29346))) != ((var_9 ? var_6 : var_7))))), 9938);
    #pragma endscop
}
