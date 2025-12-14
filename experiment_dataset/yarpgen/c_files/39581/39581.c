/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((min(10746494115550684815, ((min(var_12, var_3))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_19 = (arr_0 [i_0] [i_1]);

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_20 = ((((1400238450 ? (arr_9 [i_0] [i_1] [i_0] [i_3] [i_4]) : 1)) ^ 1400238446));
                            arr_14 [7] [i_1] [i_2] [i_3] [7] [i_4] = ((var_13 ? (((~(arr_4 [i_0])))) : ((654778505 ? 1008 : var_7))));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_21 = var_8;
                            arr_17 [i_0] [i_0] [i_0] [18] = (min((arr_16 [i_0] [i_0] [i_3] [i_5]), var_14));
                            arr_18 [i_0] [i_0] = (min(654778505, 10));
                            var_22 = ((-(arr_7 [1] [i_1] [i_0])));
                        }
                        for (int i_6 = 2; i_6 < 18;i_6 += 1)
                        {
                            var_23 |= (min(((((min((arr_6 [i_0]), (arr_6 [i_0])))) & var_10)), var_12));
                            var_24 = min(3312929672960905426, 10);
                            var_25 = (min(1353779211665640420, 654778502));
                            var_26 = (arr_9 [i_1] [i_1] [i_2] [i_1] [14]);
                        }
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            var_27 = (((arr_12 [i_7]) ? ((max((((arr_4 [1]) ? (arr_4 [i_0]) : 1)), 1))) : (min(var_9, -3312929672960905429))));
                            var_28 = (((((arr_10 [i_0] [i_7 - 1] [i_7] [i_7 - 1] [i_7 - 1]) ? var_7 : (arr_13 [i_7 - 1] [i_7] [i_7 - 1] [i_7] [i_2]))) >= ((((arr_21 [1] [i_0] [i_2] [i_0] [i_0]) ? (arr_21 [i_7 - 1] [1] [4] [15] [4]) : (max(var_10, var_4)))))));
                            var_29 = ((~(((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_12 : 1))));
                            var_30 = ((-(!var_8)));
                        }

                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            arr_27 [i_0] [i_1] [1] [i_3] [i_8] = ((((max(var_4, (arr_25 [i_0] [i_1] [i_2] [1] [i_8])))) ? var_9 : ((min(3312929672960905429, 3312929672960905446)))));
                            arr_28 [i_0] [i_8] [i_2] [i_0] [i_2] [11] = var_14;
                            var_31 = var_2;
                            arr_29 [i_0] [i_0] [i_0] [i_0] [i_1] [6] [i_8] = (((((!((min(var_13, (arr_24 [i_1] [i_3] [6]))))))) != (arr_16 [i_0] [i_0] [i_0] [i_0])));
                            var_32 = 3831540384625926861;
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_32 [i_9] = (6 != (((((max((arr_10 [i_9] [i_9] [i_2] [i_3] [i_9]), (arr_20 [i_1] [i_1] [i_1] [i_3] [i_1]))) <= var_3)))));
                            arr_33 [i_9] = -1;
                        }
                        var_33 &= (9223372036854775807 ^ 44);
                    }
                }
            }
            var_34 = (min(1, -28));
            var_35 = ((((((arr_5 [i_0]) ^ (arr_3 [i_0] [i_0])))) ? 2863474951 : (((arr_25 [i_0] [i_1] [i_1] [18] [i_0]) ? (arr_3 [i_0] [i_1]) : 3144530475195901205))));
        }
        arr_34 [i_0] = (((1 >> (((arr_16 [11] [i_0] [i_0] [i_0]) + 7069113787475235136)))));
    }
    #pragma endscop
}
