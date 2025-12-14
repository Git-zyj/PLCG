/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((arr_0 [i_0] [i_0]) < (((min((((arr_0 [13] [i_0]) <= (arr_1 [i_0] [i_0]))), (((arr_0 [i_0] [i_0]) <= (arr_0 [5] [i_0])))))))));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_16 = (min((((((min((arr_3 [i_0] [i_1] [i_0]), (arr_4 [i_0] [i_0])))) * ((((arr_0 [i_1] [i_1]) <= (arr_1 [i_0] [i_1]))))))), (((min(-82, 10811849753898208395)) + ((((arr_4 [1] [i_0]) & (arr_1 [i_1] [i_1]))))))));
            var_17 = (max(var_17, (-32749 && 1)));
            var_18 *= (arr_3 [i_1] [i_0] [i_1]);
        }
        arr_5 [i_0] = (arr_3 [i_0] [i_0] [i_0]);
        var_19 = ((((min((arr_4 [i_0] [i_0]), ((((arr_4 [i_0] [i_0]) && (arr_0 [i_0] [i_0]))))))) != (arr_3 [i_0] [i_0] [i_0])));
        arr_6 [5] = (arr_1 [1] [1]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_20 = (arr_8 [i_2]);

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            var_21 = (((arr_0 [i_2] [i_2]) << (((((arr_4 [i_2] [i_3]) - -21189)) - 17383))));
            var_22 = (((arr_10 [i_2] [i_3]) * (arr_1 [13] [0])));
            var_23 = ((((((arr_9 [i_2]) > (arr_1 [i_3] [i_2])))) ^ (arr_8 [i_2])));
        }
        for (int i_4 = 1; i_4 < 14;i_4 += 1)
        {
            var_24 = (arr_0 [i_2] [i_2]);

            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                var_25 = (arr_17 [i_4] [i_4]);
                arr_18 [i_2] [i_2] [i_2] [i_4] = (arr_17 [i_2] [i_4]);
            }
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                var_26 = ((arr_4 [6] [6]) ^ ((((arr_3 [12] [i_2] [i_6]) <= (arr_16 [i_2] [i_2] [i_2])))));
                var_27 = (((arr_17 [i_4] [i_4]) * ((((arr_0 [i_2] [i_2]) <= (arr_13 [i_4] [i_4]))))));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 14;i_8 += 1)
                    {
                        {
                            arr_26 [i_2] [4] [i_2] [i_2] [15] [i_4] = ((((((arr_0 [0] [0]) && (arr_12 [i_4])))) <= (arr_4 [i_2] [10])));
                            var_28 = (((arr_12 [i_4]) - (((arr_16 [2] [10] [i_2]) | (arr_14 [i_2])))));
                        }
                    }
                }
                arr_27 [i_2] [i_2] [i_4] [i_2] = (((((((arr_25 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) == (arr_4 [i_6] [i_6]))))) <= (arr_22 [i_2] [15] [14] [i_2] [i_2] [i_2])));
                var_29 = (1 ^ 96);
            }
            var_30 |= (arr_23 [i_4] [i_4]);
        }
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            arr_30 [i_9] = (arr_4 [i_2] [i_2]);
            var_31 ^= (((((arr_7 [i_2] [i_9]) <= (arr_4 [i_2] [i_2]))) && (((arr_9 [i_9]) <= (arr_0 [i_2] [7])))));
            var_32 = (((arr_24 [i_2] [i_2] [i_2] [i_2] [i_9]) / (((arr_29 [i_2]) * (arr_28 [i_2] [i_2] [i_2])))));
        }
        arr_31 [i_2] = (((((arr_15 [i_2] [i_2] [i_2]) + (arr_21 [i_2] [i_2] [i_2] [12] [i_2] [12]))) ^ (1 - 1)));
    }
    var_33 = (((min(var_5, (min(var_6, var_15)))) < var_15));
    var_34 = ((((((min(var_5, var_15))) + (var_2 < var_11))) <= (((var_11 <= var_10) + var_13))));
    var_35 = (min(((((var_5 / var_2) <= (var_5 <= var_1)))), (min((var_12 << var_4), var_6))));
    #pragma endscop
}
