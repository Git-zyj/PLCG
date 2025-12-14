/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 = (min(var_13, (((-32750 ? -4030501886754952186 : 8192)))));
        var_14 -= (((arr_1 [i_0]) - (min((((arr_0 [i_0]) + -15129)), (arr_2 [i_0])))));
    }
    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {
        arr_5 [6] |= -15129;
        var_15 = (min(var_15, (!-15113)));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_16 |= ((((min(var_10, (var_7 - 57350)))) & ((57361 & (arr_10 [2] [i_1] [i_2])))));
                        var_17 = (min(var_17, ((((((min(57344, 31836)))) + (((arr_7 [i_1]) ? (arr_3 [i_1] [i_3]) : var_2)))))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            {
                var_18 = (min(var_18, ((((((max(var_9, var_10)) <= 8188)) && 15005796317669064389)))));
                var_19 |= 18446744073709551612;
                var_20 |= 8179;
            }
        }
    }
    #pragma endscop
}
