/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= 67;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = 4460;
        var_15 += ((126 % (!0)));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_16 = ((-((((((96 ? -32753 : -125)) + 2147483647)) >> (16777215 - 16777203)))));
        arr_6 [i_1] = ((-(32054 & 20950)));
        var_17 *= ((((max(-1, 255))) - (253 % 8191)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = (~-2441557289727236826);
        var_18 = (255 - -32051);
        arr_10 [i_2] = (4294967283 <= 16383);
    }
    /* LoopNest 3 */
    for (int i_3 = 3; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        var_19 = (((~6291456) >> ((((-22622 ? 127 : 16377)) - 117))));
                        var_20 += (max((((16395 ? 2947816344 : 63))), (((-2105235883 >= -6) & (min(1, 11))))));
                        var_21 = ((!(((2836893094 * (max(4069286632, 4294967285)))))));
                    }
                    for (int i_7 = 2; i_7 < 20;i_7 += 1)
                    {
                        var_22 = (max(var_22, ((((min((141 / 6), (-9223372036854775806 <= 6))) >> (((((((24 ? -5 : 50))) ? ((max(65535, -1))) : 65516)) - 65509)))))));
                        arr_25 [i_3 - 3] [20] [15] [i_4] = ((-14051 || 26) + 31);
                    }
                    var_23 = (max(var_23, (min((min(69, 4294967289)), (((66 ? 32753 : 40)))))));
                    arr_26 [i_4] = ((((((min(-11, 274877841408)) <= 244))) - (((((32057 ? 16777193 : 4293918720))) ? (-1 % 109) : (116 <= 9223372036854775796)))));
                    arr_27 [i_3] [i_4] [i_5] = min((-1 + -14048), 25090);
                }
            }
        }
    }
    #pragma endscop
}
