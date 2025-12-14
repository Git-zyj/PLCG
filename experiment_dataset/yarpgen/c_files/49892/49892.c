/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        var_16 = (min(var_16, 213));
        var_17 = -2;
        arr_2 [i_0] [i_0] = (255 && 15);
        var_18 = 15;
        var_19 = (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0 - 2] [i_0 - 2]) : (arr_1 [5] [i_0 + 1])));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (((max(249, (arr_3 [i_1])))) ? ((((arr_4 [i_1] [i_1]) ? 212 : (arr_3 [i_1 + 1])))) : -1);

        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            arr_10 [i_1] [i_2] = 132135635;
            arr_11 [i_1] = (min((((-60641449 + 2147483647) >> 11)), (((arr_4 [i_2 - 2] [i_1 + 2]) ^ (arr_4 [i_2 + 1] [i_1 + 1])))));
            arr_12 [i_1] = var_8;
            var_20 = (min((min(255, (arr_9 [i_2 + 1] [i_2 + 2]))), 180));
        }
        var_21 = (((((230 >= ((var_15 ? (arr_6 [i_1] [8]) : -11))))) == (max(24070, ((1 ? 185 : 61588))))));
    }
    for (int i_3 = 2; i_3 < 11;i_3 += 1)
    {
        var_22 &= (((min(61600, 14)) >> (((((10105236063812120092 & 226) ? (max(168, 5265533720593412081)) : (arr_4 [11] [i_3 - 2]))) - 41943))));
        arr_16 [i_3] = 268435455;
    }
    var_23 -= var_14;
    #pragma endscop
}
