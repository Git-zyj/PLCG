/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = var_4;
        var_16 = (arr_1 [i_0 + 3]);
        var_17 = ((((1023 ? (arr_0 [i_0] [i_0]) : 62914560))) ? (((arr_0 [i_0] [i_0 + 1]) ? (((-1359778540 ? var_6 : 164364686))) : (~8428395382234410903))) : (arr_2 [i_0]));
        var_18 = var_4;
    }
    var_19 = (((max(var_2, (~var_8)))) ? ((11 ? 677524870 : 0)) : var_7);
    var_20 -= var_9;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 15;i_4 += 1)
                    {
                        {
                            var_21 = (((min((!1), var_14)) ? var_6 : (arr_9 [i_1] [5] [i_4])));
                            arr_13 [i_1] [i_1] [i_1] [i_4] = ((-(((arr_8 [i_2 + 1] [i_3 - 1] [i_4 + 3] [i_4 - 2]) ? (arr_8 [i_2 - 1] [i_3 - 1] [i_4 + 2] [i_4 + 3]) : (arr_10 [i_1] [i_2 - 1] [i_3 - 1] [i_4 + 3])))));
                            arr_14 [i_1] [i_2] [i_2] = (min(-6339843468380480514, ((7218302327760728604 ? 6155887813150815781 : 7218302327760728590))));
                            arr_15 [16] [i_1] [i_1] [i_1] = (min((arr_7 [i_1] [i_1] [i_1]), ((~(arr_9 [i_3] [i_4] [i_4 + 1])))));
                        }
                    }
                }
                var_22 = (min(((9164731184519432389 ? 0 : 4232052735)), ((((arr_9 [i_2] [i_2] [i_2 + 2]) ? (arr_9 [i_2] [i_2] [i_2 + 1]) : (arr_9 [i_2] [i_2] [i_2 - 1]))))));
                var_23 = 7218302327760728585;
                var_24 &= var_12;
                var_25 = (arr_9 [i_2] [i_2] [i_1]);
            }
        }
    }
    #pragma endscop
}
