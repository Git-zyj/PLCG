/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((-((var_10 ^ ((var_13 ? 99 : -8735597276791629136))))))));
    var_15 = ((max(3771896412, (min(var_9, 523070856)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 = ((((-(arr_6 [i_0] [i_1] [i_0])))) ? ((((((arr_0 [i_0]) ? 847209067 : (arr_2 [i_0] [i_1])))) ? 3771896412 : ((var_7 ? var_10 : var_0)))) : (((((((arr_1 [i_0 - 2] [i_2]) ? (arr_4 [i_0]) : (arr_4 [1]))) > var_12)))));
                    arr_8 [i_0] [i_1] [i_1] = ((((max(((-24708 - (arr_0 [i_0]))), 1))) ? ((1 ? (arr_3 [i_0 + 1] [i_0] [i_0 + 1]) : 5296282095715180680)) : (((((3771896412 ? var_7 : var_3))) ? 8710309280658989383 : var_0))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_17 = ((arr_3 [i_0] [i_0 - 2] [i_2]) ? (arr_9 [2] [i_1] [i_0] [i_0] [4] [i_1]) : var_2);
                        var_18 = ((-(arr_7 [i_0 + 1] [2] [i_0 - 2])));
                        arr_11 [7] [i_1] [i_1] [i_0] [i_2] [2] = arr_7 [i_0] [1] [i_1];
                    }
                    for (int i_4 = 3; i_4 < 10;i_4 += 1)
                    {
                        arr_16 [i_0] = ((var_3 ? ((((1158548718 ? -747898282374021644 : var_6)))) : -0));
                        var_19 = var_10;
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        var_20 = ((((((arr_9 [i_0 + 2] [i_0 - 3] [i_0] [1] [i_0 - 1] [i_0 + 2]) > 1))) / ((((-(arr_3 [i_0] [0] [i_0 + 1]))) & (arr_12 [i_2] [i_0 + 2] [i_0 - 3] [i_0 - 3])))));
                        arr_19 [1] |= (min(((max((arr_12 [i_2] [i_0 - 2] [i_0 - 3] [i_0]), (arr_12 [2] [i_0 - 1] [i_0 + 1] [i_0 + 1])))), ((848675731586172813 ? ((-(arr_10 [i_0] [i_1] [i_2] [i_5]))) : var_8))));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            var_21 = ((((-((var_9 ^ (arr_2 [i_0] [i_0]))))) == (((-4225299819365528235 ? 3771896440 : (((1 ? 118 : 1))))))));
                            arr_26 [1] [i_0] [i_0] = ((-(arr_10 [i_0] [i_1] [i_2] [i_6])));
                            arr_27 [i_0] = (max((((3771896412 ? (arr_23 [i_0] [i_0 + 2]) : (arr_23 [i_0] [i_0 - 2])))), (((arr_10 [i_7] [i_2] [i_2] [i_0 - 1]) ? 94 : 1523910586))));
                        }
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            var_22 = (min(var_22, var_6));
                            arr_31 [i_2] [2] [i_2] [6] [i_0] [i_0] [i_0] |= -2771056734;
                            arr_32 [i_8] [i_0] [4] [i_0] [i_0] = (arr_21 [i_0] [i_1] [1] [i_6] [i_8]);
                            arr_33 [i_8] [i_0] [i_2] = ((-((((var_4 ? 1 : 1)) & (arr_0 [i_0])))));
                        }
                        var_23 = (max(var_23, ((((567830660 ? (min(3308491275, 1)) : (3771896412 < 1)))))));
                        arr_34 [2] [i_1] [i_1] |= 1;
                    }
                    var_24 = min(((-((-(arr_21 [i_0] [0] [i_1] [i_0] [i_2]))))), ((-(22811 * 88))));
                }
            }
        }
    }
    #pragma endscop
}
