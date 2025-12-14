/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 59;
    var_18 = max(1, (var_6 & 32651));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_13 [i_1] [i_1] [i_1 + 1] [i_1 - 1] = var_13;
                        var_19 = (min(var_13, (~var_8)));
                        var_20 += (min((~10678), ((var_3 ? ((((!(arr_12 [i_3 - 2] [i_3] [i_3 - 2] [i_3] [i_3 - 1]))))) : (arr_2 [i_0])))));
                    }
                }
            }
        }
        arr_14 [i_0] |= ((min(((11335567702902053330 ? 7111176370807498278 : var_14)), var_9)));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_21 = (!var_15);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                {
                    arr_23 [i_4] [i_4] [i_4] [i_5] = -1314828490;
                    arr_24 [i_4] = (~54847);
                }
            }
        }
        var_22 = (min(var_22, 11335567702902053330));
    }

    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        var_23 = (min((max(var_9, 1)), ((min((var_14 || 3239227243), (((arr_7 [i_7] [i_7] [i_7] [i_7]) > 1632074594)))))));
        arr_29 [i_7] [i_7] = (arr_1 [i_7]);
    }
    var_24 = (~0);
    #pragma endscop
}
