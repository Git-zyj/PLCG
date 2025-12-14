/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;
    var_18 = (((max((10775162207201872345 + -8), ((min(-86, -24612))))) != var_11));
    var_19 = (max(54, (28 + 13)));
    var_20 = (!(!30));

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_21 = (((((((((32767 ? (arr_1 [i_0] [i_0]) : 1)) + 2147483647)) >> ((((min(-971, 9498))) + 977))))) ? (!251) : (arr_1 [i_0] [i_0 - 3])));
        arr_3 [i_0] [i_0 - 2] = ((var_3 != (min(((((arr_2 [i_0] [i_0]) == var_1))), var_4))));
        var_22 = (min((arr_0 [i_0 - 2]), (arr_0 [i_0 + 2])));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            var_23 -= (((arr_0 [i_0]) ? ((~(arr_0 [i_1]))) : (arr_0 [i_0 - 2])));
            var_24 = (var_15 >= var_10);
        }
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_25 &= var_0;
        arr_9 [i_2] [i_2] = (~-21875);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    var_26 = ((~((-var_15 / ((var_12 >> (var_4 - 2636753273122937005)))))));
                    var_27 = ((!(((15 << (-24615 + 24633))))));
                    var_28 = (57477 * 1);
                }
            }
        }
    }
    #pragma endscop
}
