/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = (max(var_19, ((((((~(max(-164157546, 1)))) + 2147483647)) >> (((((arr_0 [i_1 - 1]) - var_15)) - 2983673292))))));
                var_20 = (var_0 ? (arr_0 [i_0]) : 3686910433);
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_21 = ((-(arr_6 [i_2])));
            var_22 = (arr_1 [i_2 - 1]);
            var_23 -= (((arr_7 [i_2 + 1]) % 8776174));
            arr_10 [i_2] [i_3] [i_3] = (((~608056858) || (arr_8 [i_2] [i_2 + 2])));
            var_24 = 27;
        }
        var_25 = 164157539;
    }
    #pragma endscop
}
