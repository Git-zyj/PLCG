/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 17;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_11 [i_2] [i_2] [i_2] [i_2] [7] [1] &= ((1 ? ((min(26749, 1))) : (-102 + 116)));
                                var_13 = (max(var_13, ((max((max((((arr_7 [i_0] [i_1] [i_2] [0]) >> (67 - 49))), ((min(25, 17))))), 26749)))));
                                arr_12 [i_0] [i_1] = (min(var_6, (arr_2 [i_0] [1] [i_0])));
                                var_14 ^= ((((+(((arr_3 [0]) * (arr_8 [13] [13])))))) ? var_8 : (((24 ? -101 : (((arr_3 [i_0]) ? (arr_7 [i_0] [i_2] [i_3] [i_3]) : var_3))))));
                            }
                        }
                    }
                    var_15 = (max(var_15, 16130401528499617698));
                }
            }
        }
        var_16 = (max((((((65533 ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : 1))) ? 65534 : (max((arr_4 [i_0] [i_0] [1] [i_0]), (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))))), (50 / -89)));
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            var_17 = ((~((-(arr_2 [i_5] [8] [15])))));
            arr_21 [i_5] [i_6] [i_5] = 85;
        }
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            arr_24 [i_5] [i_5] = (((((((((arr_3 [i_5]) ? (arr_14 [i_5]) : (arr_8 [i_5] [i_5])))) == ((1 ? 144080003703767040 : 10555021287625094908))))) == 15));
            arr_25 [0] [i_7] [i_5] = ((((((arr_23 [11] [i_7] [i_7]) >> (arr_23 [i_5] [1] [i_7])))) - (max(((((arr_22 [11] [i_5]) < 4194304))), (~10555021287625094908)))));
        }
        arr_26 [i_5] = (max((122 ^ 1), ((144 ? 1 : (arr_20 [i_5] [i_5])))));
        arr_27 [i_5] = ((((1 > (-2147483647 - 1))) ? ((((((337514342 ? 6 : var_7))) ? (((arr_10 [14] [14] [14] [i_5]) ? (arr_23 [i_5] [i_5] [9]) : (arr_9 [21] [21] [i_5] [i_5] [21]))) : ((-(arr_5 [i_5] [i_5] [i_5] [i_5])))))) : (((arr_10 [i_5] [i_5] [i_5] [i_5]) ? (~4194310) : ((((arr_19 [i_5] [i_5] [i_5]) ? 0 : (arr_5 [i_5] [i_5] [i_5] [i_5]))))))));
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                {
                    var_18 ^= ((max(((-(arr_20 [i_5] [i_8 + 1])), 31039))));
                    arr_33 [11] = 9489513402229518204;
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {

        for (int i_11 = 1; i_11 < 18;i_11 += 1)
        {
            /* LoopNest 3 */
            for (int i_12 = 2; i_12 < 18;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 20;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        {
                            arr_46 [i_10] [0] [i_12 - 1] [i_11] [i_11] = (arr_45 [8] [i_11] [8] [19] [16]);
                            var_19 = (min((arr_40 [i_12] [i_12] [i_14]), -4194293));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 20;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 20;i_16 += 1)
                {
                    {
                        var_20 = (max(var_20, var_3));

                        for (int i_17 = 0; i_17 < 0;i_17 += 1)
                        {
                            arr_56 [19] [i_11] [i_11] [i_11] [i_11] = 31011;
                            arr_57 [i_10] [i_10] [i_11] [18] = (224 - 34497);
                        }
                    }
                }
            }
            var_21 = (min(var_21, (~17106498502657051907)));
            arr_58 [i_11] = (arr_0 [1] [i_10]);
        }
        var_22 *= (min(((+(min((arr_3 [i_10]), var_11)))), ((((var_9 * 31) ? (arr_3 [i_10]) : (arr_7 [12] [i_10] [i_10] [i_10]))))));

        /* vectorizable */
        for (int i_18 = 0; i_18 < 20;i_18 += 1)
        {
            var_23 -= (((arr_49 [i_18] [18] [i_18] [i_18]) / 1));
            var_24 = (arr_34 [i_10] [i_10]);
        }
    }
    #pragma endscop
}
