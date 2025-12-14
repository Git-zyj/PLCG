/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_14 *= ((((-((-1 ? 1 : 37985)))) - (arr_0 [i_0] [i_0])));
        var_15 = (((var_1 + (arr_0 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 ^= (arr_6 [i_0] [i_0]);
                    var_17 = (((((((min((arr_6 [i_0] [i_0]), var_10))) ? var_2 : (-73056142 > 9223372036854775807)))) ? 9223372036854775807 : 7));
                    var_18 -= ((233 && (1091504063 ^ var_13)));
                    var_19 = ((((max((!4), 63))) ? (arr_1 [i_0] [i_0]) : 2966391136));
                }
            }
        }
        var_20 = ((-(min(var_11, (((19 * (arr_0 [i_0] [i_0]))))))));
    }
    var_21 = (min(var_0, var_3));
    var_22 = ((-(min(-9223372036854775807, -64))));
    #pragma endscop
}
