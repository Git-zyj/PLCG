/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(-6419379334854253409, (!7698721317606229613)));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_4 [i_1] [i_1] [17] = (((arr_0 [i_0]) ^ 6419379334854253429));
            var_11 = (arr_0 [i_0]);

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                var_12 = var_3;
                var_13 = (arr_6 [i_0] [i_1] [i_1] [2]);

                for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
                {
                    arr_10 [i_0] [i_1] = (((arr_6 [i_0] [i_0] [i_0] [i_3]) + 39));
                    var_14 |= -16;
                    var_15 = (min(var_15, (arr_2 [i_3] [i_1] [i_1])));
                }
                for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                {
                    var_16 = -6419379334854253430;
                    var_17 += (arr_5 [i_4] [i_1] [i_0]);
                    var_18 = ((-8231792343086062191 ? 6419379334854253422 : (!var_9)));
                }
                for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                {
                    var_19 -= (!var_3);
                    var_20 = (min(var_20, 56));
                    var_21 = (arr_5 [13] [15] [i_2]);
                    var_22 = (max(var_22, 1023));
                }
                var_23 += -0;

                for (int i_6 = 1; i_6 < 16;i_6 += 1)
                {
                    var_24 = (arr_9 [i_0] [i_1] [i_2] [i_6 + 1] [i_6]);
                    var_25 = ((((arr_15 [i_1] [i_1] [i_1] [i_1]) - 9)));
                }
            }
            var_26 *= (11655 + 1);
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    {
                        var_27 = (max(var_27, (0 - 1)));

                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            arr_31 [0] [i_8] = 1115445649;
                            var_28 = (max(var_28, ((~((var_9 ? 9223372036854775807 : 1))))));
                        }
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            arr_34 [i_8] = (~9813);
                            arr_35 [6] [7] [i_8] = -1609608611638140305;
                            var_29 = (!var_1);
                        }
                        for (int i_12 = 0; i_12 < 19;i_12 += 1)
                        {
                            var_30 &= ((~(~65006)));
                            var_31 = ((((((-1333818199 ? -2660678860444827618 : 65047)) <= (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (((!(((-(arr_6 [i_12] [17] [i_8] [i_9]))))))) : (min((((arr_11 [1] [8] [i_9] [16]) ? var_1 : 9813)), (arr_30 [i_12] [i_12] [i_9] [i_9] [i_8] [i_7] [12])))));
                            var_32 = (min((!var_9), (1957347788917633779 - 262143)));
                            arr_38 [i_0] [i_7] [i_8] [i_8] [i_12] = (~-5933404779235496516);
                        }
                        for (int i_13 = 0; i_13 < 19;i_13 += 1)
                        {
                            var_33 = (max(var_33, (arr_16 [i_9 - 1] [i_9 - 1] [i_9 - 1] [11])));
                            var_34 = (((arr_0 [i_9 - 1]) || 15));
                        }
                        var_35 = 15;
                    }
                }
            }
        }
    }
    var_36 &= ((!(!-7124130008764032085)));
    var_37 = var_5;
    #pragma endscop
}
