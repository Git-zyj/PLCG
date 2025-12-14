/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_17 ^= ((~((min((((arr_3 [i_0]) && -10649)), (((arr_1 [i_0]) != -4608)))))));
        var_18 = (((((+((-4629 ? (arr_0 [i_0 - 1]) : 1842))))) ? (!-1846) : ((min(-1, 255)))));
        var_19 ^= 1861;
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_20 = (((arr_5 [5]) ? (min((~-1843), ((((arr_1 [i_1]) || -30900))))) : (((arr_5 [i_1]) ? 1843 : (1849 - 7)))));

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_10 [10] [10] [i_1] = (((((-4608 + 2147483647) << (((arr_7 [i_1]) - 5)))) >= ((1839 ? (arr_8 [i_1 + 1] [i_1 + 1] [i_1 + 1]) : -3097))));
            arr_11 [i_1] [i_1] = (-14193 ? 1846 : 10440869063106460400);
        }
    }
    var_21 = ((+((((~var_8) && ((min(-1843, var_16))))))));
    #pragma endscop
}
