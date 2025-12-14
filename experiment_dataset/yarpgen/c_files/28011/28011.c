/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 31;

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0 + 4] [i_0] = (min(((min(8191, var_7))), ((((!var_6) ? (((!(arr_2 [i_0])))) : var_5)))));
        var_16 = ((((-484731762485719013 ? var_7 : 1))));
    }
    for (int i_1 = 4; i_1 < 17;i_1 += 1)
    {
        var_17 = (min(3722808369736549924, -12));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 16;i_3 += 1)
            {
                {
                    var_18 = (min(-7261466788885290482, -11));
                    arr_15 [i_1] [i_2] [i_3] = -0;
                }
            }
        }
        var_19 = ((~((~(~-5502846135308832030)))));
    }

    for (int i_4 = 1; i_4 < 17;i_4 += 1)
    {
        var_20 -= (~25535);
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    {
                        arr_28 [i_4] [i_4] [17] [i_7] = ((((min(var_14, (arr_1 [i_4])))) ? ((var_13 ? (((!(arr_10 [10] [i_5] [i_7])))) : ((min(11, (arr_18 [5] [5])))))) : ((-((min(var_8, (arr_25 [i_7] [i_5] [i_6] [i_4]))))))));
                        arr_29 [i_7] [i_4] [1] [i_5 + 2] [i_4] [9] = ((((var_14 ? 4503591037435904 : (arr_23 [i_4])))));

                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            arr_33 [i_7] [i_7] [i_7] [i_4] [i_8] = (((((min(4747823279885788194, (arr_13 [i_4] [i_4] [i_7] [6])))) ? (((var_12 ? (arr_30 [i_4] [i_5] [i_4]) : (arr_16 [i_4])))) : ((3780480760 ? (arr_17 [i_4]) : var_12)))));
                            var_21 = (min(var_21, (((max((min(var_13, 10112241095798846)), (((var_9 ? var_2 : var_1)))))))));
                            var_22 = (min(var_3, ((min((arr_9 [i_6]), (arr_27 [6] [8] [i_4] [i_7] [i_8]))))));
                            arr_34 [i_8] [0] [i_6] [i_7] [i_4] [0] [i_6] = (((((~(min((arr_6 [i_4]), (arr_2 [i_8])))))) ? ((min(((min(1, (arr_5 [8])))), ((2166412768 ? (arr_21 [i_5] [i_7] [i_8]) : (arr_6 [i_7])))))) : (min(32740, 0))));
                        }
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 13;i_9 += 1)
    {
        arr_38 [i_9] [i_9] = (~3780480750);
        arr_39 [i_9] [i_9] = ((((!((min(12, 32740)))))));
        arr_40 [i_9] [i_9] = ((1325945292477308995 ? (((!((max((arr_17 [i_9]), var_5)))))) : (((((arr_22 [i_9] [16]) ? 31 : (arr_35 [i_9])))))));
    }
    #pragma endscop
}
