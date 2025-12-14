/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= ((min((157 / var_9), var_1)) * var_19);
    var_21 = (min(255, -1));
    var_22 |= 86;
    var_23 = ((var_13 | (min(((max(var_15, var_15))), (max(var_16, var_19))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [15] &= (((((var_1 * var_8) * (var_3 / var_4))) * (arr_6 [2] [3] [i_2])));
                    arr_9 [i_0] [i_1] = ((((min(141, var_2))) ? (((arr_4 [i_2] [i_2 + 1]) ? (arr_4 [19] [i_2 - 1]) : (arr_4 [17] [i_2 - 3]))) : ((min((arr_2 [i_2 - 2]), (arr_2 [i_2 - 3]))))));
                    var_24 = (((-35 + 9223372036854775807) >> ((((9 ? (1 ^ 2070058989) : 2224908290)) - 2070058928))));
                }
            }
        }
    }
    #pragma endscop
}
