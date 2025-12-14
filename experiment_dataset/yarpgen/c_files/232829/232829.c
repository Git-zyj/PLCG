/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((var_8 + 9223372036854775807) >> (var_8 + 4296343106371100897)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (((((!(arr_2 [i_1] [i_0]))) || var_7)));
                var_21 = (((2801186835636413533 % var_6) ? (arr_4 [i_1]) : (max(-6935913927665676579, (arr_4 [i_1])))));
                var_22 = 106;
            }
        }
    }
    var_23 = var_14;
    var_24 += ((min(6935913927665676578, (var_19 + var_2))) >= ((min((var_16 < 18446744073709551615), (min(1858909788, -1858909778))))));
    #pragma endscop
}
