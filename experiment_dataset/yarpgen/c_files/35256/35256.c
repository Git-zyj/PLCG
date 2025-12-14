/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_16 ? var_15 : var_5));
    var_20 = (((((var_8 + 9223372036854775807) << (var_18 - 1374345479))) == var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_21 = (((arr_3 [i_1] [i_0] [i_0]) != ((max((arr_3 [i_0] [i_1] [i_0]), (var_3 % 46634))))));
                arr_4 [i_0] = (max((arr_0 [i_0]), (201 * var_5)));
            }
        }
    }
    #pragma endscop
}
