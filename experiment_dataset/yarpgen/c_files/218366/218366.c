/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= 27311;
    var_12 = ((1339314198 ^ ((-123 ? 1339314198 : 18446744073709551615))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_13 = (((((((~(arr_2 [i_0])))) ? (-16384 >= 50) : 43)) ^ (arr_0 [i_0] [i_0])));
        var_14 *= ((((4294967283 || (arr_2 [i_0]))) || 1339314198));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 = (((arr_3 [i_2] [i_1] [i_0]) ? (arr_3 [7] [7] [i_2]) : (((arr_8 [i_1] [i_1] [i_2]) * 67108863))));
                    arr_9 [i_0] [i_0] [i_0] = (((18446744073709551615 ^ 33) ? (-38 ^ -1) : ((((7222972269105140855 - 26) >= 1)))));
                    arr_10 [i_0] [i_1] = (arr_1 [i_0] [i_1]);
                }
            }
        }
        var_16 = (((((((arr_1 [7] [7]) << (((var_3 + 1791535791) - 2))))) ? -14932 : ((((arr_4 [i_0]) > var_10))))));
    }
    for (int i_3 = 1; i_3 < 14;i_3 += 1)
    {
        var_17 = var_5;
        arr_14 [14] = (-49 - 2);
        var_18 = 1;
    }
    #pragma endscop
}
