/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (((max((var_11 && var_9), (max(-178782068, -178782075))))) ? ((var_9 ? var_3 : ((max(139964280, var_11))))) : ((max((min(var_1, var_6)), ((var_8 ? var_1 : var_1))))));
    var_14 = ((-3506934825461706180 ? var_8 : var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_15 += ((((-20 ? 9223372036854775807 : -10)) >> (((!(-9223372036854775807 - 1))))));
                var_16 |= -327934176;
                var_17 += (min((arr_2 [i_0] [i_0] [i_0]), ((var_8 / (arr_2 [i_0] [10] [i_0])))));
                arr_5 [i_1 + 1] [i_0] = ((((((arr_4 [i_1 - 2] [i_1 - 1]) <= ((-9223372036854775785 - (arr_4 [i_0] [i_0])))))) >> (((((arr_2 [i_1 + 3] [i_1 + 2] [i_1 - 2]) ? -9223372036854775785 : (arr_4 [3] [i_1 - 2]))) + 9223372036854775786))));
            }
        }
    }
    #pragma endscop
}
