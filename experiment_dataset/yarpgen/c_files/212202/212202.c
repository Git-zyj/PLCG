/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = (min(948350139, -4512925097369797601));
        var_12 = (min(var_12, (((19549 ? 19546 : -4512925097369797601)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_1] = (arr_2 [i_0]);

                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 21;i_3 += 1) /* same iter space */
                    {
                        var_13 = 12002;
                        var_14 *= ((5247338807793299987 ? 2120632635756771115 : 19543));
                    }
                    /* vectorizable */
                    for (int i_4 = 4; i_4 < 21;i_4 += 1) /* same iter space */
                    {
                        var_15 = ((-7698465781405406344 ? 10401213173621085356 : 0));
                        arr_15 [i_0] [i_1] [i_1] [i_1] = (((0 + -53) && (arr_12 [i_4 - 2] [i_1] [i_1] [i_2 - 1])));
                        arr_16 [i_1] = (2527505202 + -118);
                    }
                    for (int i_5 = 4; i_5 < 21;i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [i_1] [i_2 + 2] [i_1] [i_0] [i_2] = -4989220049570542915;
                        arr_20 [i_1] [i_1] [i_1] = (-29 - 45989);
                    }
                    for (int i_6 = 4; i_6 < 21;i_6 += 1) /* same iter space */
                    {
                        var_16 = (~14234249436212025433);
                        var_17 = (arr_0 [i_0]);
                        arr_23 [i_0] [i_1] [i_2] [i_6] [i_6 - 1] [i_6] = (!32767);
                        var_18 = ((var_5 ? 765265354224201720 : -5617846167032976083));
                        arr_24 [i_0] [i_1] [i_1] [i_6 - 3] = ((((18014398509481968 ? -7243148904948338040 : (arr_8 [i_6 + 1] [i_2 + 3] [i_6 + 1] [i_6]))) * 7168));
                    }
                }
            }
        }
        arr_25 [i_0] [i_0] = ((18446744073709551607 * (min((arr_4 [i_0]), 3831386829))));
    }
    var_19 = -7467510593642356863;
    #pragma endscop
}
