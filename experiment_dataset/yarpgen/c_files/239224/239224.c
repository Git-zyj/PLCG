/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 = (min(var_15, (((~((var_3 % (arr_0 [i_0]))))))));
        var_16 = ((((((arr_0 [i_0]) + (arr_0 [i_0])))) || (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    var_17 += ((~((var_6 ? ((max(-1089237599, 32767))) : (min(1817292998, -125))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_18 = ((~(arr_11 [i_2] [i_2] [i_4])));
                                var_19 = (max((((max(var_12, (arr_1 [i_2] [i_4]))) - (-117 - 1130875787))), -32767));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                arr_20 [i_1] [i_3] [i_6] [i_7] = (~119);
                                arr_21 [i_1] = (1096899320 - 130);
                                arr_22 [i_1 - 1] [5] [i_3] [9] [i_7] = (~(((arr_0 [i_1]) - 190)));
                            }
                        }
                    }
                }
            }
        }
        var_20 += (max((~4294967294), 1130875787));
    }
    for (int i_8 = 3; i_8 < 14;i_8 += 1)
    {
        arr_26 [i_8] = (max(-1859920486, ((((!-1977306346765007241) ? ((-(arr_24 [i_8]))) : -5)))));
        var_21 += ((-(arr_25 [i_8 + 1] [i_8 - 3])));
        var_22 = (min((min((arr_23 [i_8 - 3] [i_8 - 2]), var_12)), ((min((arr_23 [i_8 - 2] [i_8 - 3]), (arr_23 [i_8 - 1] [i_8 - 1]))))));
    }
    var_23 = (min(var_23, ((min(var_3, (65535 <= -2121687908))))));
    #pragma endscop
}
