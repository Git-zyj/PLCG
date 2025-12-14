/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                arr_7 [i_1 + 3] = (min((min((!193), (((arr_3 [i_1 - 1] [i_1 - 1] [i_0]) - var_3)))), (min(-96888075225973065, 57850))));
                var_10 |= 1;
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_11 *= (arr_1 [i_0] [i_1]);
                            arr_15 [i_0] [i_0] [i_4] [i_0] = (((arr_1 [i_4 - 2] [i_1 + 3]) ? (arr_1 [i_4 - 1] [i_1 + 2]) : 57366));
                            var_12 = (!(arr_10 [i_3] [i_3] [i_4 - 1] [3]));
                        }
                    }
                }
                var_13 = (min(var_13, 2551));
                var_14 = (((arr_5 [i_1 + 2] [i_1 + 1]) ? 107 : 9223372036854775807));
            }
            for (int i_6 = 2; i_6 < 9;i_6 += 1)
            {
                var_15 += -89;
                var_16 -= var_5;
            }
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                var_17 = var_7;
                var_18 += ((!(((((-32767 - 1) - 1))))));
                arr_20 [i_0] [i_7] [i_7 - 1] = (((arr_16 [i_1] [i_1] [i_1 - 1] [i_1]) ? (((((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_14 [i_0] [i_1] [i_7 - 1]) : (arr_18 [i_0] [i_1] [i_1 + 1]))))) : ((min((arr_19 [i_7 - 1] [i_7 - 1] [i_7]), (arr_10 [i_1 + 3] [i_1 + 2] [i_1 + 1] [i_1 - 1]))))));
                var_19 = 2568;
            }
            var_20 = (max(var_20, (((((min((arr_17 [i_1 - 1]), (min(-2115463261743340375, (arr_3 [i_0] [i_0] [9])))))) ? (max((max(14421647407868684332, 0)), 65535)) : ((min((arr_14 [10] [10] [i_1]), (arr_12 [i_1 + 1] [i_1] [i_1 + 2] [i_1 + 1] [i_1])))))))));
        }
        var_21 *= (min(((min((!-1398733967), var_1))), (arr_17 [i_0])));
    }
    for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
    {
        var_22 = 979935554562825382;
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                {
                    var_23 |= ((min(4053557196, -1022890858678357695)));
                    var_24 = (min(((((arr_24 [i_10] [i_9]) ? 1 : 35307))), (arr_4 [i_8] [i_10])));
                }
            }
        }
    }
    for (int i_11 = 4; i_11 < 11;i_11 += 1)
    {
        arr_35 [i_11 - 4] = (arr_34 [11]);
        var_25 = (min(var_25, var_0));
    }
    var_26 = (min((((!(!2279335467)))), var_4));
    #pragma endscop
}
