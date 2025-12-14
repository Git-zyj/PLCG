/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((127 + var_8) ? (((-((118 ? -107 : -116))))) : (var_6 / -3753105612873061383)));
        var_11 += (((var_7 < 25799) ? 0 : (((-623624942 < ((24577 ? 524032 : var_0)))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_12 = ((var_7 ? var_9 : 24562));
        var_13 &= 2790405182;
        arr_5 [13] [i_1 - 1] = -var_3;
    }
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        var_14 = (((!1) ? (127 ^ -127) : var_5));
        var_15 = var_1;
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {
        var_16 = 2790405182;
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    {
                        var_17 = (var_7 ^ 1);
                        arr_19 [i_3 + 1] [i_5] [i_3] [i_3] [i_3] = (~var_4);

                        for (int i_7 = 4; i_7 < 10;i_7 += 1)
                        {
                            var_18 = (min(var_18, -1923617126));
                            var_19 = 2047;
                            var_20 += var_1;
                            var_21 *= ((((var_9 ? 38856 : var_5)) + (388953451 - 205)));
                        }
                        var_22 -= ((~(var_2 | 524032)));
                    }
                }
            }
        }
    }
    var_23 -= ((~((-572479856 ? 388953442 : ((3910744498 ? 5 : var_5))))));
    #pragma endscop
}
