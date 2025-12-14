/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_19 ^= ((arr_0 [i_0 - 1]) ? ((~(~1002445330))) : (var_7 ^ 21));
                var_20 = (max(var_20, var_17));
                arr_6 [i_0 - 2] [i_1] = (~(((arr_2 [i_0 - 1] [i_1]) | var_3)));
            }
        }
    }
    var_21 = var_15;
    var_22 &= ((var_14 > (-var_9 < var_16)));

    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_9 [i_2] &= (((((+((((-127 - 1) == (arr_8 [i_2] [i_2]))))))) ^ ((-(((arr_8 [i_2] [i_2]) ? (arr_8 [i_2] [i_2]) : 12676775926795305491))))));
        arr_10 [i_2] [i_2] = (-127 - 1);
    }
    #pragma endscop
}
