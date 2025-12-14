/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_19 += (((~((34 ? 4603 : (arr_5 [i_0] [i_0] [i_0] [18]))))));
                    arr_7 [i_2] [i_1] [i_2] [i_0] = (arr_1 [i_0]);
                    arr_8 [i_2] [i_1] [i_0] [i_0] = (arr_6 [i_0]);
                    arr_9 [i_0] [i_0] [i_0] [i_2] = ((((((max(-1, var_10))) != var_11)) ? (((((var_10 ? var_0 : -27625)) << (((min(var_1, var_9)) - 5369))))) : var_14));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_20 += (min(12, (((var_16 & (arr_3 [i_0] [i_0]))))));
                                var_21 = (min(var_21, var_15));
                                arr_15 [i_0] [1] [i_2] [i_4] [1] = (((~var_5) - var_3));
                                var_22 = (min(var_22, ((min((((arr_2 [i_0] [i_1] [i_2]) ? (arr_2 [i_4] [i_3] [i_1]) : (arr_2 [i_1] [i_2] [i_3]))), var_18)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = ((((min(((var_17 ? var_12 : var_14)), ((min(var_15, 123)))))) ? (8052601270779931268 ^ -2063696301745068862) : (max(((var_18 ? var_16 : 18446744073709551615)), ((min(var_5, -36028797018963968)))))));
    var_24 &= 0;
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            {
                arr_22 [i_6] = ((((max(var_16, (arr_17 [i_6])))) ? ((var_4 | (((max((arr_3 [i_5] [i_6]), (arr_4 [i_6] [8] [14]))))))) : ((var_8 ? (arr_14 [i_5 + 1] [i_5 - 2] [i_5] [i_5 - 1] [i_5 - 1]) : (arr_14 [i_5 - 1] [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_5 - 1])))));
                var_25 = (max(var_25, ((((((((arr_10 [i_5] [i_5] [i_5] [i_5] [i_5 + 1] [i_5]) ? 27601 : (arr_21 [5]))) > -27603)) && ((min((min(var_17, (arr_13 [i_6] [i_6] [16] [i_5] [i_5]))), 27629))))))));
                var_26 = (!1);
                var_27 = (min(var_1, ((((arr_2 [i_6] [i_5 - 2] [i_5 - 2]) && (arr_2 [0] [i_5 + 1] [i_5 - 1]))))));
            }
        }
    }
    var_28 = ((~(((var_16 && ((max(var_8, var_17))))))));
    #pragma endscop
}
