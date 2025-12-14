/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            var_12 -= (((((var_7 ? 9223372036854775807 : (arr_0 [i_0] [i_1 + 1])))) ? ((((arr_2 [i_1]) != (arr_0 [0] [i_1 + 1])))) : ((-(arr_0 [i_0] [i_1 + 1])))));
            var_13 = (((((max(var_10, (arr_0 [i_1 + 1] [i_1 + 1]))))) * var_4));
        }
        arr_5 [i_0] &= (max(var_8, (((((var_3 ? var_11 : var_8))) ? (((((arr_0 [i_0] [i_0]) && var_1)))) : ((-4147007344706594211 ? var_7 : 729343274))))));
    }
    var_14 ^= (1 | -886855469);
    #pragma endscop
}
