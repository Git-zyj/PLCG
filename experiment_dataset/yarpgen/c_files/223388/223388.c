/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((max(((min(var_3, var_13))), (max(250, var_2)))), (max((max(var_6, var_2)), ((max(var_19, 65535)))))));
    var_21 = (max(((max((max(var_8, 4)), (min(var_3, 254))))), (min((min(var_2, 253)), (max(var_11, 5090702722673998792))))));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_22 = max((max((min(52, var_18)), (max(var_18, var_17)))), (min(((max(2981283121, var_17))), (max((arr_1 [i_0 - 3]), (arr_1 [i_0]))))));
        arr_3 [i_0] = (min(((max((max(246, (arr_1 [12]))), (min((arr_1 [13]), (arr_2 [i_0])))))), (min((max(40975, var_0)), ((max(1, 8589)))))));
    }
    for (int i_1 = 3; i_1 < 24;i_1 += 1)
    {
        var_23 = max(((min(((max(var_11, var_8))), (max((arr_5 [i_1] [i_1 - 2]), 252))))), (min((max(12, 3168477093035197235)), (min(1, 3168477093035197241)))));
        arr_6 [i_1] [i_1] = (min(((max((max(2147483630, (arr_5 [i_1] [i_1]))), ((max(1, (arr_5 [i_1] [i_1]))))))), (max(((max(var_1, (arr_5 [i_1] [i_1 + 1])))), (min((arr_5 [i_1] [i_1]), (arr_4 [i_1 + 1])))))));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_24 = (min((min((min(1, -7961196289677154292)), ((max((arr_5 [i_2] [i_2]), var_17))))), (min(((max((arr_8 [12]), var_15))), (max(-3252747403341274540, var_3))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 13;i_5 += 1)
                {
                    {
                        var_25 = (min((min(((min(var_10, var_1))), (max(736771269498142193, (arr_16 [6] [i_3]))))), ((max((min((arr_10 [i_3]), 7886164313343135848)), (max(-13811, var_2)))))));
                        arr_17 [i_3] [i_3] = (max((max((min(var_10, var_0)), ((max(var_5, (arr_11 [i_2] [i_2])))))), ((max((min(6659122909296215573, var_10)), ((min(1, (arr_9 [6] [i_3])))))))));
                    }
                }
            }
        }
        var_26 = min((max((max(-6659122909296215575, 255)), ((min((arr_13 [i_2] [i_2] [i_2] [i_2]), 2))))), (min(((max((arr_16 [i_2] [10]), (arr_14 [i_2] [i_2] [i_2] [i_2])))), (max(-7961196289677154292, var_16)))));
    }
    for (int i_6 = 1; i_6 < 8;i_6 += 1)
    {
        arr_21 [i_6] = (max((min((min((arr_8 [i_6]), var_0)), (max(0, var_16)))), ((max(((min((arr_8 [i_6 + 3]), (arr_10 [i_6])))), (min((arr_7 [i_6] [i_6]), 2008849978)))))));
        var_27 = (min(((min((max((arr_11 [i_6] [i_6]), (arr_1 [6]))), (max((arr_1 [i_6 - 1]), (arr_0 [i_6] [i_6])))))), (max((min((arr_13 [i_6 - 1] [i_6] [i_6 - 1] [i_6]), var_7)), ((max(var_1, (arr_19 [i_6] [i_6]))))))));
        var_28 = (max((min((min(250, (arr_4 [i_6]))), ((max((arr_14 [i_6] [i_6] [i_6] [i_6]), 4294967288))))), ((max((max((arr_8 [i_6 - 1]), var_16)), (max((arr_0 [i_6] [i_6]), 65535)))))));
    }
    var_29 = (min((min((min(var_18, var_15)), ((max(var_3, var_12))))), (max(((min(var_1, var_19))), (min(var_4, var_9))))));
    #pragma endscop
}
