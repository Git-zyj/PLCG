/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 = (1 ? (var_9 > 1) : (arr_1 [i_0] [i_0]));
        arr_3 [i_0] [i_0] = ((~((4969792878332269862 | (arr_0 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_14 = var_10;
            var_15 &= (arr_4 [i_1]);
        }
        for (int i_3 = 2; i_3 < 18;i_3 += 1)
        {
            var_16 = (((arr_11 [i_3 + 1] [i_3] [i_3 + 1]) != (arr_11 [i_3 + 1] [i_3 + 1] [i_3 + 1])));

            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                var_17 = (arr_8 [i_1] [i_1]);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            arr_20 [i_6] [i_1] [i_4] [i_1] [i_1] = -1;
                            var_18 = (max(var_18, ((((var_12 * var_2) ? (((arr_17 [14] [i_3 - 1] [i_3] [i_3] [i_3] [6]) ? 1 : 7873130452132952938)) : (arr_16 [i_6] [i_6] [i_4] [i_5] [i_4]))))));
                            var_19 = ((arr_19 [i_5] [i_1] [i_1] [i_1]) ? 13476951195377281753 : -23691);
                            var_20 = (((-(arr_15 [i_1] [i_1]))));
                            arr_21 [8] [i_1] [i_5] = ((var_9 | (((var_9 ? 251658240 : var_4)))));
                        }
                    }
                }
            }
            var_21 += (arr_6 [i_3]);
            var_22 += (1 == 2785881376);
            var_23 = ((54242 ? var_11 : (arr_16 [i_1] [i_3] [i_1] [i_3 + 1] [i_1])));
        }
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            arr_24 [i_1] [i_7] = (var_10 | var_8);
            var_24 = (min(var_24, 28));
            var_25 = (((arr_13 [i_7] [i_7] [i_1]) ? (arr_13 [i_1] [13] [i_1]) : var_8));
            var_26 = ((var_4 || ((((arr_8 [i_1] [i_1]) - var_7)))));
        }
        arr_25 [i_1] = ((3114148216 ? 224 : 4969792878332269862));
        var_27 = (arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
    }
    for (int i_8 = 1; i_8 < 21;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                {
                    var_28 *= (4245288228521917941 != 0);
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 23;i_12 += 1)
                        {
                            {
                                var_29 = (((min(((var_9 ? var_5 : var_8)), (((var_6 ? 4181430706 : 251))))) <= (arr_35 [i_8] [i_9] [i_10] [i_12] [i_12] [i_8])));
                                var_30 += 3738633856864469737;
                            }
                        }
                    }
                }
            }
        }
        var_31 = 2619552825;
        var_32 = (min(var_32, ((min(((min(((var_4 || (arr_29 [16]))), 1))), (min(1509085919, 1509085923)))))));
        var_33 = ((+((var_1 ? (~var_1) : ((58230763283095624 ? var_8 : 2710301272))))));
    }
    var_34 = var_4;
    #pragma endscop
}
