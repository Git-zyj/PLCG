/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= (max(-6619315487327270302, (min((max(2, -640586690906554978)), 2))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 = max(((-640586690906554968 ? 1756691210747275281 : (arr_3 [i_0] [i_0]))), ((-11849 / (arr_3 [i_0] [i_0]))));

                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        var_20 = -19706;
                        var_21 ^= ((((((~7155810883497871418) ? -640586690906554976 : 5100))) ? (((arr_3 [i_1 + 1] [i_0]) >> (var_9 + 8988206393521913266))) : var_6));
                        var_22 = (max(var_22, (((((((var_16 ? (arr_0 [i_2]) : -2616555353428415623)) ^ var_1))) ? ((var_5 ? (arr_4 [i_0] [i_1 + 1] [i_2]) : 8911)) : var_11))));
                        var_23 = (min(var_23, (arr_0 [4])));
                        var_24 = ((-640586690906554976 / 9223372036854775805) ? 5713693246637331026 : (max(-1, 68695373707166441)));
                    }
                    var_25 ^= ((((-1 ? (((arr_8 [i_0]) >> (var_11 + 8209))) : (arr_3 [i_0] [i_0]))) / ((var_4 ? (min(var_9, var_12)) : 26983))));
                    var_26 *= (~16128);
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 6;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_27 *= -1;
                                var_28 *= ((+(min((arr_10 [i_4 + 2] [i_4 + 2] [i_2] [i_4]), var_10))));
                                var_29 = var_16;
                                var_30 ^= arr_5 [i_0];
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
