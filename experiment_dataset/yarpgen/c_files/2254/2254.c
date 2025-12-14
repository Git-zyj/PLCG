/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    var_14 ^= (~var_2);
    var_15 = var_11;

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_16 = (((((-(arr_0 [i_0 + 3])))) / 16630595130495681807));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_17 -= (((arr_1 [i_0]) == (((((arr_3 [i_0 - 2] [i_0 - 2] [i_0 + 2]) <= (~var_8)))))));
                    var_18 = 16630595130495681801;
                }
            }
        }
    }
    for (int i_3 = 1; i_3 < 11;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_19 = (arr_8 [i_3] [i_3] [i_3]);
            var_20 ^= (((((~(arr_9 [i_3 - 1])))) ? (arr_8 [i_3] [i_4] [i_3]) : 15732));
        }
        var_21 = -15733;
    }
    #pragma endscop
}
