/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;
    var_20 = var_17;
    var_21 += var_10;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_22 = (arr_4 [i_0 - 1] [i_0]);

                for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
                {
                    arr_10 [i_0] = max((21600 % 1564327894), (max((arr_2 [i_0] [i_0]), var_11)));
                    arr_11 [i_0] [i_2] [i_1 - 2] [i_0] = (((min((min((arr_4 [0] [i_0]), 2730639398)), 14310069794576275885)) - ((((arr_7 [i_0 + 4] [i_1 + 2] [i_2 + 1]) * (arr_7 [i_0 + 3] [i_1 - 1] [i_2 + 1]))))));
                }
                for (int i_3 = 0; i_3 < 0;i_3 += 1) /* same iter space */
                {
                    arr_14 [i_0] = (arr_4 [i_0] [i_0]);
                    var_23 = ((~((~(arr_13 [i_0 - 1])))));

                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        arr_17 [i_4] [i_0] [i_0] [i_0] = 8;

                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_24 = ((var_10 ? var_8 : (((((((-1 ? (-2147483647 - 1) : 1564327897))) == (min(var_8, (arr_3 [i_5])))))))));
                            var_25 = (min(var_25, 8190));
                            arr_22 [i_0] [i_1] [i_0] [i_4] [14] = (((~(max(var_8, (arr_19 [i_1] [i_3] [i_4] [i_5]))))));
                            var_26 = ((((503316480 + (arr_4 [i_0 + 2] [i_0]))) < (((-(max(2047, 15453)))))));
                        }
                        for (int i_6 = 1; i_6 < 22;i_6 += 1)
                        {
                            var_27 = (var_14 + 14727);
                            var_28 &= ((((max(((10223618714932233666 ? var_14 : (arr_7 [i_1] [i_3 + 1] [i_6]))), (~250)))) ? (((-4074356537299000689 >= var_9) ? var_9 : (524287 != var_13))) : ((((11651 & var_10) != (arr_12 [2]))))));
                            var_29 = (~(max(-2147483623, 0)));
                        }
                        /* vectorizable */
                        for (int i_7 = 4; i_7 < 21;i_7 += 1)
                        {
                            var_30 = ((~(((4294967271 > (-32767 - 1))))));
                            arr_29 [4] [i_1 - 1] [i_0] [14] [i_1 - 1] = 281474976710656;
                            arr_30 [i_0 - 1] [i_0] [i_3] [i_4] [i_7] = 1;
                            arr_31 [i_0] [i_0] [i_3 + 1] [1] [i_0] = var_17;
                        }
                        var_31 = (0 + 56);
                        arr_32 [20] [i_0] [i_3] [i_4] = (((((!(arr_1 [i_0])))) < ((((arr_1 [i_0]) > (arr_1 [i_0]))))));
                    }
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        arr_36 [i_0] = var_4;
                        arr_37 [i_0] [22] [i_1] [i_1 + 1] [i_0] = (min(((var_15 ^ (arr_5 [i_1] [i_1 - 1] [i_3]))), (((8647027127676334206 != (arr_28 [i_1] [i_1 + 1] [i_3 + 1] [i_3] [i_3 + 1] [1]))))));
                        arr_38 [i_0] [i_1 + 1] [i_3] [7] [i_0] = ((((var_17 < (arr_5 [i_0] [i_0 + 3] [i_0]))) ? (((1 | (arr_15 [i_0] [i_0])))) : var_17));
                        arr_39 [i_0] = (var_10 > var_9);
                    }
                    var_32 += ((((min(var_14, -1))) ? (max((arr_28 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]), (arr_28 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3]))) : (((arr_28 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3]) ? var_17 : (arr_28 [i_3 + 1] [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 1] [i_3 + 1])))));
                }
                arr_40 [i_0] = var_18;
            }
        }
    }
    #pragma endscop
}
