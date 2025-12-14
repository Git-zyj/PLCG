/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = ((max((~6225902071197266062), var_9)) | ((((var_6 | var_7) ? 95 : 118))));
        var_12 = (!18446744073709551615);
        arr_3 [i_0] = -var_0;
        var_13 = (max(((var_1 ? var_5 : var_4)), (var_1 && var_6)));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_14 *= -var_9;
            var_15 -= (((-126 + 2147483647) >> (var_11 + 64)));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
            {
                arr_11 [i_0] [i_0] [i_3] = (!var_10);
                arr_12 [i_0] [i_2] [i_3] &= (-116 ? var_0 : 3029382355854361639);
            }
            for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
            {
                var_16 ^= -107;
                var_17 = var_5;
            }
            arr_16 [i_0] [i_2] [i_0] = var_6;
            arr_17 [i_0] = ((var_1 ? (((var_9 ? var_2 : -104))) : var_7));
        }
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {

        for (int i_6 = 4; i_6 < 15;i_6 += 1)
        {

            for (int i_7 = 1; i_7 < 13;i_7 += 1) /* same iter space */
            {
                var_18 = (max(var_18, (((22 ? (max(var_9, -1)) : 103)))));
                var_19 += 16205695128619878538;
                var_20 ^= ((((13231836806722944895 ? 8051962257532579574 : 2910744203499110299)) << (((~26) + 69))));
            }
            for (int i_8 = 1; i_8 < 13;i_8 += 1) /* same iter space */
            {
                arr_29 [i_5] [i_6] [i_6] [i_5] = max(-var_9, (max(108, ((-109 ? 2241048945089673103 : -105)))));
                var_21 = (max(var_21, (((-((-127 ? 8 : -112)))))));
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                arr_32 [i_5] [2] [i_6] = var_8;
                arr_33 [i_6] = 124;
            }
            var_22 &= var_1;
            var_23 = ((~((var_0 ? var_0 : (((-127 - 1) ? 117 : var_0))))));
        }
        var_24 += (~(max(var_11, 2047105918949500429)));
    }
    var_25 = var_9;
    var_26 = (max(var_26, var_8));
    var_27 = (max((!var_4), (var_4 * var_9)));
    #pragma endscop
}
