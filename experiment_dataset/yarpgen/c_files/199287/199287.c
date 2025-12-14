/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= (((((1991052323 ? 17815829035383192093 : 1))) ? 4294967295 : (((((var_1 ? 232 : var_4))) ? (1 * var_4) : var_5))));
    var_12 = (((((((min(var_6, var_10)))) + 2147483647)) << (min((0 * 0), (4294967295 + 0)))));
    var_13 = (max(-1168623250, 4294967294));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 = var_5;
        var_15 -= (215 + 232);
        var_16 = (max(var_16, (((12 ? 24 : -249593723)))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_17 = ((((~((-(arr_3 [1] [1]))))) | (((112 != (((arr_0 [i_1] [i_1]) ? var_5 : 50)))))));
        var_18 = (max(1, (max(-3, 249593729))));

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                var_19 = (((max(13191556572587950654, 922161221))));
                arr_8 [i_3] [3] [5] = ((var_7 > (min(0, 1))));
            }
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                var_20 = -249593744;
                arr_11 [i_1] [4] &= (((max((arr_5 [i_1] [1] [i_4]), -249593725)) != (((0 ? 1 : var_6)))));
            }
            var_21 = (min((arr_5 [i_2] [i_2] [i_2]), (!var_1)));
            var_22 -= (max(((((13 || var_7) < (~4294967283)))), (~5976411982325706000)));
        }
        for (int i_5 = 2; i_5 < 14;i_5 += 1)
        {
            var_23 = ((((min(249593725, (arr_6 [i_1] [i_1] [i_1])))) >> ((((((11 ? -249593749 : var_0)))) - 46))));
            var_24 = (min(var_24, ((((((0 ? (arr_10 [i_5] [i_5] [i_1] [i_5]) : ((1 ? 6889259066537155430 : var_8))))) ? 11 : 12)))));
        }
    }
    var_25 = ((1 ? (-16 || 23) : (((var_8 & 0) ? (((2352767076 ? 23 : var_10))) : (max(var_8, 4294967282))))));
    #pragma endscop
}
