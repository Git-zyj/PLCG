/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -20728;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_15 = (min(var_15, 20700));

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3] [i_4] = ((20728 ? 20736 : 20719));
                            var_16 = (arr_9 [i_0] [i_0] [i_0] [i_0 + 1]);
                            var_17 *= -1577014376;
                            arr_13 [i_0] [i_0] [9] [i_3] [i_4] = (arr_8 [i_0 + 1] [i_2] [i_0 + 1] [i_3] [i_4] [i_4]);
                        }
                        arr_14 [i_1] [i_1] [i_3] = -0;
                    }
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        arr_18 [i_0] [i_1] [i_2] [i_5] = (arr_8 [i_0] [i_0 - 1] [i_1] [4] [i_1] [i_0 - 1]);
                        arr_19 [2] = 12608124242845170573;
                    }
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        arr_24 [i_0] [1] [i_2] [i_6] = (arr_0 [i_0]);
                        arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_9 [i_0] [i_0 - 2] [i_0 - 2] [i_0 + 1]) ? (arr_9 [i_0 - 2] [i_0 - 1] [i_0 + 1] [i_0 + 1]) : var_0));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 21;i_8 += 1)
                        {
                            {
                                var_18 -= (arr_11 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 2] [i_0 - 1] [i_0 - 2]);
                                var_19 ^= ((9786197102563465849 ? 17065509588039701361 : (arr_27 [i_8 - 1] [i_8 + 1] [i_8 + 2])));
                                arr_32 [i_0] = -7;
                                arr_33 [i_2] [i_2] [i_2] [i_2] [i_2] = ((1381234485669850274 ? (arr_22 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) : (arr_10 [i_8 + 2] [i_8 + 2] [i_8 - 1] [i_8 + 1] [i_8])));
                            }
                        }
                    }
                    var_20 = (+-20753);
                }
            }
        }
        var_21 = -1;
        arr_34 [i_0 - 1] = (!-20729);
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        arr_39 [i_9] [i_9] = (((arr_29 [i_9] [i_9]) ? ((-20728 + (arr_29 [i_9] [i_9]))) : (arr_29 [i_9] [i_9])));
        var_22 = min(((((arr_7 [19] [i_9] [i_9] [9] [i_9]) ? (((!(arr_9 [i_9] [i_9] [i_9] [i_9])))) : 17065509588039701361))), (~1381234485669850257));
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            for (int i_11 = 4; i_11 < 17;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    {
                        var_23 = (((((((-5380011581698410592 ? (arr_37 [i_10]) : (arr_41 [i_12] [i_10] [i_10])))) || ((((arr_37 [i_10]) ? 9223372036854775792 : (arr_30 [23] [20] [i_10] [i_11] [i_12])))))) ? (((arr_16 [11] [i_9] [i_11 + 1] [i_11 - 4] [i_11 + 3] [i_11]) << (((-20737 ^ 8191) + 20255)))) : var_0));
                        arr_47 [i_9] = ((((((5838619830864381074 % (arr_28 [i_11] [i_10] [i_9]))))) - ((~(arr_20 [i_9] [i_9] [i_9] [i_9] [i_9])))));
                    }
                }
            }
        }
    }
    var_24 *= -var_12;
    #pragma endscop
}
