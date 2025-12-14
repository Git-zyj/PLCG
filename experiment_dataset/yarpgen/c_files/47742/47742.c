/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-((((-44 % 6398587927845224591) != 1)))));
    var_12 = (((((var_7 + 0) + (2096128 - var_5))) - (((100 + (var_5 + 1))))));
    var_13 = 8269768585702974396;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_14 &= (((arr_3 [i_1] [i_1] [i_0]) ^ (!16777088)));
                var_15 = (min((min((((arr_2 [i_0 - 1] [i_0 - 1]) * (arr_0 [i_1]))), (arr_2 [i_0] [i_1]))), (arr_0 [i_0 - 1])));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_16 = ((var_2 % (max(var_0, (arr_5 [i_0] [i_0 - 2] [i_1] [i_1])))));
                    var_17 = ((~((((((arr_1 [i_2]) || (arr_0 [i_0])))) >> (min((arr_0 [i_0 + 1]), (arr_4 [i_2] [i_1] [i_0] [i_0])))))));
                }
                for (int i_3 = 3; i_3 < 14;i_3 += 1)
                {
                    var_18 ^= (((((arr_2 [i_1] [i_0 + 1]) != (arr_2 [i_0] [i_0 + 1]))) || ((min((min((arr_6 [i_1] [i_1] [10] [i_0 - 1]), var_0)), 2759949073)))));
                    arr_9 [i_3] [i_1] [i_3] [i_1] = ((~(((-31 + 2147483647) >> (((min(2759949073, var_2)) - 2759949054))))));
                }
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    arr_12 [i_0] = (min((((((((arr_7 [i_1]) + 2147483647)) >> (233 - 217))) ^ 23)), ((((108 / 16140901064495857664) || ((min(var_8, 9874646162180649749))))))));
                    var_19 = (((((-1 ? 18446744073709551615 : 250)) << 0)) > (((23 ? (var_3 % var_7) : (arr_3 [i_0] [i_0 + 1] [i_1])))));
                }
                arr_13 [i_0 - 1] [i_0] [i_0 - 1] = 1535018224;
            }
        }
    }
    #pragma endscop
}
