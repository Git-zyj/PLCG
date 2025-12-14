/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 += max((-12172 | -7227026196831115065), (min((min(6356685226919349911, -6887968684307887366)), (((arr_0 [i_0] [13]) % 7227026196831115054)))));
        var_14 = (min(57453, ((-(((arr_1 [i_0]) / (arr_0 [i_0] [i_0])))))));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_15 = 1;
            arr_5 [i_0] [i_1] = ((0 ? (0 != -21438) : (max((arr_3 [i_0] [i_1]), (arr_4 [i_0] [i_1] [2])))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        {
                            var_16 = (((138 % 82) != 219));
                            var_17 = (max(var_17, (((2955294884 ? 215 : -6887968684307887366)))));
                            var_18 *= (!-1419800346566808939);
                        }
                    }
                }
            }
            var_19 *= (((-7227026196831115065 & 1) < (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])));
        }
        var_20 = (((min(17818, (min(6887968684307887378, -6887968684307887375)))) / ((max(((1 ? 15910 : 248)), (arr_1 [i_0]))))));
    }
    for (int i_6 = 1; i_6 < 9;i_6 += 1)
    {
        var_21 = ((!((max((max((arr_11 [i_6] [4] [i_6] [i_6] [i_6] [i_6]), (arr_8 [0] [i_6 + 1] [i_6]))), ((max((arr_1 [i_6]), 1))))))));
        arr_18 [i_6] = ((!(arr_0 [i_6 - 1] [i_6 + 3])));
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            {
                var_22 = (((((min(0, 1)))) == (arr_3 [i_7] [i_8])));
                arr_26 [i_8] = (arr_24 [i_7] [i_7] [i_8]);
                var_23 = 1;
                /* LoopNest 2 */
                for (int i_9 = 4; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        {

                            for (int i_11 = 1; i_11 < 1;i_11 += 1)
                            {
                                arr_33 [i_7] = ((max(((min(-12145, (arr_8 [i_7] [i_8] [i_8]))), (max((arr_6 [i_9] [i_9] [i_9]), -1609092353960656413))))));
                                arr_34 [i_9] [i_8] [i_9] [12] [12] = ((((min(12254, 1))) << (((arr_6 [i_9] [i_9 - 3] [i_9]) - 34536))));
                                var_24 *= (0 % 1600205591);
                                var_25 = (max(var_25, (((~(min((min((arr_25 [15] [i_8]), 1)), (arr_12 [i_10] [i_11] [i_11 - 1] [i_9 - 3] [i_11]))))))));
                                arr_35 [i_11] [i_8] [i_7] [i_10] [i_8] [i_11] [i_7] &= (max(((((((12144 && (arr_8 [i_9] [i_9] [i_11])))) * -14696))), (min((~166), (min(32236, (arr_12 [i_9] [i_9] [i_9] [i_9 - 3] [i_10])))))));
                            }
                            var_26 *= -2874576297084263488;
                            arr_36 [i_7] [i_7] [i_7] [i_10] &= (1 ? (!0) : 20769);
                            var_27 = (~62245);
                        }
                    }
                }
            }
        }
    }
    var_28 = (min(var_5, var_3));
    var_29 = var_3;

    /* vectorizable */
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        var_30 = ((-1280105173 ? 4292 : 14363468063887403026));
        arr_40 [i_12] = ((-132 != (41724 > 1251499067)));
    }
    #pragma endscop
}
