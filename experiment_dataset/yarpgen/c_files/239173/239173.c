/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(((min((min(-1103506287, 1)), ((min(229, var_1)))))), (min((min(14165073185339708183, 255)), ((max(var_9, var_3)))))));
    var_12 = (min((min(((max(var_1, var_10))), (min(-1, var_5)))), (max((max(var_4, 9)), ((min(-23322, var_9)))))));
    var_13 = (max((min(((min(var_6, var_0))), (min(var_4, var_7)))), ((min(((max(var_3, var_2))), (min(var_7, var_0)))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_14 = (max(((max(((max(127, var_6))), (min((arr_5 [i_0] [i_0] [i_0]), 255))))), (max((min(var_8, (arr_7 [i_0] [4] [i_0]))), ((max(12, (arr_5 [i_0] [i_1] [i_1]))))))));
                    var_15 *= (min((min((max(-1130030052, -3051866306553046042)), -1331)), (min(((max(127, 1))), (max(-1, (arr_7 [i_0] [i_2] [i_0])))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = (max(((min(((min((arr_1 [7]), var_10))), (min(var_5, -1))))), (max((max(3278142965303370207, 53)), ((min((arr_3 [i_0]), 14)))))));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_16 = (max((max(((min(-127, var_8))), (min(var_5, var_3)))), ((min((min(var_2, -1322)), ((max(1, 1))))))));
                        arr_13 [i_1] = max(((max(((min((arr_2 [i_0]), -92))), (min(1, var_5))))), (max((max(2530524364677621109, var_10)), ((min((arr_11 [i_0] [i_2 - 1] [i_1] [i_0]), (arr_3 [i_0])))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 0;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        var_17 = (min(var_17, ((max((min((max(-172385191, var_3)), ((max(106, var_0))))), ((max((min((arr_7 [i_6] [i_5 + 1] [i_4]), var_0)), ((max(0, (arr_5 [7] [i_5] [i_6]))))))))))));
                        arr_21 [i_0] [i_0] [i_4] [i_5] [i_6] = (min(((min(((min(0, (arr_20 [i_0] [i_4] [i_5] [i_6])))), (min((arr_15 [i_0]), var_0))))), (max((min(2147483647, (arr_6 [9] [i_4]))), ((min(403053116, 0)))))));
                        arr_22 [5] [i_6] = (min((max(((max(var_1, 0))), (max(-29595, var_5)))), ((max((min(31845, var_9)), ((min(0, -101))))))));
                        arr_23 [i_5] = (min(-77, (-127 - 1)));
                    }
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        var_18 = (max((max(((max((arr_0 [i_0] [i_4]), -403053130))), (min((arr_19 [i_0]), 2942849572623248556)))), ((max(((min(40061, (-127 - 1)))), (min(238, -4761208997071355688)))))));
                        arr_28 [i_0] [i_0] [i_0] = (max(((min((max(9223372036854775807, var_10)), ((min((arr_5 [i_5] [i_5] [i_0]), (arr_0 [i_7] [5]))))))), (min((min(1, 4234268514895431781)), ((max(64, var_2)))))));
                        arr_29 [i_0] [i_0] [i_4] [i_5] [i_5] [i_7] = (max((max(((min(403053098, 1))), (min(15503894501086303047, var_8)))), ((min(((max(var_6, (arr_20 [i_0] [i_4] [i_5] [16])))), (min((arr_14 [i_7]), (arr_19 [i_7]))))))));
                        arr_30 [i_0] [i_0] [i_0] [0] [i_7] = (max(((min((min(var_4, (arr_15 [i_0]))), ((max(var_7, (arr_19 [i_0]))))))), (max(((max((arr_0 [i_4] [i_7]), (arr_1 [i_5 + 1])))), (max(5989861597579206981, (arr_4 [i_0] [i_0] [i_0])))))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        var_19 = 255;
                        arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] = 15;
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_20 ^= (min((min((min((arr_24 [i_0] [i_4] [11] [16]), 1967621719)), ((min(var_7, 1858021247))))), ((min((min(1069943089, -1)), (min(2147483647, (arr_26 [i_9] [i_5] [i_0] [i_0]))))))));
                        var_21 = max((min((max(0, var_10)), ((max(var_7, var_9))))), ((max((max((arr_19 [i_4]), var_8)), ((min((arr_31 [i_0] [i_4 - 1] [i_4 - 1] [i_0]), (arr_37 [i_9] [i_9] [i_5]))))))));
                        arr_38 [i_9] [i_9] [i_5 + 1] = (min((max(((max((arr_32 [5]), var_9))), (max(9223372036854775798, var_9)))), (max(((max(1, 65535))), (min(var_0, var_5))))));
                        var_22 = (min(((min((min((arr_16 [2] [i_0]), var_7)), (max(185, 86))))), (min((min(var_8, 1)), ((min(1, var_10)))))));
                        var_23 = (max((min(((max((arr_18 [i_0] [i_4] [i_0]), (arr_5 [i_9] [i_0] [i_0])))), (min(18446744073709551615, 1)))), ((min(1, 4404581362075940316)))));
                    }
                    var_24 -= (min((max(1, 1032963066)), ((max(((max(127, (arr_7 [i_5] [i_4 - 2] [i_0])))), (max(-47, 13656)))))));
                }
            }
        }
        arr_39 [i_0] = (max((min(((min((arr_35 [i_0] [16] [16]), 4404581362075940316))), (max((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), 10728407147125970949)))), ((min(((max(var_7, var_0))), (max(182, var_9)))))));
        var_25 = (max(((min((min(4404581362075940292, (arr_25 [i_0] [i_0] [7] [i_0] [i_0] [7]))), ((min(1, 16760832)))))), (min((max(14174233010904386126, 167)), (min(var_9, 6443851838429298602))))));
        var_26 = (max(((max((min((arr_15 [i_0]), 0)), ((min(-16760832, (arr_37 [i_0] [i_0] [i_0]))))))), (min((min(18446744073709551588, -32756)), ((max(1, 1)))))));
    }
    #pragma endscop
}
