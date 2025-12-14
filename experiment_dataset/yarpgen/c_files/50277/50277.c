/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_11 ? ((var_5 * (var_6 > 18289))) : var_15));
    var_21 = ((var_0 ^ ((var_7 ? ((-18065 ? var_2 : 4)) : var_11))));
    var_22 = var_15;
    var_23 = var_3;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_24 = (min(var_24, (arr_0 [6] [i_0 + 1])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                {
                    var_25 += ((((min(0, 56396))) ? (!var_10) : ((((max(var_4, var_13))) ? ((min((arr_6 [i_0 + 1] [i_1] [i_2]), 9140))) : ((var_12 ? (arr_1 [i_2] [i_0]) : 61766))))));
                    arr_8 [i_2] [i_0] [i_0] [i_0] = (((arr_5 [i_0 + 1] [i_2 - 1] [i_2]) ? (((105 == (65531 + var_10)))) : (max(((10 ? var_8 : 186)), (arr_0 [i_0] [i_0])))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_26 = (((((-28976 ? var_17 : (arr_11 [i_3] [i_3])))) ? var_19 : (((var_10 ^ (((!(arr_10 [i_3])))))))));
        var_27 ^= ((1 ? 4037015159 : 52));
    }
    #pragma endscop
}
