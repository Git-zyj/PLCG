/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_0;
    var_19 = ((18446744073709551615 ? 18446744073709551592 : (((~((0 ? 2147483647 : 9223372036854775807)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    var_20 = (((arr_3 [i_2] [i_0]) ? ((var_7 ? ((max(0, 0))) : ((var_5 ? (arr_0 [i_0]) : (arr_4 [i_0] [i_2]))))) : (((((((arr_3 [i_0] [i_0]) ? (arr_4 [i_1] [0]) : (arr_1 [i_0])))) != var_2)))));
                    var_21 *= ((((min(var_6, (arr_6 [i_2 - 2] [i_2 - 1] [i_2 - 2] [i_2 + 2])))) ? ((((var_15 ? var_10 : var_4)) + (arr_6 [i_2] [i_1] [12] [i_0]))) : (max((~var_13), ((max(60, 75)))))));
                }
            }
        }
    }
    #pragma endscop
}
