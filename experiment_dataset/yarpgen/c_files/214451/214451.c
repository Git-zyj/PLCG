/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (min((arr_3 [8] [8] [i_1]), var_3));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_19 = ((((min((25 - 1), 15))) + (((((var_0 - (arr_2 [i_0])))) ? 1720318387965493071 : var_4))));

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            var_20 = (max(var_20, -1720318387965493078));
                            arr_15 [i_0] [i_0] [13] [13] [i_4] |= -16;
                            var_21 &= 37;
                        }
                    }
                    var_22 = ((-(!1720318387965493071)));
                    arr_16 [i_2] [i_1] [i_0] = (arr_2 [i_0]);
                }
                for (int i_5 = 3; i_5 < 24;i_5 += 1)
                {
                    var_23 = ((((max(var_15, ((max(var_8, (arr_2 [i_0]))))))) ? ((((219 ? (arr_7 [i_1]) : (arr_5 [i_1] [i_5]))))) : (max((min(var_7, (arr_11 [i_0] [i_0] [i_1] [i_1] [i_1] [16]))), 22))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 23;i_7 += 1)
                        {
                            {
                                arr_25 [i_6] = 219;
                                arr_26 [i_0] [i_1] [i_5] [24] [i_5] &= (min((min(7855128617787987174, (((-26382 ? 1 : 4294967289))))), (arr_24 [i_6])));
                            }
                        }
                    }
                    var_24 = (((((1 - ((88 ? 1 : (arr_9 [i_0] [i_1] [i_5])))))) & (min((arr_11 [i_0] [i_0] [i_1] [i_1] [i_5] [i_5]), (((var_5 >> (var_14 - 8652429319431851692))))))));

                    for (int i_8 = 1; i_8 < 22;i_8 += 1)
                    {
                        var_25 = var_2;
                        var_26 = (min(27277, (min(-1720318387965493073, -87))));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
                    {
                        var_27 = (max(var_27, 221));
                        arr_34 [i_0] [i_1] [i_5] [i_9] [i_9] = ((-(arr_32 [i_0] [24] [i_5] [i_9])));
                        arr_35 [i_0] [i_1] [i_5] [16] [6] = ((var_2 ? (arr_20 [i_0] [i_1] [i_5] [i_9]) : (arr_1 [i_0])));
                        arr_36 [i_0] [i_1] [i_1] [i_1] = (arr_8 [i_0] [i_5 - 1] [i_5 + 1] [i_5 + 1]);
                        arr_37 [i_0] &= (((var_8 + -1720318387965493080) + (arr_8 [i_0] [i_0] [16] [i_9])));
                    }
                    for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
                    {

                        for (int i_11 = 0; i_11 < 25;i_11 += 1)
                        {
                            var_28 ^= ((var_3 ? (max((30668 * var_17), (arr_19 [i_10] [i_1]))) : var_3));
                            arr_42 [i_0] [i_1] [i_0] [i_1] [22] = var_6;
                        }
                        var_29 = (((~((var_0 ? var_7 : 1)))));
                    }
                }
                arr_43 [i_1] [i_1] [i_0] = -var_2;
            }
        }
    }
    var_30 = var_7;
    var_31 = var_18;
    #pragma endscop
}
