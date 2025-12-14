/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 21;i_2 += 1) /* same iter space */
                {
                    arr_6 [i_1] = ((((((arr_3 [i_2 + 1] [i_1]) - (arr_3 [i_2 - 2] [i_1])))) || ((((arr_5 [i_0] [i_1] [i_2] [i_1]) ? (arr_4 [i_1] [i_2 - 2] [i_1]) : (arr_1 [i_2 - 2]))))));
                    arr_7 [i_0] [i_1] [i_1] [i_1] = (((arr_4 [i_2] [i_2 + 1] [i_1]) >> ((((arr_4 [i_1] [i_2 + 1] [i_1]) != (arr_4 [i_0] [i_2 + 1] [i_1]))))));
                }
                /* vectorizable */
                for (int i_3 = 2; i_3 < 21;i_3 += 1) /* same iter space */
                {
                    arr_10 [i_0] [i_3] [i_1] [i_1] = (arr_1 [i_3 + 1]);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 20;i_5 += 1)
                        {
                            {
                                arr_17 [i_1] [i_3] [i_1] [i_1] = ((12380481156345473402 ? 13353861944753122427 : 18281979648029919470));
                                arr_18 [i_5] [i_1] [i_0] [i_1] [i_0] = 1034132807;
                            }
                        }
                    }
                    var_19 = (((arr_1 [i_0]) <= (arr_3 [i_0] [i_1])));
                    arr_19 [i_1] [i_3] = (arr_9 [i_1]);
                    var_20 = (min(var_20, ((((arr_14 [i_3 - 1] [i_3] [i_3] [i_0] [i_0] [i_3]) - (arr_2 [i_3 - 1] [i_1] [i_0]))))));
                }
                for (int i_6 = 2; i_6 < 21;i_6 += 1)
                {
                    arr_22 [i_1] [i_6] [i_0] [i_1] = (arr_0 [i_0]);

                    for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                    {
                        arr_25 [i_0] [i_1] = (((((((arr_16 [i_7] [i_6] [i_1] [i_1] [19] [i_0]) == (arr_23 [i_6] [i_1] [i_6] [i_0] [i_7] [i_7]))))) * ((max((arr_8 [i_0] [i_1] [i_6] [i_1]), (arr_14 [i_0] [i_1] [i_1] [i_6] [15] [i_7]))))));
                        arr_26 [i_0] [i_1] [i_6] [i_1] [i_7] = ((((arr_15 [i_0] [i_6 - 1] [i_6] [i_1] [i_1]) || (arr_15 [i_1] [i_6 - 1] [i_0] [i_1] [i_0]))) || (arr_15 [i_0] [i_6 - 1] [i_7] [i_7] [9]));
                        arr_27 [i_0] [i_1] [i_6 - 2] [i_7] [i_6] = (((arr_8 [2] [i_1] [i_1] [i_6 - 1]) ? (((((arr_20 [i_6 + 1] [i_1]) > (arr_21 [i_1] [i_6] [i_6 - 2] [i_7]))))) : 4884866036518696027));
                    }
                    for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
                    {
                        arr_30 [i_1] [i_1] = (((((((arr_24 [i_0] [i_8]) % (arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))) ? (((arr_20 [i_1] [i_1]) / (arr_29 [i_6 + 1] [i_1]))) : (((((arr_8 [i_1] [i_1] [i_6 - 2] [i_1]) != (arr_23 [i_0] [i_1] [i_6 - 2] [i_6] [20] [i_6])))))));
                        var_21 = 32762;
                    }
                }
                arr_31 [i_1] = (arr_20 [i_0] [i_1]);
                var_22 = (((((arr_1 [i_1]) - (arr_23 [1] [i_1] [i_1] [i_0] [i_0] [i_0]))) >= (((arr_23 [i_0] [i_1] [i_1] [i_0] [i_1] [i_0]) ? (arr_1 [3]) : (arr_23 [i_0] [i_1] [i_0] [i_0] [4] [i_1])))));
            }
        }
    }
    var_23 = 50;
    #pragma endscop
}
