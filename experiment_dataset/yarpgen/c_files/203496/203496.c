/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((var_4 ? ((var_7 ? 8650498747123811176 : var_2)) : (((43549 ? 1 : 8476))))) & (((((var_5 ? var_6 : var_2)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_11 = (((((32377 ? (33158 / 8650498747123811169) : var_9))) ? ((+(((arr_2 [i_0] [i_1] [i_1]) ? var_2 : var_0)))) : ((var_4 + ((32377 ? 104 : 32372))))));
                var_12 &= (((arr_3 [12] [i_1]) ? ((var_9 ? (((56912 ? (arr_3 [i_0] [i_1]) : var_2))) : -6602170772365698020)) : ((((((0 ? 47555 : var_1))) ? var_7 : ((((arr_0 [i_0]) || (arr_1 [i_0] [i_0])))))))));
                var_13 = ((((arr_1 [1] [i_1]) ? -0 : (((arr_3 [i_0] [i_1]) ? var_4 : -5742932712684108084)))));
                arr_4 [i_0] [i_1] = -32395;
            }
        }
    }

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_14 *= (((-9223372036854775807 - 1) / 62550));
        var_15 = ((+(((62550 ? (arr_6 [i_2]) : (arr_5 [i_2] [i_2]))))));
        var_16 = ((((4233527488760075460 << ((((var_4 ? 92 : (arr_5 [i_2] [i_2]))) - 87))))) ? ((~((9796245326585740446 | (arr_6 [i_2]))))) : ((((var_3 ? var_6 : 0)) | 2836725667030551477)));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        arr_9 [i_3] = ((+((((~0) && (7491302662808247584 && 23518))))));
        arr_10 [i_3] = (var_5 <= var_0);
        arr_11 [i_3] = 1172503743;
    }
    #pragma endscop
}
