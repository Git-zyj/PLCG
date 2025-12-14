/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                var_19 ^= (((max((arr_1 [i_1 + 2]), (arr_1 [i_1 + 2])))) ? (0 * 18446744073709551615) : (((arr_1 [i_1 + 2]) ? 17699324217974289352 : 5404720689989868707)));
                var_20 = (min(var_20, (((((~(arr_4 [14] [0]))) != 18446744073709551615)))));
                arr_5 [16] [16] [i_1] = ((-(281472829227008 && 18446744073709551615)));
                var_21 = 18446744073709551615;
                var_22 = var_10;
            }
        }
    }
    #pragma endscop
}
