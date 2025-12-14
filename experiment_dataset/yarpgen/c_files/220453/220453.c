/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= (var_0 ? (94 * 8) : var_2);
    var_21 = 8;

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_22 = 6401109001407016089;
        arr_3 [i_0] = 1570966996;
        arr_4 [i_0] = ((-1432678750 ? 18446744073709551615 : 20));
        var_23 += (((127 / -1432678757) - (arr_2 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((~((0 ? ((18446744073709551615 ? 7875638145293865348 : 1413941169)) : 15647172576366095880))));
        arr_9 [2] = -95;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        arr_19 [i_3] = (arr_16 [i_1] [i_1] [20] [i_1] [i_1]);
                        var_24 = (max(var_24, (((1432678751 > (min(-1432678750, (-127 - 1))))))));
                    }
                }
            }
        }
        arr_20 [i_1] = (arr_16 [i_1] [i_1] [i_1] [i_1] [8]);
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
    {
        var_25 = (min(var_25, (12167670132029662317 && -1297794663)));
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 22;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    {
                        var_26 = (max((min(((4660 ? (arr_14 [i_5] [i_5] [i_5]) : 20945)), ((var_18 ? (arr_16 [i_8] [i_5] [i_5] [i_5] [i_5]) : var_11)))), (arr_2 [i_6 + 2] [i_7])));
                        var_27 *= (((2724000304 >> (var_2 - 1709754202))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 24;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            {
                arr_36 [i_10] = 18446744073709551615;
                var_28 = ((var_10 + (-8456972586677076769 - 120)));
                arr_37 [i_10] = (((((((arr_34 [i_10] [i_9]) ^ var_18))) ? ((371856275 ? 3712814126558820413 : 16206)) : (((max(47543, 33)))))));
                arr_38 [12] |= -2612069413527177064;
            }
        }
    }
    #pragma endscop
}
