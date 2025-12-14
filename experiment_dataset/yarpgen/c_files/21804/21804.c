/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_9;
    var_16 = (max(((max((min(var_4, 487388468)), 549755813887))), (var_6 ^ 1)));

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_3 [21] [i_0] = (((!-1672345114) || ((8343203725987972786 || (arr_2 [i_0])))));
        arr_4 [i_0] = (min(89, (arr_2 [i_0])));
        var_17 = (max(var_17, 2280721943130226657));

        for (int i_1 = 1; i_1 < 22;i_1 += 1) /* same iter space */
        {
            var_18 = (min(var_18, 1));
            arr_9 [i_0] = (((((arr_0 [i_0] [i_0]) && (arr_7 [i_0]))) ? ((-8343203725987972769 ? var_11 : var_5)) : var_11));
            var_19 = 1;
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 22;i_2 += 1) /* same iter space */
        {
            var_20 -= (-1780295110 / var_10);
            var_21 = 18446743523953737718;
            var_22 = var_2;
        }
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
    {
        var_23 = ((((arr_11 [i_3] [i_3] [i_3]) ? ((-8343203725987972787 ? 1 : -7621162628172265601)) : -11245)));

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            arr_16 [i_3] [i_3] = -16112;
            var_24 = 1;
            arr_17 [i_3] |= var_4;
        }
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
    {
        arr_20 [i_5] = (arr_10 [i_5]);
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 11;i_7 += 1)
            {
                {
                    var_25 -= 0;
                    var_26 = (((((max(var_9, 143)))) / (min((arr_11 [i_7 - 1] [i_6] [i_7 - 1]), (arr_11 [i_7 - 1] [i_6] [0])))));
                }
            }
        }
        var_27 = (((arr_5 [i_5]) ? 16215787874200243479 : (max((arr_5 [i_5]), (arr_5 [i_5])))));
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
    {
        arr_30 [i_8] = 476365501;
        var_28 &= (arr_2 [i_8]);
        var_29 = ((min((arr_14 [9] [8] [i_8]), (arr_25 [i_8] [i_8] [i_8] [i_8]))));
    }
    var_30 = ((((min(var_8, var_6))) + 11864174761096482726));
    #pragma endscop
}
