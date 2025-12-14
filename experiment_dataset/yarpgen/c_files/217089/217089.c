/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_12 &= 2915594208;
        arr_4 [i_0] = 2915594201;
        arr_5 [i_0] = ((((max(var_9, (((arr_0 [i_0]) ? var_0 : var_2))))) ? (arr_3 [i_0] [i_0]) : ((var_9 ? var_1 : ((3520815484536324443 ? var_10 : (arr_3 [i_0] [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_13 = (((arr_2 [i_1]) ? 12975523906648877750 : (((((max(1379373094, 2915594206)) >= 1379373094))))));
        var_14 = var_10;
        arr_8 [i_1] = (arr_2 [i_1]);
        var_15 = (arr_2 [i_1]);
        var_16 -= var_1;
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_17 -= (arr_9 [i_2]);
        var_18 = var_6;
        arr_12 [i_2] = var_5;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 15;i_4 += 1)
            {
                {
                    var_19 = (min((((arr_17 [i_4] [i_4] [i_4] [i_2]) ? var_6 : 8806219212301166593)), ((((1969700861220637166 > var_6) || ((((arr_9 [8]) ? var_5 : var_2))))))));
                    var_20 = ((((((arr_10 [1]) * var_5))) ? (((((arr_1 [i_2]) || var_3)) ? 1379373087 : (max(var_9, 1379373094)))) : (((((min(2915594201, 2915594193))) ? 2915594201 : var_0)))));
                }
            }
        }
        arr_18 [i_2] [i_2] = var_8;
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
    {
        var_21 = ((((var_4 << (((arr_9 [i_5]) - 22284475)))) / (arr_17 [i_5] [i_5] [i_5] [i_5])));
        arr_22 [0] |= ((!((max(2915594181, (((arr_10 [i_5]) ? var_11 : var_8)))))));
        arr_23 [i_5] = (arr_16 [i_5]);
        var_22 &= (2915594201 && var_4);
        var_23 ^= var_6;
    }
    var_24 = var_5;
    var_25 = (max(var_25, (((var_7 ? var_1 : var_8)))));
    var_26 = var_9;
    var_27 = 2921587424;
    #pragma endscop
}
