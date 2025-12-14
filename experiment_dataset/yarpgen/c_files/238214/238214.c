/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += var_2;
    var_14 = (min(var_14, (((((((max(var_6, 0))) && -3740)) ? (((((31 ? 247 : 3446475555))) & (11246255258942453576 / 1256356203))) : var_10)))));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_15 = (!-6981030550404135978);
                        var_16 = (min(var_16, 2161727821137838080));

                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            var_17 = (var_11 & (((var_1 && (arr_4 [i_0])))));
                            var_18 = ((~1) * (((1256356203 > (arr_2 [i_0] [i_0 - 4])))));
                            var_19 = var_11;
                            var_20 = (34359737856 << 0);
                        }
                    }
                }
            }
        }
        var_21 -= -4294967295;
        arr_14 [i_0] = var_1;
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_22 = (arr_15 [i_5]);
        var_23 = (max((arr_16 [i_5]), ((221953521 ? var_11 : (arr_16 [i_5])))));
    }
    for (int i_6 = 2; i_6 < 17;i_6 += 1)
    {
        var_24 ^= ((71 - (((((arr_19 [i_6]) ? 9223372036854775802 : var_9)) - (((max(0, var_7))))))));
        var_25 = var_0;
    }
    #pragma endscop
}
