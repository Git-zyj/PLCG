/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, 1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_6 [i_1] [i_2] [i_1] [i_0] = (min((arr_2 [i_0] [i_1] [i_2]), (((arr_0 [i_0]) - (((arr_4 [i_2] [i_1] [i_0]) ? (arr_1 [i_2]) : 3))))));
                    var_15 = (min(var_15, (((((max((arr_5 [i_2] [i_1] [i_0]), ((max(1935510971, (arr_4 [i_2] [i_0] [i_0]))))))) ? (min((arr_0 [i_1]), (arr_0 [i_0]))) : 236)))));
                }
                /* vectorizable */
                for (int i_3 = 3; i_3 < 22;i_3 += 1)
                {
                    arr_10 [i_0] [15] [4] = (arr_2 [i_3] [i_1] [i_0]);

                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_16 = (min(var_16, ((~(arr_13 [i_0] [i_1] [i_3] [i_4])))));
                        arr_14 [i_0] [10] [i_3 - 1] [i_4] = (0 - 26355);
                        arr_15 [i_0] [i_1] [i_3] [i_4] &= (((arr_11 [i_4] [i_3] [13] [i_0]) == (arr_11 [i_0] [0] [i_3 + 1] [i_4])));
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                    {
                        arr_19 [1] [i_3 - 3] [i_1] [i_0] = (((arr_13 [i_3 - 2] [i_3 - 3] [i_3 + 1] [i_3 - 1]) % (arr_17 [11])));
                        arr_20 [i_0] = (((arr_2 [i_0] [i_1] [i_3]) + ((-(arr_4 [i_0] [i_0] [i_0])))));
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                    {
                        arr_23 [i_0] [i_0] [i_3] [i_6] = ((~(arr_18 [i_0] [16] [i_0] [i_1] [i_3 - 3] [i_6])));
                        var_17 -= (arr_17 [i_0]);
                        var_18 &= (10 + ((((arr_11 [i_0] [i_1] [i_3] [i_6]) || (arr_1 [i_0])))));
                    }
                }
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    var_19 -= (((((arr_21 [i_0] [i_0] [i_1] [i_7]) << (var_0 - 2011657635))) % (arr_21 [i_7] [i_1] [i_0] [i_0])));
                    arr_26 [i_0] [i_0] [i_0] [i_0] = ((((arr_21 [i_0] [i_1] [i_7] [i_7]) - ((max(19412, 255))))));
                    arr_27 [i_0] [i_1] [21] [i_1] = ((((-(arr_3 [i_0] [i_1] [i_7]))) % (((arr_3 [i_0] [i_1] [i_0]) ? (arr_3 [i_0] [i_1] [i_7]) : (arr_21 [i_0] [16] [i_7] [i_7])))));
                }
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    var_20 &= 2;
                    var_21 = (arr_2 [i_0] [i_1] [9]);
                    arr_31 [7] [i_1] [0] = (max((!var_13), var_5));
                }
                arr_32 [i_0] [i_1] = (max((arr_8 [i_0] [i_1] [i_0]), (arr_30 [i_0] [i_1] [i_1] [i_1])));
            }
        }
    }
    var_22 = ((((var_5 ? 19441 : var_12))) >> (((((var_9 < 1935510971) ^ (0 | var_0))) - 2011657626)));
    #pragma endscop
}
