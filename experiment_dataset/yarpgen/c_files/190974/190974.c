/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= ((-(var_15 != var_4)));
    var_20 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_21 = (max((((max(var_16, var_12)) * ((max(var_9, 1))))), (arr_4 [i_0 - 1] [i_0 - 1])));
                var_22 = (!((max((((arr_3 [i_0 - 1] [i_1] [i_1]) * var_2)), ((-465087195919577607 ? 1 : 0))))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        arr_10 [i_0] [i_1] [i_3] [i_3 + 2] [i_3] [i_3 + 1] = 0;
                        var_23 += var_6;
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 10;i_5 += 1)
                        {
                            {
                                arr_17 [i_5] [i_1] [i_2] [i_4] [i_5] = -0;
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_5] = (((-((20078 ? 218 : 89)))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 10;i_7 += 1)
                    {
                        {
                            arr_23 [i_0] [i_7] [i_0] [i_7] = (max(0, ((-1 ? var_6 : 281474976710144))));
                            var_24 = ((!(!-1)));
                            var_25 = -938215222576195152;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 8;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 7;i_9 += 1)
                    {
                        {

                            for (int i_10 = 0; i_10 < 11;i_10 += 1)
                            {
                                var_26 = (min(var_26, ((((((0 ? (arr_3 [i_1] [i_9 + 3] [i_10]) : 0))) || 6135)))));
                                arr_31 [i_0] [i_1] [i_8] [i_9 + 4] [i_9] [i_10] [i_10] = ((var_8 ? ((max(var_17, 73))) : ((max(-1395845747, -73)))));
                                var_27 = (max(-1, ((max(127, 72)))));
                                var_28 = ((-72 ? (arr_16 [i_0 - 1] [i_0] [i_0 + 1]) : ((var_9 ? (arr_12 [i_0] [i_0] [i_0]) : var_13))));
                                var_29 = -42;
                            }
                            var_30 = (max(((max(var_0, (arr_15 [i_8 - 1] [i_8 + 1] [i_8] [i_8] [i_8 - 1])))), (arr_15 [i_8] [i_8 - 2] [i_8] [i_8] [i_8 + 3])));
                        }
                    }
                }
            }
        }
    }
    var_31 = max(((max(13771, ((var_10 ? var_16 : var_11))))), 938215222576195151);
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        for (int i_12 = 1; i_12 < 11;i_12 += 1)
        {
            {
                var_32 |= (32 + -31513);
                var_33 += ((((((-1701378402 ? -11846 : 32760)))) ? (arr_34 [i_12] [i_12 - 1] [i_12 - 1]) : var_3));
                arr_36 [i_12 - 1] = -13771;
            }
        }
    }
    #pragma endscop
}
