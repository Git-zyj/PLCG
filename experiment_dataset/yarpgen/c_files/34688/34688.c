/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = 42;
        var_19 = ((((var_6 ? (var_1 < var_8) : (arr_0 [i_0]))) + (min(((~(arr_1 [i_0] [i_0]))), (-32767 - 1)))));
        var_20 *= var_17;
        arr_3 [i_0] [i_0] = ((((((var_2 ? (arr_1 [i_0] [i_0]) : 262143)) < (((min(42, 1)))))) ? 42 : (-43 / var_7)));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = 1;
        var_21 = (((max(((14770359382559331821 ? var_3 : var_3)), ((min((arr_5 [i_1]), var_0))))) / (min((!-41), -262143))));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    {
                        var_22 = (max(var_22, 3102672278081706052));
                        var_23 = (~42);
                    }
                }
            }
        }
        arr_18 [i_2] = var_7;
        var_24 = min((~-262144), (~var_13));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
    {
        var_25 = (~var_2);
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 0;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                {
                    arr_27 [i_6] [i_6] [i_6] [i_8] |= (-43 != 164);
                    var_26 = (arr_9 [i_6] [i_6]);
                }
            }
        }
    }

    /* vectorizable */
    for (int i_9 = 1; i_9 < 14;i_9 += 1)
    {
        arr_30 [i_9] = ((((arr_17 [i_9 + 1] [i_9] [18]) % var_16)));
        arr_31 [i_9] [i_9 + 3] = ((~(((-262166 + 9223372036854775807) >> (((arr_8 [i_9] [11]) + 7389872252957785934))))));
        var_27 = (max(var_27, (arr_29 [i_9] [i_9 - 1])));
        var_28 *= (((arr_28 [i_9 - 1]) ? (arr_28 [i_9 + 1]) : var_9));
    }
    var_29 = var_17;
    var_30 = (var_9 ? (~var_17) : -262143);
    #pragma endscop
}
