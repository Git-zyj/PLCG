/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 0;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = (((((0 ? (arr_1 [i_0]) : 62407))) ? (((2155730574 | 2139236729) ? var_9 : (~var_5))) : (((max((max((arr_2 [i_0]), 127)), var_10))))));
        var_14 = var_1;
    }
    for (int i_1 = 1; i_1 < 7;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_15 = 55;

            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                var_16 = ((-((var_7 ? 255 : ((max((arr_2 [i_3]), (arr_2 [17]))))))));
                var_17 = (((1356828334 ? var_7 : 209)));
                var_18 = ((~(arr_4 [i_2])));
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                var_19 = arr_13 [i_1 + 1] [i_1 + 3] [i_1];
                var_20 = ((arr_4 [i_1 + 3]) | 3789892756279551398);
                var_21 = (arr_0 [i_1 + 3]);

                for (int i_5 = 3; i_5 < 7;i_5 += 1)
                {
                    var_22 = (((arr_7 [i_5 + 1] [i_1 - 1]) ? (arr_6 [i_5 - 2] [i_1 - 1]) : 755497952));
                    var_23 = -4095;
                }
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    var_24 = var_5;
                    var_25 = ((-(arr_4 [i_1])));
                    var_26 = (((arr_0 [i_1 + 2]) ? 32760 : (arr_19 [i_1] [i_1] [i_1] [i_1 - 1] [i_1 + 2] [i_1 + 3])));
                }
                for (int i_7 = 2; i_7 < 8;i_7 += 1)
                {
                    var_27 = (((arr_15 [i_1 + 2] [i_1] [i_1 - 1]) ? (arr_15 [i_1 + 3] [i_1] [i_7 + 2]) : var_10));

                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        var_28 = (((arr_8 [i_2] [i_1 - 1] [i_7 - 1]) ? var_2 : (arr_8 [i_1 + 1] [i_1 + 2] [i_7 + 1])));
                        var_29 = 2155730566;
                    }
                    for (int i_9 = 3; i_9 < 9;i_9 += 1)
                    {
                        var_30 = ((-82 / (arr_23 [i_1 + 1] [i_1 - 1] [i_1] [5] [i_4] [i_7 - 1] [i_9 - 3])));
                        var_31 = 12341271;
                        var_32 = ((var_10 * (arr_15 [i_4] [i_1] [i_4])));
                        var_33 = ((-21 ? -18377 : 211));
                        var_34 = (((187 >= 1637680340111900539) ? ((var_4 ? var_4 : 211)) : (arr_27 [i_9 - 2] [i_9 + 1] [i_9 - 2] [i_9 - 1] [i_9 - 1] [i_9 - 2] [i_9 - 3])));
                    }
                    for (int i_10 = 2; i_10 < 9;i_10 += 1)
                    {
                        var_35 = (arr_8 [i_1] [i_1 + 1] [i_1]);
                        var_36 = arr_12 [i_1] [i_1] [i_10];
                    }
                    var_37 = arr_31 [i_1] [i_1] [i_1] [i_2] [i_4] [i_7];
                    var_38 = (arr_4 [i_1]);
                }
            }
        }
        for (int i_11 = 1; i_11 < 8;i_11 += 1)
        {
            var_39 = (~10);
            var_40 = 0;
        }
        var_41 = (max(var_4, -5651639828045805830));
    }
    var_42 = max(((55 ? ((max(55, -9779))) : var_10)), var_5);
    #pragma endscop
}
