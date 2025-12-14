/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_10 [i_0] [i_0] |= ((!var_5) ? 43987 : ((((arr_9 [i_0] [i_0] [i_1] [i_2]) > 63))));
                    arr_11 [i_1 + 4] [1] [i_1] = (((((~1) % 7182429969975969245)) + -1));
                    var_13 = (max((min(-7182429969975969249, 5096)), 7182429969975969245));
                }
                for (int i_3 = 1; i_3 < 23;i_3 += 1)
                {
                    arr_16 [i_1] [i_3 + 2] = ((var_12 ? var_6 : (((arr_14 [i_1]) % (((var_3 << (8523764864302910077 - 8523764864302910055))))))));
                    var_14 &= ((arr_0 [i_1] [i_1]) && -var_0);
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                arr_26 [i_6] [i_6] [i_6] [i_6] [16] [i_6] [2] = var_8;
                                var_15 = (min(var_15, (((!(((-(arr_7 [i_1 + 4] [i_1 + 2] [i_1 - 1] [i_5])))))))));
                                arr_27 [i_6] [i_5] = ((!(((((arr_5 [i_5]) ? -1067601334799851608 : var_3)) != (!0)))));
                                var_16 = (min((-48226 / -1), (max(var_0, 1))));
                            }
                        }
                    }
                }
                var_17 = (arr_0 [i_1 + 1] [i_1 + 3]);
            }
        }
    }

    /* vectorizable */
    for (int i_7 = 1; i_7 < 11;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
        {
            var_18 = var_8;
            arr_34 [i_7] [i_8] = (arr_1 [21] [i_8]);
            var_19 = (max(var_19, ((((arr_14 [i_7 + 1]) ? var_5 : (arr_25 [i_7] [i_7] [i_7 - 1] [i_7] [i_7] [i_7 + 1]))))));
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
        {
            var_20 = (min(var_20, 3653867308066773839));
            var_21 = var_12;
        }
        arr_37 [i_7] = (arr_13 [i_7] [i_7 + 1] [i_7 - 1] [i_7]);
        arr_38 [i_7] [i_7] = var_2;
        arr_39 [i_7] [10] = var_10;
    }
    for (int i_10 = 3; i_10 < 23;i_10 += 1)
    {
        var_22 ^= ((((~(arr_1 [i_10 + 1] [i_10 - 3]))) - ((max(66, (arr_1 [i_10 - 1] [i_10 + 1]))))));
        arr_42 [i_10] = ((-((((arr_22 [i_10 - 2] [i_10 - 3] [i_10 - 2]) && (((~(arr_14 [i_10])))))))));
        var_23 *= (~var_8);
    }
    for (int i_11 = 0; i_11 < 10;i_11 += 1)
    {
        arr_45 [i_11] = ((((((arr_24 [20] [20] [4] [20] [20]) ? var_9 : 4245911205))) >= 9792098665486916338));
        arr_46 [i_11] |= var_7;
    }
    #pragma endscop
}
