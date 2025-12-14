/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((var_11 ? (9223372036854775807 - var_8) : (var_5 || var_11))) ^ ((((var_3 < (var_8 == var_13)))))));
    var_16 = (((-1987682450 % 1987682453) - ((((var_10 - var_6) < (1987682459 != var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = ((((((4979 ? var_0 : 85)))) || (-1987682432 && -571941471)));
                var_17 *= ((((((var_13 ^ 140703128616960) | (((var_4 ^ (arr_4 [i_0] [i_0]))))))) || (((var_8 ^ (170 > 1987682449))))));
            }
        }
    }
    #pragma endscop
}
