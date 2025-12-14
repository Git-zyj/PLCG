/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= ((min(-var_6, (((var_13 ? var_3 : var_5))))));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_21 = (min(var_21, ((((min((!-106), (!1809829498))) ? ((((arr_1 [0]) ? 4294967295 : var_8))) : (max(1758090654, (arr_1 [2]))))))));
        var_22 = ((-(min((max(192, (arr_0 [i_0]))), (max(97, 16777208))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        for (int i_2 = 4; i_2 < 21;i_2 += 1)
        {
            {
                var_23 ^= min(((min((!18446744073709551615), -1))), ((0 ? (arr_6 [i_1]) : ((min((arr_6 [i_2]), (arr_4 [i_1] [9] [i_2])))))));
                var_24 = ((-(2248388248311918337 ^ var_16)));
                var_25 += ((((~(min(var_16, var_19)))) - (arr_5 [i_2] [0] [i_2])));
            }
        }
    }
    var_26 = var_2;
    #pragma endscop
}
