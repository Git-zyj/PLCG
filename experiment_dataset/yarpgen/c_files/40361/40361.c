/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = max((~-76), 1);

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = (+-0);
        var_21 = (max(-76, -30081));
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = var_16;

        for (int i_2 = 3; i_2 < 16;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    {
                        arr_17 [i_2] [i_3] [i_1] [i_2] [i_1] = ((!(((-12 ? var_15 : (!3485393450))))));
                        arr_18 [i_1] [i_1] [i_1] [i_4] = -var_8;
                        var_22 = (min(var_22, -27534718));
                    }
                }
            }
            arr_19 [i_1] = ((min(70, 0)));
            arr_20 [i_1] = 50;
        }
        for (int i_5 = 2; i_5 < 15;i_5 += 1)
        {
            arr_23 [i_1] [i_5 + 1] = 0;
            arr_24 [i_1] [2] |= (max(((-8062980868324417476 ? -2 : 70)), var_5));
            arr_25 [i_1] = -1;
        }
        var_23 = (((~((95 ? 16 : 914041405)))));
    }
    for (int i_6 = 2; i_6 < 16;i_6 += 1) /* same iter space */
    {
        arr_30 [i_6] = (!43067);
        arr_31 [i_6] = (!1059190404);

        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            arr_34 [12] [12] |= 914041405;
            var_24 = var_2;
        }
        /* vectorizable */
        for (int i_8 = 2; i_8 < 17;i_8 += 1)
        {
            arr_37 [i_6] [i_8] [i_6] = -var_15;
            var_25 = ((~(-9223372036854775807 - 1)));
        }
    }
    #pragma endscop
}
