/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((max((max(var_4, var_5)), ((max(32768, 32768))))), ((max(54210, (max(32783, 323329541)))))));

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        var_11 = (max((max(((min(4, 2))), (min(127, 3943139474898657955)))), ((min((max((arr_2 [i_0]), (arr_0 [i_0]))), (max(1, -10)))))));
        arr_4 [i_0] [i_0] = (min((max((max(7, 32776)), 1)), (max(((max(1, 23))), 512))));
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (min(5048, 149));

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
            {
                var_12 = (min(var_12, ((max((min(((min(var_0, var_9))), (max(var_3, var_9)))), ((max((max((arr_8 [2]), var_9)), ((max(var_9, var_2)))))))))));
                var_13 = (max((max(-1336394762, 16383)), ((min(-8470, 6)))));
            }
            for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
            {
                var_14 -= (max((max((max(var_9, var_5)), ((max((arr_13 [i_1] [i_1]), var_4))))), ((max((max(-264091326, var_0)), ((max((arr_14 [8] [0] [i_4]), 3937))))))));

                for (int i_5 = 2; i_5 < 12;i_5 += 1)
                {
                    var_15 = (max(var_15, ((max(((min(1042, 511))), (min((min(7936, 7566121210910742507)), ((min((arr_8 [i_5]), 28735))))))))));
                    var_16 -= (min((max((max((arr_9 [i_1] [i_5] [i_4]), (arr_8 [12]))), ((min(20172, var_8))))), (max((max(5324255349635619247, var_8)), ((max(1, var_8)))))));

                    for (int i_6 = 3; i_6 < 14;i_6 += 1)
                    {
                        var_17 = (max((max((max(var_0, 4294967295)), (max((arr_19 [i_1] [i_1] [i_4] [i_1]), (arr_5 [i_4] [10]))))), ((min((max(var_4, (arr_12 [i_1] [0] [i_1] [i_1]))), (max(var_7, (arr_14 [i_1] [i_2] [i_1]))))))));
                        arr_20 [i_1] [i_5 - 2] [i_1] [i_4] [i_2] [i_1] = (max((max(1, (max(9223372036854767616, 54793)))), ((max(30572, 523776)))));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_18 -= (max(((max((max((arr_13 [i_1] [i_1]), 2834719541)), ((max(11, 1)))))), (max((max((arr_9 [i_5] [i_5] [i_1 + 1]), 1)), (min(288230376150663168, var_9))))));
                        var_19 += max((min(((max(3833362825, -8263834705505043449))), (min(3051387525493421920, -8263834705505043449)))), ((min(1, 6))));
                        var_20 = (max((min(((max(46, var_1))), (min((arr_10 [i_1] [13] [i_4] [i_2]), (arr_14 [i_1] [i_1] [i_1]))))), ((min((min(65535, 20414)), ((max(28517, 1))))))));
                        arr_24 [i_1] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (max((max(-13672658, 532511230)), ((max(501, 0)))));
                    }
                }
                /* vectorizable */
                for (int i_8 = 1; i_8 < 14;i_8 += 1)
                {
                    arr_28 [i_1] = (-9223372036854775807 - 1);

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        arr_32 [i_1] [i_8] [i_1] [i_8] [i_9] [i_8] = 1;
                        var_21 &= 901;
                        var_22 = 63;
                        var_23 = (max(var_23, 65535));
                    }
                    for (int i_10 = 1; i_10 < 13;i_10 += 1)
                    {
                        var_24 = (max(var_24, 0));
                        arr_36 [i_2] [i_1] [i_2] = 4428536894150941314;
                        var_25 |= 2808943230;
                    }
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        arr_39 [i_8] [i_8] [i_8] [i_1] [i_11] = 0;
                        var_26 = 5;
                        arr_40 [14] [14] [i_1] [i_1] = 1;
                    }
                }
                for (int i_12 = 1; i_12 < 13;i_12 += 1)
                {
                    arr_44 [i_12] [i_1] = (max((max((min(var_3, var_2)), ((min((arr_12 [i_1] [i_1] [1] [i_1]), 48685))))), (max(((max(10375, var_6))), (max(19, 7703081355835929276))))));
                    var_27 = (min(var_27, ((max((max(((min((arr_13 [i_4] [i_4]), -17))), (max(var_3, 65535)))), ((min((max(var_9, 33088)), (min(var_8, (arr_23 [i_1] [i_4] [i_4] [i_12 - 1])))))))))));
                }
            }
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 15;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 15;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 15;i_15 += 1)
                    {
                        {
                            var_28 = (max(((max((min(var_0, 14544)), ((max((arr_30 [1] [i_14] [i_1]), var_9)))))), (min(65518, 10612099133477192061))));
                            var_29 = (max(((max(266733780, 6780))), (max(((max((arr_35 [1] [i_2] [i_14] [10]), 211))), (max(1, 3281552284))))));
                            var_30 = (max(((max(65535, 42537))), (max(((max((arr_12 [i_1] [i_2] [i_14] [i_1]), var_6))), (max(var_3, (arr_14 [i_14] [12] [i_1])))))));
                            arr_56 [i_2] [i_2] [i_2] [i_1] [i_2] = max((min((max(309824755229187428, (arr_54 [i_1] [i_2] [i_13] [i_14] [i_15]))), ((max(17, (arr_13 [i_2] [i_13])))))), ((max((max((arr_50 [4] [i_14] [12] [i_1 + 1]), (-9223372036854775807 - 1))), (max(var_0, (arr_11 [i_2] [i_13] [1])))))));
                        }
                    }
                }
            }
        }
    }
    for (int i_16 = 0; i_16 < 1;i_16 += 1)
    {
        var_31 = (max((max(((min(-4594201777218584010, (arr_58 [i_16])))), (max(5221412047294828506, -9223372036854775802)))), ((min(17, (max(-1292742459, -1831518834)))))));
        arr_60 [i_16] [i_16] = (max(((max((max(var_4, (arr_59 [i_16]))), ((max((arr_59 [i_16]), 52426)))))), (max(((max(3821, var_9))), (max(1073739776, 2))))));
    }
    #pragma endscop
}
