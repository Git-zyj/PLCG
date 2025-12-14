/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((var_4 ? var_12 : (!var_1)))) ? (((((var_16 << (var_9 - 13))) == (var_11 / var_15)))) : (min(var_10, (var_13 / var_17)))));
    var_19 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_20 = (((((-1795972970 ? -1318381153 : -16384)) > (18318 != 13037))));
                    var_21 = var_3;
                    arr_8 [i_0] [i_0] = max(((~(((arr_3 [i_0]) ? var_12 : var_8)))), 244787475);
                    var_22 = (((arr_3 [i_2]) ? (((((arr_1 [i_1 - 1] [i_2 - 1]) + 2147483647)) >> (((arr_7 [i_1 + 1] [i_0]) - 11404)))) : ((((var_2 | (arr_1 [i_0] [3])))))));
                }
            }
        }
    }
    var_23 = (min(var_5, var_2));
    var_24 = ((((((var_14 ? var_13 : -122)) ^ var_1)) / ((((max(var_9, var_10))) ? var_14 : -101))));
    #pragma endscop
}
