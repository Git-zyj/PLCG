/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = var_6;
                var_14 = ((((((arr_4 [i_0 - 2]) >= (min(var_0, (arr_2 [i_1] [i_0])))))) > (-7102220234555240085 && 1)));
                var_15 = 1;
            }
        }
    }
    var_16 = var_6;
    var_17 ^= ((((1630695940 ? -911119484 : 1004532596))) && (((~var_9) >= var_8)));
    var_18 = (((((~(~var_1)))) ? (((min(17592186044412, var_0)))) : (min((var_1 > var_7), (max(4190599075906381472, var_4))))));
    var_19 = (var_3 ? (var_6 / var_6) : -7882174793915339372);
    #pragma endscop
}
