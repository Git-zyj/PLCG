/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= var_5;
    var_17 = var_14;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_2;
        var_18 = (max(var_18, ((((65535 / var_13) <= ((min((1 == var_5), 0))))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    var_19 = 1;
                    arr_13 [1] [i_1] = 1;
                    var_20 = ((((var_13 ? -46 : (arr_2 [i_1]))) / (arr_10 [i_3] [i_2])));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 12;i_5 += 1)
            {
                {
                    var_21 -= (min(((8565399874764796604 < (arr_0 [i_1] [i_4]))), ((!(arr_0 [i_1] [i_5 + 1])))));
                    arr_19 [i_1] [i_4] = (max((min(((max(var_11, (arr_10 [11] [i_4])))), var_5)), (((arr_11 [i_1] [i_4]) ^ 13027767398725692550))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 4; i_6 < 19;i_6 += 1) /* same iter space */
    {
        var_22 = (-(arr_0 [i_6 - 4] [i_6]));
        var_23 = (+-8565399874764796612);
        arr_22 [i_6] [i_6] = ((-(arr_20 [i_6] [i_6])));
    }
    for (int i_7 = 4; i_7 < 19;i_7 += 1) /* same iter space */
    {
        var_24 = (max(((-(min((arr_20 [i_7 + 1] [i_7]), 8565399874764796604)))), (arr_20 [i_7] [i_7])));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 19;i_10 += 1)
                {
                    {
                        var_25 = 18;
                        var_26 = (~3611667449577746332);
                        var_27 &= ((var_9 ^ (((!3176514113078738427) ? (~129) : (~5)))));
                        arr_34 [i_8] = (min(28, (arr_26 [i_8] [i_8])));
                    }
                }
            }
        }
    }
    var_28 = var_14;
    var_29 = ((((!((max(var_3, var_8))))) || ((max(((var_8 ? var_3 : var_14)), var_11)))));
    #pragma endscop
}
