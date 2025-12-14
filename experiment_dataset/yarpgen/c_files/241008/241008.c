/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_1));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = var_2;
        var_18 = (max(var_18, ((((arr_1 [i_0]) ? (((-(arr_0 [i_0] [i_0])))) : (arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    arr_10 [i_3] [i_2] = ((~(arr_5 [i_1])));

                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_19 |= ((((((((-32767 - 1) ? (arr_1 [i_1]) : 11480)) & -32757))) / var_12));
                        arr_13 [i_1] [i_1] [i_3] [i_4] [i_4] [i_2] = var_0;
                        var_20 = (max(var_20, (!1356126626)));
                        var_21 = (max(var_21, ((max(((32762 ? (((arr_7 [i_1]) + var_7)) : ((8128 ? 128 : 63434)))), ((((min((arr_8 [i_1] [i_2] [i_3] [i_4]), var_12))) ? (arr_12 [i_3] [i_3] [i_3] [i_1] [i_1] [i_3]) : var_6)))))));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_22 = (min(8123, 32758));
                        var_23 = (((((((((arr_15 [i_1] [i_2] [i_3] [i_3]) ? (arr_3 [i_1] [i_1]) : 12672597979386311894)) == (((max(-32755, var_8)))))))) & ((max((arr_11 [i_1] [i_2] [i_3] [i_5]), 15)))));
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        var_24 = (max(var_24, ((min(var_8, ((((min(var_0, (arr_12 [i_1] [i_1] [i_2] [i_2] [i_3] [i_6])))) ? (min(var_12, (arr_7 [i_6]))) : var_9)))))));
                        var_25 = ((-((((arr_4 [i_3]) != var_6)))));
                    }
                    var_26 = (max(var_26, ((((((~(var_2 - var_12)))) ^ (min(var_11, (arr_6 [i_1]))))))));
                    var_27 = 32753;
                }
            }
        }
        var_28 = ((-(~var_12)));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        var_29 = var_14;
        var_30 = (max(var_30, (~1)));
        var_31 |= (~var_5);
    }
    var_32 = (max(var_32, var_5));
    #pragma endscop
}
