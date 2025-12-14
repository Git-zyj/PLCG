/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_11 = ((((min((arr_5 [i_0] [i_0] [i_0]), (arr_0 [i_0])))) + (max(((min(var_4, var_2))), (min((arr_5 [i_0] [i_1] [i_1]), -902888642))))));
                var_12 *= max(((-((max((arr_1 [i_1]), (arr_1 [i_1])))))), ((((max((arr_1 [i_0]), var_0))) ? (arr_0 [i_0]) : ((var_2 ? var_0 : (arr_5 [1] [i_1] [i_1]))))));
                var_13 = (max((((((max(var_5, (arr_3 [9] [5])))) < (arr_1 [i_0])))), ((-(arr_4 [i_0])))));
                var_14 *= (min((arr_4 [i_0]), (((((((arr_1 [9]) ? var_3 : (arr_1 [i_1]))) + 2147483647)) << (((min((arr_2 [i_0] [i_0]), 221)) - 221))))));
                var_15 *= ((min((~26), (((-319128094612723342 + 9223372036854775807) >> var_0)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                var_16 = (max(var_16, var_10));
                arr_13 [i_2] [i_3] = (arr_9 [7]);
            }
        }
    }
    var_17 = ((7 + ((((230 ? 1 : var_3)) + (var_10 - 221)))));
    var_18 ^= var_0;
    #pragma endscop
}
