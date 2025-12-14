/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((var_9 & (var_3 < var_7)))) ? var_10 : var_11);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 -= ((((((max(var_5, var_4)) < var_3))) / 35204));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_14 = ((var_8 ? var_10 : var_4));
                        arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] = ((var_11 ? var_6 : (var_9 || var_6)));
                        var_15 = ((var_5 ? var_9 : (arr_5 [i_3] [i_1])));
                    }
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        var_16 = (((0 ? 65530 : 0)));
                        var_17 = (min((min((arr_7 [i_4 - 1] [i_2 - 3] [i_1 + 3] [i_0 + 1] [i_0 + 1]), var_4)), ((((arr_4 [i_2 - 1] [i_2 - 1] [i_0 + 1]) < var_0)))));
                        var_18 = (max(var_18, ((((((max(23376, var_7))) > var_7))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                    {
                        var_19 = (var_1 - var_6);
                        var_20 += var_10;
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                    {
                        arr_17 [i_0 + 2] [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_2] [i_6] = var_9;

                        for (int i_7 = 2; i_7 < 17;i_7 += 1)
                        {
                            var_21 = (((((~(arr_10 [i_7 + 1] [i_1 + 3] [i_2] [i_7 + 1] [i_7] [i_2])))) ? (var_9 || var_10) : var_7));
                            var_22 = (min(var_22, var_6));
                            var_23 = (-1627360525947808864 ? ((1 ? -2509607937588525414 : -2085180571646057918)) : var_6);
                            var_24 = ((12447 ? 28557 : (-7276590467597267651 == 29538)));
                        }
                        var_25 *= ((13183 ? ((var_10 ? var_10 : var_2)) : (arr_12 [i_0] [i_0] [i_0 + 1] [i_1 + 2] [i_2 - 3])));
                    }
                    var_26 = (min(var_26, var_1));
                }
            }
        }
    }
    #pragma endscop
}
