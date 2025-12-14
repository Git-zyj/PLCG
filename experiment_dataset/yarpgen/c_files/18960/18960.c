/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_16 = (min(var_16, (arr_1 [i_0] [i_0])));
        arr_2 [i_0] = (((((arr_0 [i_0 + 1] [i_0 - 1]) ? (arr_0 [11] [i_0]) : (max((arr_1 [i_0] [0]), (arr_0 [i_0] [i_0]))))) == (max((arr_0 [i_0 + 2] [i_0 - 2]), (arr_0 [i_0 - 2] [i_0 + 2])))));
        var_17 = (min(var_17, (((((((arr_1 [i_0] [i_0 - 1]) ? (arr_1 [8] [i_0 - 1]) : (arr_1 [i_0] [i_0 - 1])))) ? (((!((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_1 [12] [i_0 + 2]))))))) : (arr_1 [i_0] [i_0 + 1]))))));
        var_18 = ((((((((arr_0 [i_0] [i_0]) ? (arr_1 [i_0] [i_0 - 2]) : (arr_1 [i_0] [9])))) && (arr_0 [i_0] [11]))) ? ((max((arr_1 [i_0 + 2] [i_0 + 1]), (arr_1 [i_0 + 2] [i_0 + 1])))) : (arr_0 [i_0] [i_0 - 1])));
        arr_3 [i_0] = ((((((arr_0 [i_0] [2]) ? (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [10]) : (arr_0 [1] [9]))) : (arr_0 [2] [i_0 - 3])))) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0 + 2] [i_0 - 2])));
    }
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    var_19 = (max(var_19, ((((arr_9 [i_2 + 1] [i_2] [i_3] [i_2 - 1]) >= (((max((arr_9 [i_2 + 1] [i_2] [i_3] [i_2 + 1]), 0)))))))));
                    var_20 = (max(var_20, (((max((arr_5 [i_1 + 3]), (arr_5 [i_1 + 2])))))));
                }
            }
        }
        var_21 = (arr_5 [i_1]);
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 9;i_4 += 1) /* same iter space */
    {
        arr_13 [i_4] [i_4] |= (arr_9 [i_4 + 1] [14] [1] [14]);

        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            var_22 = (arr_5 [i_4]);
            /* LoopNest 2 */
            for (int i_6 = 3; i_6 < 7;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    {
                        arr_21 [i_4] [i_5] [i_6] [i_4] = 106;
                        arr_22 [i_4] [i_5] [i_5] [i_6] [i_6] [i_7] = (arr_1 [i_4] [i_4 + 1]);
                    }
                }
            }

            for (int i_8 = 2; i_8 < 9;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    var_23 *= (((arr_5 [i_4 + 1]) & (arr_5 [i_4 + 1])));
                    arr_27 [i_8] [0] [0] [1] [2] = ((arr_17 [4] [1] [i_8] [5]) ? (arr_6 [i_8]) : (((arr_16 [i_4] [i_4] [i_4] [i_4]) & (arr_19 [i_4] [i_4] [4]))));
                }
                arr_28 [i_4] [i_8] [i_5] [1] = ((arr_20 [i_8 + 1] [i_8 + 1] [i_8 - 1]) ? (arr_20 [i_8 - 1] [i_8 - 2] [i_8 - 1]) : (arr_20 [i_8 - 1] [i_8 - 1] [i_8 + 1]));
                var_24 = (min(var_24, (arr_20 [i_4 - 1] [i_8 - 1] [1])));
                arr_29 [5] [i_5] [i_8] = (((arr_26 [i_8 - 2] [i_8] [i_8 - 2] [i_8]) <= (arr_26 [i_8 + 1] [i_8 + 1] [i_8 - 2] [i_8])));
            }
            arr_30 [i_4] [i_4] = (((arr_6 [16]) ? (arr_10 [i_4 - 1]) : (arr_8 [i_4 - 1] [10])));
        }
        var_25 = (max(var_25, (arr_1 [i_4 + 1] [i_4 + 1])));
    }
    for (int i_10 = 1; i_10 < 9;i_10 += 1) /* same iter space */
    {
        arr_33 [i_10] [i_10] = ((-(arr_4 [i_10 + 1] [i_10 + 1])));
        var_26 = (min(var_26, ((max((max((arr_20 [i_10 - 1] [4] [i_10 - 1]), (arr_0 [i_10 - 1] [i_10]))), ((99 ? 4095 : 1550746223858715077)))))));
    }
    #pragma endscop
}
