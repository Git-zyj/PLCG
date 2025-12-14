/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_13 ^ var_1);

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_19 = ((43 ? -17269 : 26773));
        var_20 += 32;
        var_21 = (((((111 | 10318660003475024115) | -112)) * -582899932));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_22 = (((((-19 ? 112 : (arr_3 [i_1] [i_1])))) ? (arr_6 [i_1] [i_1]) : 4019233138));
        var_23 = (min(var_23, -111));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    {
                        arr_16 [i_4] = (arr_11 [i_4] [15]);
                        arr_17 [i_1] [i_2] [i_4] [i_4] = ((-31140 + 2147483647) << ((((-31140 ? 43 : 93)) - 43)));
                        var_24 = (max(var_24, ((((arr_10 [i_1]) ? (((-3503732252776294271 ? 582899932 : 45))) : ((248 ? 3072 : 1378778417)))))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 17;i_6 += 1)
        {
            {
                arr_24 [i_6] [i_5] [i_5] = (arr_2 [i_5]);
                arr_25 [i_6] [i_5] [i_6] = (arr_20 [i_5] [14]);
            }
        }
    }
    #pragma endscop
}
