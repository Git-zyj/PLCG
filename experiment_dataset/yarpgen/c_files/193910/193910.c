/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_12 += (max((arr_5 [i_2 - 2] [i_2 - 1] [i_1]), (min((arr_5 [i_2 + 3] [i_2 - 1] [i_1]), 62))));
                            var_13 ^= 43;
                            var_14 = ((var_3 ? 109 : -7829724767471967129));
                            arr_10 [i_0] [i_0] [i_1] [i_1] [12] [i_3] = (var_7 ? var_0 : (((((5562030476054878958 ? 540054995 : -30))) ? 49855 : ((-4436516940179597623 ? 65535 : -4922433708978546009)))));
                        }
                    }
                }
                var_15 = (arr_1 [i_0] [i_1]);
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        {
                            var_16 = (max(var_16, -125));
                            var_17 ^= ((max((arr_5 [0] [12] [i_4 + 1]), (arr_5 [i_0] [i_0] [i_4 + 1]))));
                        }
                    }
                }
                var_18 += (max(((118 / (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]))), (((arr_7 [8] [6] [i_0] [i_0] [i_1]) ? (arr_7 [i_1] [i_1] [i_0] [i_0] [i_0]) : var_5))));
            }
        }
    }
    var_19 |= (min(((var_7 ^ ((min(118, 8164))))), ((((min(30, 740726772))) ? (((-1382522817 + 2147483647) >> var_7)) : (var_6 & var_5)))));
    var_20 += ((((((var_11 >> (((((-9223372036854775807 - 1) - -9223372036854775781)) + 30))))) ^ (var_0 ^ 4160144854))));
    #pragma endscop
}
