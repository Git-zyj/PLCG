/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 32767;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0] [i_0]) ^ var_7));
        arr_3 [i_0] = (((((4201972866309642559 ? (2147483647 || var_11) : (arr_0 [6] [i_0])))) ? ((((min(63586, -1)) * (arr_0 [i_0] [i_0])))) : (((arr_0 [i_0] [i_0]) ? ((((arr_0 [10] [i_0]) << (4201972866309642559 - 4201972866309642558)))) : (min(var_7, (arr_0 [3] [i_0])))))));
    }
    var_13 += var_6;

    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_14 = (~7653007159605901579);

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_10 [i_2] = ((~(~var_10)));
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        {
                            arr_17 [i_1 + 1] [i_1 + 1] [i_3] [i_2] [i_5 + 1] = var_9;
                            arr_18 [i_2] [1] [i_3] [1] [i_2] = ((!((min((((arr_7 [i_1] [i_2]) ? (arr_13 [i_1] [i_2] [i_3 - 1]) : (arr_15 [i_1]))), (!var_5))))));
                            arr_19 [i_2] [i_2] = (arr_11 [i_1] [i_2] [i_1] [i_4]);
                            arr_20 [i_1] [i_1] [i_2] [i_1 - 1] [i_1 + 1] [i_1] [1] = ((86 ? ((((min(37307, (arr_6 [i_1 + 1] [i_1 + 1] [i_3 + 2])))) ? ((((arr_13 [i_1 + 1] [i_1 + 1] [i_5 + 1]) << (397830410 - 397830379)))) : ((var_2 ? var_10 : var_9)))) : (((arr_9 [i_1] [i_1 + 1] [i_2]) ? (min(var_9, (arr_15 [2]))) : ((((arr_9 [i_1 - 1] [1] [i_2]) / (arr_0 [i_4] [i_2]))))))));
                            var_15 = (max(var_15, ((((var_1 && var_5) & -2147483647)))));
                        }
                    }
                }
            }
        }
        var_16 = ((((((((arr_13 [i_1 + 1] [7] [i_1]) ? (arr_12 [i_1] [i_1] [i_1] [i_1]) : 37306))) ? (((max(var_2, (arr_12 [i_1] [i_1] [i_1] [i_1 - 1]))))) : var_7))) ? ((~(16 & var_8))) : (~1792));
    }
    #pragma endscop
}
