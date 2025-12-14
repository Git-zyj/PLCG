/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_18 = ((~(min(27, (min(2147483647, -5637700103786772643))))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_19 ^= min(((min((max(343559604, 29)), (((arr_5 [i_1]) >> (((arr_4 [i_0] [i_0] [i_0]) - 53))))))), ((max(0, var_3))));
            var_20 = (min((((((((arr_5 [i_0]) ? (arr_3 [i_0] [i_1]) : (arr_2 [i_0] [i_0])))) ? -5698 : (arr_4 [i_1] [i_0] [i_0])))), (arr_5 [i_1])));
        }
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = (((((0 ? 2864927105 : var_3))) ? (arr_1 [i_2] [10]) : 172));
        var_21 &= (((arr_2 [i_2] [i_2]) != (arr_2 [i_2] [i_2])));
        var_22 -= (arr_0 [i_2]);

        for (int i_3 = 2; i_3 < 23;i_3 += 1)
        {

            for (int i_4 = 2; i_4 < 21;i_4 += 1)
            {
                arr_14 [i_2] [12] [i_3] = (((!8246) ? 67 : var_1));
                var_23 = (arr_4 [i_2] [i_3] [i_4]);
                var_24 ^= var_8;
            }
            for (int i_5 = 3; i_5 < 20;i_5 += 1)
            {
                arr_17 [i_3] [i_3] [i_3] [i_2] = arr_5 [i_3];
                var_25 = (arr_8 [i_3] [i_5]);
            }
            var_26 ^= (((((0 || (arr_13 [20] [i_3 + 1])))) == (arr_8 [i_3] [i_2])));
        }
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 20;i_7 += 1)
            {
                {
                    var_27 = (max(var_27, var_1));
                    arr_24 [i_2] [i_6] [i_7] = (arr_23 [i_7]);
                }
            }
        }
    }

    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        var_28 = -562;

        for (int i_9 = 3; i_9 < 10;i_9 += 1)
        {
            arr_32 [8] &= ((max((arr_30 [2]), (arr_6 [i_9 - 2] [i_9 + 1]))));
            var_29 = (max((arr_6 [i_9 - 3] [i_9 - 3]), 0));
        }
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {

            for (int i_11 = 1; i_11 < 9;i_11 += 1)
            {
                var_30 += (((((490166954 ? 83 : (arr_0 [i_8]))) < 343559604)) ? ((-((min((arr_29 [i_11]), (arr_1 [i_11] [i_8])))))) : (arr_19 [11]));
                arr_40 [i_8] [i_10] [i_8] = (((((min(var_8, 87)))) ? (((((343559601 ^ (arr_31 [i_8] [i_10] [i_11])))) ? (arr_4 [i_11 + 1] [i_11 + 2] [i_11]) : (arr_1 [i_11] [i_8]))) : (((-((min(24492, (arr_0 [i_11 + 1])))))))));
            }
            for (int i_12 = 1; i_12 < 10;i_12 += 1)
            {
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 9;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 1;i_14 += 1)
                    {
                        {
                            arr_49 [i_8] [i_8] = ((((min(46, (arr_23 [i_12 - 1])))) ? (((arr_35 [i_13] [i_13] [i_14 - 1]) ? var_14 : (((arr_48 [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_13 + 1] [i_12] [i_10] [i_8]) & 105)))) : (arr_18 [i_14 - 1])));
                            var_31 = ((((max(347959681, 1536))) ? (((arr_4 [i_13 + 1] [i_13 - 1] [i_12 + 2]) ? 32767 : (arr_2 [i_13 + 1] [i_14 - 1]))) : (((((((arr_2 [i_8] [i_8]) ? (arr_30 [i_8]) : (arr_3 [i_8] [i_8])))) ? ((172 ? 63999 : 151)) : ((min(var_10, var_0))))))));
                            var_32 = var_7;
                        }
                    }
                }
                arr_50 [i_8] [i_8] = (((-var_17 ? 547868561 : ((~(arr_45 [i_12 + 2] [i_10]))))));
                arr_51 [i_8] = -24495;
            }

            for (int i_15 = 2; i_15 < 10;i_15 += 1)
            {
                arr_54 [i_8] = (((arr_33 [i_8]) ? (arr_8 [i_8] [i_10]) : ((min(-32192, (arr_29 [i_15]))))));
                arr_55 [i_8] [i_15] [i_10] [i_8] = (((((((min(1, 24))) ? ((min(-4, (arr_31 [i_8] [i_10] [i_8])))) : (min(var_1, -1889690721))))) ? (min(((((arr_22 [i_15 - 2] [i_10] [i_10]) || 1))), (((arr_20 [i_8] [i_10] [15]) ? 29 : 178)))) : (min(17, ((-(arr_52 [i_8])))))));
            }
            arr_56 [i_8] [0] &= (((((arr_45 [i_8] [i_10]) ? var_9 : (((arr_34 [0] [i_10]) ? (arr_26 [i_8]) : (arr_39 [i_10] [i_8]))))) << (var_10 - 10043)));
            arr_57 [8] &= (20633 != 1);
        }
        var_33 -= var_17;
    }
    var_34 ^= (max((var_10 <= 253), -32));
    #pragma endscop
}
