/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((-122 + 2147483647) >> (var_15 - 36)));

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_2 [0] [i_0] = (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_10 [i_1] = (+-122);
                    var_18 = (max(var_18, 1));
                    var_19 ^= ((1 ? 4294967295 : 1));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] [i_3] = 122;
        var_20 = (arr_12 [i_3]);
        var_21 *= (!1327974279867441255);
    }
    #pragma endscop
}
