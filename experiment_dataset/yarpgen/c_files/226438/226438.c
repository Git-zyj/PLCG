/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_13 = (((arr_0 [i_1]) - ((-var_5 ? ((var_8 ? 166 : 9223372036854775807)) : (((169 ? 24 : 24)))))));
                arr_6 [i_0] [6] = ((((arr_0 [i_0]) >> (((arr_0 [i_0]) - 14335)))));
                arr_7 [i_0] [i_0] [i_0] |= ((((224 | (arr_1 [8]))) <= var_11));
                var_14 = (+-231);
            }
        }
    }
    var_15 ^= ((var_0 ? var_6 : (((~var_9) ? (!1) : ((18 ? var_0 : var_1))))));
    var_16 = var_2;
    #pragma endscop
}
