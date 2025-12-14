/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((((1 || ((max(0, var_9)))))), var_2));

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_12 [i_3] [i_3] [i_3 + 1] [i_3 + 1] [i_3] [i_3] = (arr_8 [i_2] [i_1] [i_0]);
                        var_16 = ((((min((arr_10 [i_1] [8] [i_2] [i_1 - 1]), (arr_10 [6] [i_1] [i_2] [i_1 - 1])))) | (arr_10 [i_3] [i_3] [i_0] [i_1 - 1])));
                        var_17 = (max(var_17, (((1 << (82 - 75))))));
                    }
                }
            }
        }
        arr_13 [16] [i_0] = var_5;
    }
    for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_18 = (!((min((arr_7 [17] [i_4] [i_4 - 1] [11]), (var_3 | 82)))));
        var_19 = -7;
        var_20 = ((-((-18044 - (arr_3 [i_4 - 1] [i_4 - 1])))));

        /* vectorizable */
        for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_21 = (arr_3 [i_4 - 1] [i_5]);
                        arr_25 [9] [9] [i_6] [13] [2] [i_4] |= var_6;
                        arr_26 [i_6] [i_6] [i_6] [i_7] = 18044;
                    }
                }
            }
            var_22 = 88;
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 18;i_9 += 1)
                {
                    {
                        var_23 -= var_13;
                        arr_32 [i_9] = var_5;
                    }
                }
            }
        }
        for (int i_10 = 1; i_10 < 1;i_10 += 1) /* same iter space */
        {
            var_24 = var_0;
            var_25 = 1;
            var_26 = (min((max(126, (arr_17 [i_4 - 1] [i_4 - 1]))), 67));

            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                arr_37 [i_4] [14] [i_4] = ((1 ? ((+((min((arr_6 [i_4] [i_10] [i_11]), (arr_0 [i_4])))))) : 1));
                var_27 += (min(var_9, var_2));
                arr_38 [i_4 - 1] [i_10] = 45;
            }
        }
        for (int i_12 = 1; i_12 < 1;i_12 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_13 = 2; i_13 < 17;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 17;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 19;i_15 += 1)
                    {
                        {
                            arr_50 [i_4] [i_4] [i_12] [i_4] [i_4 - 1] [i_4 - 1] = (((246 && 9223372036787666944) ? ((min(-54, 18041))) : (((((var_12 ? 22057 : 1))) ? ((min(var_10, 1))) : ((max(217, (arr_31 [i_12] [i_14]))))))));
                            arr_51 [i_4] [i_12 - 1] [i_13] [i_12] [9] [i_15] = (min((((((max((arr_15 [0]), 1))) ^ (!11807433098956124674)))), var_2));
                        }
                    }
                }
            }
            var_28 = (max(150, (arr_44 [i_4 - 1] [i_4 - 1] [i_12] [i_12])));
        }
    }
    /* vectorizable */
    for (int i_16 = 1; i_16 < 1;i_16 += 1) /* same iter space */
    {
        arr_54 [i_16] [i_16 - 1] = arr_1 [i_16 - 1];
        arr_55 [i_16] [i_16] = (arr_24 [i_16] [i_16]);
    }
    var_29 = var_10;
    #pragma endscop
}
