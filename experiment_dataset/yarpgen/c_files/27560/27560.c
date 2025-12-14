/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((min((max(((var_4 ? var_6 : 18446744073709551615)), var_7)), ((((!77) ? (!0) : ((7 ? var_13 : var_11))))))))));
    var_19 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0 + 2] [16] [i_0] &= (((1892191705733655379 ? 765713292 : (((arr_6 [i_0] [i_0 - 1] [i_0]) ^ var_3)))) >> (var_3 - 343024540));
                    var_20 |= (max(var_10, (((arr_4 [i_0 - 2] [i_2]) ? (arr_0 [4]) : 0))));
                }
            }
        }
    }
    #pragma endscop
}
