/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~(min(((3278956568 ? 65535 : var_12)), var_8))));
    var_14 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 -= ((min((((1 ? -32744 : 236)), (arr_3 [i_0])))));
                var_16 |= (min((((1 - 1) ? (arr_1 [i_0] [i_0]) : ((max((arr_3 [i_0]), 1854747885))))), ((min(var_6, ((((arr_1 [i_1] [i_1]) >= (arr_1 [i_0] [i_0])))))))));
                var_17 = (min((min(var_6, (min(7601, 4093359607719931725)))), ((+(min((arr_2 [21]), 4073446016))))));
                var_18 = (((((arr_2 [i_1]) != ((218 ? (arr_0 [i_1]) : var_2)))) ? (((-(arr_0 [i_1])))) : (arr_2 [i_1])));
            }
        }
    }
    var_19 = (min((var_4 / -131), 155));
    var_20 ^= (max((((((var_3 ? 1 : 175))) ? var_1 : var_8)), ((min(18, 43007)))));
    #pragma endscop
}
