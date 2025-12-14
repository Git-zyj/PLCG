/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 = (min(var_15, (((!(511 || var_1))))));
        var_16 *= (((arr_0 [0] [0]) ? var_3 : -5490295249964904560));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        var_17 *= -34;
        arr_4 [i_1] [i_1 + 2] = (min((min((((var_10 << (((arr_1 [3] [i_1]) - 27757))))), var_12)), ((min(var_2, (arr_0 [i_1 - 1] [i_1 + 1]))))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = ((+(((!((((arr_5 [i_2] [i_2]) ? (arr_6 [0]) : var_14))))))));
        var_18 = ((-(max(-4335, var_12))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    var_19 = (max(var_19, ((((((((arr_7 [i_2] [i_4]) && (arr_7 [i_3] [i_3]))))) ? ((var_6 * (arr_14 [i_4]))) : (((!((min(var_10, (arr_10 [i_2] [i_2] [i_2]))))))))))));
                    var_20 = (min(((((!var_1) >> (23 & -8541)))), (min(223, (arr_10 [i_2] [i_2] [i_2])))));
                    arr_15 [i_4] [i_4] [i_4] |= ((((min(64, (arr_7 [i_2] [i_2])))) || ((var_10 || (arr_13 [16] [i_2] [i_3] [i_2])))));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        var_21 = -64;
                        arr_26 [i_5] [i_6] [i_7] [i_8] = (((arr_20 [i_8] [i_7] [i_5] [i_5]) < (~1)));
                        arr_27 [i_5] [i_6] [i_7] [i_8] = (arr_18 [i_5] [i_7] [i_8]);
                    }
                    arr_28 [i_5] [i_6] [i_7] = (max(20, -27592));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                {
                    arr_33 [12] [i_9] [12] [10] = ((((arr_25 [i_5] [15] [i_9] [i_10] [i_9] [i_10]) ^ 1)));
                    var_22 = var_10;
                    var_23 = (max(var_23, (((arr_16 [i_5] [i_9]) ? (max(15360, (arr_18 [i_5] [i_9] [i_10]))) : (49687 && 1528675116644005582)))));
                }
            }
        }
    }
    var_24 = (max(var_24, var_10));
    var_25 = (((-127 ? (~var_14) : (min(var_4, var_14)))));
    #pragma endscop
}
