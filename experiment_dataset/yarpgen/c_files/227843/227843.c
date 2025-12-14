/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 -= (arr_1 [8]);
        var_19 *= (max(((((arr_0 [14]) <= (arr_1 [10])))), (arr_0 [4])));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    var_20 = (~((2525046249 ? (((arr_0 [i_0]) + var_14)) : (((((arr_6 [14]) == 5389)))))));
                    var_21 = (min(var_21, (((~((((arr_4 [i_0] [i_1] [i_2] [i_3]) != (((((arr_5 [i_0] [i_0]) != var_9))))))))))));
                    var_22 -= (arr_4 [i_0] [i_1] [i_2] [14]);

                    for (int i_4 = 2; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        var_23 = (max(var_23, ((max(var_14, (arr_4 [i_0] [i_4 - 1] [i_2] [i_2]))))));
                        var_24 &= 1114780551;
                        var_25 *= ((!(arr_8 [i_2] [i_3] [i_3])));
                        var_26 = (min(var_26, ((max(var_14, (~var_16))))));
                    }
                    for (int i_5 = 2; i_5 < 16;i_5 += 1) /* same iter space */
                    {
                        var_27 = (max(var_27, (((-((max(3858582446, (arr_11 [i_2])))))))));
                        arr_14 [i_0] [i_1] [i_2] [i_0] [i_5] = (min((min((arr_1 [i_0]), (arr_9 [i_3] [i_1] [i_2] [i_0] [i_2 + 1]))), (((((((arr_2 [i_1] [i_3]) ? -5390 : var_8))) ? (((var_15 != (arr_1 [i_0])))) : -19428)))));
                    }
                }
                var_28 += (arr_0 [i_2]);
                arr_15 [i_0] [4] [i_2 - 1] [i_2 + 1] = 3180186745;
            }
            arr_16 [0] |= ((((min(-27928, var_4)) < (((arr_13 [i_0] [i_1] [2] [2] [i_1]) & (arr_3 [i_0] [i_1]))))) ? (!var_15) : var_12);
            var_29 = (max((arr_8 [i_0] [i_1] [i_1]), ((((min((arr_10 [i_0] [i_0] [i_0] [i_0] [2] [i_0] [i_0]), 25714))) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (!var_12)))));
        }
        for (int i_6 = 3; i_6 < 14;i_6 += 1) /* same iter space */
        {
            var_30 = (((((-(arr_0 [i_0])))) ? (((((arr_19 [i_0] [7] [i_0]) <= var_6)))) : (arr_4 [i_0] [i_0] [i_0] [i_0])));
            var_31 = (min(var_31, -5390));
        }
        /* vectorizable */
        for (int i_7 = 3; i_7 < 14;i_7 += 1) /* same iter space */
        {
            var_32 -= var_8;
            var_33 |= ((arr_8 [i_7 + 3] [10] [16]) + (arr_23 [i_7 - 1]));
        }
    }
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        arr_27 [i_8] = ((!((!(arr_26 [i_8])))));
        var_34 = ((((-var_5 - (arr_26 [i_8]))) >= ((((var_11 || (arr_25 [i_8])))))));
    }
    var_35 = (max(var_35, 3323889185));
    var_36 = min(var_8, var_9);
    var_37 |= var_16;
    var_38 = (max(var_38, ((-15717 ? (max((max(var_13, 3180186744)), var_9)) : ((((!(((3180186744 ? var_5 : -20870)))))))))));
    #pragma endscop
}
