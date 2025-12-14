/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-(((((min(8, 138))) != ((min(var_0, var_4))))))));
    var_12 = ((((min(9317, 1833643312283246790))) ? (((var_0 | 0) ^ (((min(var_1, var_3)))))) : (((((var_2 ? var_7 : var_5)) & ((((-32767 - 1) || 10096776043620485494))))))));
    var_13 = var_6;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_14 = (max(var_14, (((-(arr_3 [i_0] [i_0 - 3]))))));
            var_15 += ((arr_4 [i_0 - 1]) <= (arr_2 [i_0 - 3] [i_0 + 1]));
            var_16 = (((arr_4 [i_0]) ? 193 : ((185 ? var_8 : (arr_1 [i_0])))));
            arr_5 [i_1] [1] = (32767 > var_0);
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_17 *= var_5;
            var_18 *= ((204 << (2702418552581223136 - 2702418552581223116)));
            var_19 *= -var_0;
        }
        var_20 = (((arr_2 [i_0 - 3] [i_0 - 3]) ? (arr_2 [i_0 - 1] [i_0]) : (arr_2 [i_0 + 1] [i_0])));
        var_21 = (arr_3 [i_0 - 2] [i_0 + 1]);
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 8;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 4; i_6 < 9;i_6 += 1)
                {
                    {
                        arr_18 [i_3] [i_3] [6] [i_6] = ((((1 ? 0 : -22044)) | var_8));
                        var_22 = ((!(((8 ? 1 : 255)))));
                    }
                }
            }
        }
        var_23 -= (arr_15 [i_3] [i_3 - 1] [i_3] [i_3 + 1]);
    }
    for (int i_7 = 1; i_7 < 12;i_7 += 1) /* same iter space */
    {
        var_24 = var_6;
        arr_21 [i_7] = var_2;
    }
    for (int i_8 = 1; i_8 < 12;i_8 += 1) /* same iter space */
    {
        var_25 = (min((arr_6 [i_8] [i_8]), (min(var_2, (arr_0 [i_8 + 2] [i_8 - 1])))));
        var_26 = (min((((arr_3 [i_8] [i_8 + 2]) ? (arr_3 [i_8 + 1] [i_8]) : (arr_3 [i_8] [i_8]))), ((1 ? (arr_19 [i_8 + 2] [i_8 + 2]) : var_6))));
        var_27 *= (((arr_23 [i_8 - 1]) ? var_7 : (((((var_5 ? var_4 : 1))) ? 52 : (var_9 && 233)))));
        var_28 += (!209);
        arr_25 [i_8] = 0;
    }
    #pragma endscop
}
