/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_17 ^= var_2;
        var_18 |= (-2632857405 < -var_4);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = ((-(((arr_2 [i_1] [i_1]) + (arr_3 [i_1])))));
        arr_6 [i_1] = (var_12 / 2632857405);
        var_19 = 52005;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_1] = 1;
                    var_20 ^= var_7;
                    arr_13 [i_1] [i_2] [i_1] = var_6;
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                {
                    var_21 = (((((-(arr_7 [i_5])))) ? 1297349578 : (((((arr_7 [i_4]) < 1393105580))))));
                    var_22 = (((((((!(arr_16 [i_4] [i_5] [i_4]))) && var_5))) * ((2725974653 ? 32301 : 65535))));
                    var_23 ^= (((!(((-14298 ? var_2 : var_0))))));
                }
            }
        }
        var_24 = var_0;
    }
    var_25 = var_2;
    #pragma endscop
}
