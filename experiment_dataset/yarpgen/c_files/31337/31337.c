/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_14 = 0;
                        var_15 = (max(var_15, (((!(((1 ? (((var_1 ? 0 : var_3))) : ((0 ? 0 : (arr_1 [i_0])))))))))));
                    }

                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 9;i_4 += 1)
                    {
                        var_16 = (((8 ? (arr_8 [i_1]) : 32766)));
                        var_17 = ((0 ? 40853 : 24683));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {

                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 10;i_6 += 1)
                        {
                            var_18 *= (((((38662 ? (arr_14 [8] [10] [i_0] [8]) : -977909803))) & ((4294967289 ? 1 : 7))));
                            var_19 = (max(var_19, (((((arr_0 [i_2 + 1]) & (arr_9 [i_1] [i_2 + 3] [i_6])))))));
                            var_20 = (((arr_15 [i_2 + 3] [i_2]) ? 935 : (arr_15 [i_2 + 2] [i_6 + 2])));
                            var_21 = (min(var_21, (arr_3 [i_2])));
                            arr_22 [i_2] [i_1] [2] [i_1] [1] [i_2] [i_6] = (-(var_1 || 977909814));
                        }
                        arr_23 [i_0] [i_0] [i_1] [9] [i_0] = -2710876843008042873;
                        var_22 = (max(var_22, var_8));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_23 = (!16198433740214579368);
                        var_24 = (min(var_24, ((((arr_5 [8] [i_1] [8]) / (arr_5 [i_0] [i_7] [4]))))));
                    }
                }
            }
        }
        var_25 = ((((((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) && (arr_12 [7] [i_0] [i_0] [7] [i_0] [i_0])))) < -17895));
    }

    for (int i_8 = 2; i_8 < 12;i_8 += 1)
    {
        var_26 = ((!((max((!8388608), (arr_26 [i_8 - 2]))))));
        var_27 = ((2082240224 > (((arr_27 [i_8 - 1] [i_8 + 2]) ? 536739840 : 454782752))));
    }
    #pragma endscop
}
