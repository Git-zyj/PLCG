/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_11 = ((var_0 ? (((-(arr_0 [i_0])))) : (arr_2 [i_0])));
        var_12 = (((arr_1 [i_0]) ^ 34109));
        var_13 += var_0;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    var_14 = ((~(var_3 & 31427)));
                    var_15 ^= ((((((min(1, var_4))))) % (max((arr_6 [i_1]), (arr_3 [i_1] [i_2])))));
                }
            }
        }
        var_16 ^= (min((arr_6 [i_1]), 34109));
    }
    var_17 = 3013190796;
    #pragma endscop
}
