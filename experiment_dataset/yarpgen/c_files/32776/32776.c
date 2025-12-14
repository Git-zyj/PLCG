/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_19 = (((((((22077 ? var_3 : var_12))) ? (min(var_11, 22074)) : var_2)) | 43446));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        var_20 += ((((var_11 ? var_1 : var_12)) % (43478 && -1)));
                        var_21 *= ((var_1 ? -43460 : var_12));
                    }
                    for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_4 - 1] [i_2] [i_2] [i_2] [i_0] = ((((min(var_7, 22069))) ? (max(var_11, 43431)) : 948076817));
                        var_22 = (var_15 && 160);
                    }
                    arr_14 [i_0] [i_2] [i_2] [i_2] = (~536870911);
                    var_23 = var_17;
                }
            }
        }
    }
    var_24 = (max(var_24, var_1));
    var_25 = ((10627396270778511450 ? (255 % 43478) : (~var_7)));
    #pragma endscop
}
