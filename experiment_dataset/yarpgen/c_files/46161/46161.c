/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_1] = 6;
                var_13 = ((var_12 ? ((10957117 ? var_11 : (arr_0 [9] [i_0]))) : ((((!(arr_0 [i_0] [i_0]))) ? var_7 : (max(1942109326, var_4))))));
                var_14 = max((arr_2 [i_1] [i_0]), (min(3725999361, (arr_2 [i_0 + 1] [i_0 - 1]))));
                var_15 *= var_0;
                var_16 ^= (((((((max(2352857970, var_6))) || (arr_0 [i_0 - 1] [i_0 - 2])))) != (arr_4 [1] [i_0 + 1])));
            }
        }
    }
    var_17 = var_10;
    #pragma endscop
}
