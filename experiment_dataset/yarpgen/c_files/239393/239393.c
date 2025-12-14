/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        var_11 -= (15495 % 2147483633);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_0 - 2] [i_0 - 2] [i_3] = (arr_7 [i_0 - 2] [i_0 - 1]);

                        for (int i_4 = 2; i_4 < 24;i_4 += 1)
                        {
                            var_12 -= ((7051622274138262651 ? -2147483638 : 65535));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] = ((+(((arr_2 [i_1] [16] [i_3]) ? 7051622274138262671 : (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                            var_13 -= (arr_0 [i_2] [1]);
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_20 [1] [i_1] [i_3] [i_3] [24] = 7051622274138262651;
                            var_14 = var_2;
                            arr_21 [i_0] [i_1] [i_3] [i_3] [i_5] = (((arr_16 [i_0 - 1] [i_0] [i_0 - 1] [i_0]) ? (((arr_4 [i_0] [i_5]) ? (arr_5 [i_1] [6]) : (arr_9 [i_3]))) : (var_0 && -10282)));
                            var_15 = 11395121799571288965;
                        }
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            var_16 = (((arr_7 [i_0 - 2] [i_0 - 1]) ? -10282 : ((var_9 ? var_9 : 4294967286))));
                            var_17 -= (((11395121799571288940 / (arr_10 [i_6] [i_2] [i_1] [21]))) << (((arr_5 [i_0 + 1] [i_0 + 1]) + 29102)));
                        }
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            arr_28 [i_0] [i_0] [i_1] [i_3] [1] [i_7] [i_7] = 18;
                            var_18 = (min(var_18, 47136));
                        }
                    }
                }
            }
        }
        var_19 = (max(var_19, ((((arr_22 [i_0] [6] [i_0] [i_0 - 1] [i_0] [i_0]) * var_4)))));
        var_20 ^= (var_10 <= 31807);
    }
    var_21 &= var_4;
    var_22 = (min(var_22, var_1));
    var_23 = -2332756761458624634;
    var_24 = (((((min(1, -13805)))) != (~-1469577230)));
    #pragma endscop
}
