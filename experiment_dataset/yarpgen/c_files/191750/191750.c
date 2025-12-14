/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    var_14 *= (min((-19343 > -29306), (max(1, 19345))));
                    arr_8 [i_0 - 2] [i_0] [i_0] = ((~((21565 ? (((arr_4 [i_0 - 3]) ? -19328 : var_0)) : ((~(arr_4 [i_0])))))));
                    arr_9 [i_0] [i_1 - 1] [i_2] = ((-19343 ? 7355007602211828471 : 0));
                    arr_10 [i_0] [i_2] = var_0;

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            arr_18 [i_2] [1] [i_2] [i_0] [i_4] [14] [i_2] = ((arr_17 [i_0] [i_1 + 1] [i_1 + 1] [i_3] [i_4]) / (32632 * 31744));
                            var_15 += ((((max((arr_5 [i_2] [i_2 + 3] [i_2 + 2] [i_2 + 3]), var_0))) ? ((29306 ? var_7 : 19343)) : (((arr_14 [i_1] [i_4] [i_4] [i_4] [i_4 + 1]) ^ (arr_14 [i_3] [8] [8] [0] [i_4 - 1])))));
                            arr_19 [16] [i_0] [i_2 - 3] [1] [i_0] = (((((41984296 > (arr_12 [i_0] [i_1 + 4] [0] [5] [i_2 + 1] [5])))) | (arr_16 [i_0] [i_1] [i_0] [i_2] [5] [i_1])));
                            var_16 = (var_3 ^ var_6);
                            var_17 ^= -29293;
                        }
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            arr_22 [i_0] [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_3] [i_5] = 14336;
                            var_18 = 29293;
                        }
                        var_19 = ((0 ? (((32904 < (arr_17 [i_2 - 1] [2] [i_2 + 1] [i_3] [2])))) : -22744));
                        arr_23 [i_0] [i_1] [19] = ((-64 ? (32904 - var_8) : (((arr_1 [i_2 - 2] [i_2 - 2]) ? (arr_1 [i_2 - 1] [16]) : var_0))));
                        var_20 = (min(var_20, ((max(((((0 ? 0 : (arr_12 [20] [2] [20] [20] [i_3] [i_3]))) / -31744)), var_13)))));
                        arr_24 [i_0] [i_2 + 1] [i_1] [i_1 + 4] [i_0] = (((((min(4252983000, (arr_15 [3] [3]))) == 29306)) ? 41984298 : 32640));
                    }
                    for (int i_6 = 3; i_6 < 21;i_6 += 1)
                    {
                        var_21 = (((((~59079) + 2147483647)) << (max(((253 ? -31744 : 1)), var_9))));
                        var_22 = ((+(((arr_26 [20] [i_0] [i_2] [10]) & (min((arr_21 [i_0] [i_1] [i_1 + 1] [2] [i_2] [2]), 1023))))));
                        var_23 += var_3;
                        arr_28 [i_0] [i_0] [i_2] [1] = (min((((((min(var_12, 64513))) == (~31744)))), (arr_27 [i_0 - 1])));
                    }
                    for (int i_7 = 1; i_7 < 21;i_7 += 1)
                    {
                        var_24 = (((min(1, (max(64512, 2660623198)))) != -31745));
                        var_25 *= 64513;
                    }
                }
            }
        }
    }
    var_26 |= (4252983000 + 0);
    var_27 = (min(var_27, var_10));
    #pragma endscop
}
