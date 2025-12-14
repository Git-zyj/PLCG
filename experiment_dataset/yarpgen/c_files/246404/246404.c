/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_6));
    var_17 = var_5;
    var_18 = var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = (max(var_19, ((((arr_0 [0]) + 1)))));

        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                var_20 |= ((549639444308862518 ? (((var_7 ? 3023173937 : var_3))) : ((549639444308862518 ? 1271793358 : 2604141837473597041))));
                arr_9 [0] [9] [i_1] [i_0] = (((arr_1 [i_1 - 2]) ? var_4 : 1));
                arr_10 [i_0] [i_0] [1] [5] = ((3023173937 > (~8095326736910388789)));
                var_21 = (max(var_21, (((~(~66))))));
            }
            var_22 ^= ((var_3 ? var_3 : (arr_4 [i_1 - 1] [i_1 - 4])));
        }
        for (int i_3 = 0; i_3 < 0;i_3 += 1) /* same iter space */
        {
            var_23 |= (((var_13 / 14736532560233868167) ? ((~(arr_7 [3] [2] [i_0] [i_0]))) : var_1));
            arr_13 [i_0] [i_3] = (var_5 | 19);
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 8;i_5 += 1)
                {
                    {
                        arr_20 [i_0] [i_0] [i_3] [i_4] [0] = (((var_11 ^ 1) ? ((57422 ? var_10 : var_3)) : (~var_9)));

                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            arr_23 [0] [1] [3] [1] [i_4] [i_5] [i_6] = ((-1 ? var_9 : (arr_7 [3] [i_3 + 1] [3] [i_5 + 1])));
                            arr_24 [i_0] [i_0] [3] [i_6] = (((-83 + 2147483647) >> (127 - 123)));
                        }
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            var_24 ^= (((((var_14 - (arr_12 [0] [i_3 + 1])))) / 1271793359));
                            var_25 = 59900;
                        }
                    }
                }
            }
            arr_27 [i_0] = var_7;
        }
        for (int i_8 = 0; i_8 < 0;i_8 += 1) /* same iter space */
        {
            var_26 *= (((var_1 > 65535) != (~57422)));
            var_27 ^= (((((128 ? 0 : var_1))) % var_8));
        }
        for (int i_9 = 0; i_9 < 0;i_9 += 1) /* same iter space */
        {
            arr_34 [1] [i_9] [1] = ((var_3 ? (((var_7 + 9223372036854775807) << (1379115391 - 1379115391))) : (arr_12 [i_9 + 1] [i_9 + 1])));
            var_28 = (arr_14 [i_9]);
        }
    }
    #pragma endscop
}
