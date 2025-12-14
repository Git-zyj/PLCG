/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 = (min(15354908687338727785, (arr_1 [i_0])));
        arr_2 [i_0] [i_0] = ((~(arr_0 [i_0])));
        var_15 = (min(var_15, ((((15354908687338727780 || 15354908687338727780) ? ((((arr_0 [16]) ? (arr_0 [2]) : (arr_0 [0])))) : (arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        var_16 = (((arr_0 [16]) ? -var_3 : (arr_0 [8])));
        var_17 = (((arr_4 [i_1 + 3]) ? (arr_1 [i_1]) : (arr_4 [i_1])));
        var_18 -= var_12;
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    var_19 = 3091835386370823837;
                    var_20 = (-(((arr_0 [i_2]) ? var_8 : 0)));
                    /* LoopNest 2 */
                    for (int i_4 = 4; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 15;i_5 += 1)
                        {
                            {
                                arr_17 [i_2] [i_4] [8] [i_4] [i_5 + 1] = (arr_4 [i_5]);
                                var_21 = (min(var_21, (((!(((~(arr_11 [i_1] [i_4] [i_4] [i_1])))))))));
                                var_22 = ((var_6 ? (arr_15 [i_5] [i_5] [i_5 - 1] [i_5 + 2] [i_5] [i_5 + 2]) : -0));
                                var_23 = ((-(arr_0 [i_2])));
                            }
                        }
                    }
                    var_24 = (!(arr_12 [i_1] [i_2] [i_2] [i_1] [i_3] [i_2]));
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_25 = ((((!(arr_11 [i_1] [i_2] [i_6] [i_7]))) ? (((~(arr_10 [i_7 + 1] [i_2 - 1] [i_2 - 1] [i_6] [i_7 + 1])))) : 14366972659965251751));
                                var_26 = ((3091835386370823857 ? (arr_8 [i_7 + 4] [i_1 + 2] [i_1 - 1]) : 2473513461046751220));
                                var_27 = 244;
                                arr_23 [i_1 + 3] [i_2] [i_1 + 3] [i_1] = ((((-2473513461046751220 <= (arr_16 [i_1] [i_1 + 1] [i_1 + 2] [i_1] [i_1 - 1]))) ? ((((arr_13 [i_3] [i_3]) ? 1 : 0))) : ((2473513461046751219 ? (arr_10 [i_1] [i_2 - 1] [i_3] [i_6 - 2] [i_3]) : var_6))));
                                var_28 = (((arr_22 [15] [i_2] [i_6 + 1] [i_7 + 1]) & (((1 ? -4937856622236124176 : -2473513461046751220)))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 2; i_8 < 22;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 23;i_9 += 1)
        {
            {
                arr_29 [i_9] [i_9 - 2] [i_9 + 1] = var_10;
                var_29 = (max(var_29, 0));
            }
        }
    }
    var_30 = (!15354908687338727778);
    #pragma endscop
}
