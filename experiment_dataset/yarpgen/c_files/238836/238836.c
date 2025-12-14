/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = max((1059221177 ^ 0), ((((~var_0) ? var_5 : (min(9223372036854775807, var_12))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, ((max(3926488603993719230, 583054200)))));
                    arr_10 [i_2] [i_1] [i_1] = (arr_0 [i_0]);
                }
            }
        }
        var_17 = ((((((9451982339571801392 | -633814620) ? (~1716934996) : (arr_4 [i_0] [i_0] [i_0])))) || ((max((-551230931 % var_0), 8192)))));

        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_18 = arr_7 [i_0] [i_0];
            var_19 = (max(((52166 ? (arr_5 [i_3] [i_3] [i_0]) : (((4294967295 ? 52176 : 511))))), (((arr_9 [i_3] [i_0] [i_0] [i_0]) | (max((arr_5 [i_3] [i_3] [i_0]), (-9223372036854775807 - 1)))))));
            var_20 = (max(var_20, 52181));
        }
    }
    #pragma endscop
}
