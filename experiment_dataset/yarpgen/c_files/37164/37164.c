/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((((var_6 ? var_2 : var_14))) ? ((65535 ? 1017336705464095131 : 1)) : 0))) ? (((((var_1 ? var_6 : var_1))) ? ((var_14 ? 4294967271 : var_16)) : (-1017336705464095118 <= 54428))) : var_7));
    var_18 = var_15;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((~(arr_0 [i_0])));
        var_19 ^= var_10;
        var_20 = (max((arr_0 [i_0]), (((((!(arr_1 [i_0]))))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    var_21 = (max(var_21, (arr_5 [i_1])));
                    arr_12 [i_1 - 2] [i_1 - 2] [i_3] = (arr_3 [i_1] [i_2]);
                }
            }
        }
    }
    var_22 -= ((((((min(255, var_16))) ? (min(18446744073709551608, var_3)) : var_13)) / (-2147483647 - 1)));
    #pragma endscop
}
