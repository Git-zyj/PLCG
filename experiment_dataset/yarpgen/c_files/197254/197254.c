/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_7 ? (!14059307325151586624) : (var_11 - var_9)));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = var_12;

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            arr_7 [i_1] = ((-((((arr_1 [i_0] [i_0]) ? (arr_0 [2] [2]) : (arr_1 [i_0] [i_1]))))));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                arr_11 [i_0] [i_1] [i_1] = ((var_5 ? (arr_9 [i_0] [i_1] [i_2] [i_1]) : (((arr_2 [i_0]) ? 98643533 : (arr_10 [i_1])))));
                arr_12 [i_1] [i_1] [8] = 65;
            }
            var_14 = (!1);
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_15 = ((~(arr_4 [i_0] [i_0 - 2])));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            arr_23 [i_0 - 2] [i_3] [i_0 - 2] [i_0 - 2] [i_6] = ((4196323740 << ((((((((arr_6 [i_6] [i_5]) | 4196323718))) & (max(var_8, var_4)))) - 1623059977938289786))));
                            arr_24 [i_0] = (max((((arr_20 [i_0 + 1] [i_0 - 2] [i_0 - 3]) ? var_4 : (arr_20 [i_0 - 3] [i_0 - 2] [i_0 + 1]))), var_7));
                        }
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 0;i_7 += 1)
        {
            var_16 = (max(var_16, (min((((arr_25 [i_0 - 1] [i_7]) ^ (arr_25 [i_0 + 2] [i_7]))), ((((arr_25 [i_0 - 3] [10]) && (arr_25 [i_0 - 1] [i_7]))))))));
            var_17 = max((arr_20 [i_0] [4] [6]), var_10);
            arr_29 [i_0] [i_0] = var_3;
        }
        var_18 = var_4;
        arr_30 [i_0 + 1] = ((-(arr_0 [i_0] [i_0 + 1])));
    }
    for (int i_8 = 2; i_8 < 10;i_8 += 1)
    {
        var_19 = ((((arr_0 [i_8 - 1] [i_8 - 1]) < (arr_8 [i_8 + 1] [i_8 - 2]))));
        arr_34 [i_8] [i_8] = var_3;
    }
    #pragma endscop
}
