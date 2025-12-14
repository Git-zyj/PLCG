/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = min(((min((max(var_7, 31)), ((max(var_5, var_7)))))), (min(((max(var_4, (-2147483647 - 1)))), (max(-9, var_3)))));
    var_11 = (min((min(((max(86, -363549434))), (max(var_9, 57)))), ((min((max(var_8, var_4)), (max(var_6, 22731)))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_12 &= (min((min((max((arr_4 [i_0] [i_0] [i_1]), (arr_2 [i_0] [i_1]))), ((min((arr_4 [i_0] [1] [i_0]), 38))))), (max((max(var_3, var_9)), (max(var_4, (arr_2 [20] [i_1])))))));
            arr_5 [i_1] = (min((max(((min(175, (arr_0 [i_0])))), (max((arr_0 [i_1]), var_3)))), (min((max(80, 2132775421)), ((min(-1922833715, var_8)))))));
        }

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_8 [i_0] [i_0] [i_2] = (max((max(((min((arr_1 [i_0]), (arr_4 [i_2] [4] [0])))), (min((arr_2 [i_0] [i_2]), 16777215)))), ((max((-127 - 1), (min(127, 57226)))))));
            var_13 ^= (max((max(((max((arr_0 [i_2]), (arr_0 [i_0])))), (max((arr_2 [i_0] [15]), 5659)))), ((min((min((arr_0 [9]), -582429010)), ((max(var_6, (arr_1 [i_2])))))))));
            arr_9 [i_0] [i_0] [9] = max((min(((max(var_4, (arr_0 [16])))), (min((arr_4 [i_0] [i_0] [i_0]), (arr_6 [i_2] [i_0]))))), (min(-1136799073, -107)));
        }
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        arr_18 [i_0] [i_0] [i_3] [i_0] [i_3] [17] = (max(((max((max(-1851056585, 4294967295)), -106))), (max((max(-1, -7149858723651429652)), ((min(-1607682608, (arr_14 [i_0] [i_0] [i_4] [i_3] [i_0]))))))));
                        var_14 -= (max(((max(((max(var_2, (arr_10 [1])))), (max(var_4, var_0))))), (min(((min(-38, (arr_14 [i_5] [i_0] [i_4] [i_0] [i_0])))), (min((arr_10 [i_5]), (arr_11 [6] [i_3] [i_3])))))));

                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            var_15 = (min(((max(((min(var_4, 98))), (max(-449993350, -186728732))))), (max(((min(1, -1920145021))), (max(3004644819, -2147483647))))));
                            var_16 = (min(((min((max((arr_10 [14]), var_9)), ((min(var_5, (arr_3 [i_5]))))))), (max((max(244, -32)), (max(3746538144, -7898444769228566621))))));
                        }
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            var_17 = (min((min(((min((arr_1 [i_3]), var_6))), (min(1013065217, 1425977003)))), ((min((max(118, var_6)), (min(var_6, 52)))))));
                            var_18 = (min(((max((max(var_2, 3725215780)), ((min(152, 2080701279)))))), (max(((min(1, var_2))), (max(0, var_5))))));
                        }
                        var_19 = (min(((max((min((arr_3 [1]), var_4)), (min((arr_17 [i_3] [i_0] [i_0] [i_3]), -2147483623))))), (max(((min(var_5, -2057186614))), (min(112, (arr_15 [i_0] [i_3])))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 14;i_8 += 1)
    {
        arr_27 [i_8] = 1;
        var_20 *= -922391434;

        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            var_21 *= 1;
            arr_30 [i_8] [i_8] [i_9] = 3016556492;
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    {
                        var_22 = 1;
                        var_23 ^= 1;

                        for (int i_12 = 4; i_12 < 13;i_12 += 1) /* same iter space */
                        {
                            var_24 -= -73;
                            var_25 = (max(var_25, 89));
                        }
                        for (int i_13 = 4; i_13 < 13;i_13 += 1) /* same iter space */
                        {
                            arr_39 [i_8] = 2634262979;
                            var_26 = -82;
                            var_27 = (-32767 - 1);
                            arr_40 [i_8] [i_8] [2] [i_11] [i_13] = -1450076117;
                        }
                        for (int i_14 = 4; i_14 < 13;i_14 += 1) /* same iter space */
                        {
                            var_28 += -10;
                            arr_43 [i_11] [i_11] [i_9] [i_10] [0] [i_11] [12] |= -1;
                        }
                        arr_44 [i_8] [1] [14] [0] [i_8] [i_8] = 0;
                    }
                }
            }
            var_29 = 1;
        }
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {

            for (int i_16 = 2; i_16 < 14;i_16 += 1)
            {
                var_30 = 1094621324;
                var_31 = 119;
            }
            var_32 = 154532652;
            var_33 = 0;
            var_34 += 4294967295;
        }
    }
    var_35 |= (max((min(((min(var_7, var_1))), (max(10381755235790631671, 1)))), ((min((max(var_4, 27)), ((max((-127 - 1), var_6))))))));
    #pragma endscop
}
