/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((200 ? var_10 : var_2)));

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_13 *= ((~(!-var_3)));
        arr_3 [i_0] [i_0] = (max(193, 14227238800798390898));
        var_14 = (min(4287388094, 2641520150));
        var_15 = ((-(arr_2 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 *= (!9557337178583767138);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_17, ((max((arr_4 [i_4] [i_3]), (((arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] [i_0]) & (arr_12 [i_0] [i_1] [i_1 + 3] [i_2] [i_3] [i_4]))))))));
                                arr_16 [i_1] [6] = (~(((arr_5 [i_1] [i_3] [i_1]) ? -7579201 : (((var_11 ? var_3 : (arr_4 [i_1] [7])))))));
                                var_18 = (arr_14 [i_0] [i_1]);
                            }
                        }
                    }
                    arr_17 [i_0] [i_1] [i_1] [i_2] = ((((-7579185 << ((((max(-41, 36))) - 34)))) << (arr_5 [i_0] [i_1] [i_1])));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
    {
        var_19 = (max(var_19, var_8));
        arr_22 [i_5] = var_11;
        var_20 = var_4;
        var_21 = (~-6400384269643240350);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
    {
        var_22 ^= ((-(~var_6)));
        arr_25 [i_6] = ((765820319353858515 ? (arr_8 [10] [i_6] [i_6] [i_6]) : (arr_8 [4] [i_6] [4] [i_6])));
        var_23 = (max(var_23, (((-(arr_8 [2] [i_6] [i_6] [4]))))));
    }
    #pragma endscop
}
