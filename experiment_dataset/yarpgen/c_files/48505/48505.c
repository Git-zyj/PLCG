/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (min(((var_2 ? var_7 : (-1 | 6356857704192928907))), (var_3 - 1)));
                var_17 = (12 * var_13);

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_0 + 1] [i_1] [i_2] [4] [i_3] [1] [i_1] = (7 & var_0);
                                arr_13 [i_1] [i_1] = (((arr_1 [i_0 + 1]) != (max((-1 - -655159104), -var_12))));
                            }
                        }
                    }
                    var_18 = var_10;
                    var_19 = (((((var_8 > (arr_9 [i_2] [i_1] [i_1] [i_1] [i_1] [7])))) - var_2));
                }
                var_20 = (8454 ? (((arr_3 [i_0 - 1]) ^ (((((arr_3 [i_0 - 2]) >= 4291633722)))))) : (((max(173, 27)))));
                arr_14 [i_1] = max((min(-1169, var_3)), (min((arr_0 [i_0 - 1]), 655159104)));
            }
        }
    }

    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        arr_18 [i_5] [i_5] = 24155;
        arr_19 [i_5] = ((max((min(var_2, (arr_16 [i_5]))), (arr_16 [i_5]))));
        var_21 = (min(var_21, var_2));
        var_22 = ((~(min(var_3, (((994160385 ? 1073479680 : 4291633710)))))));
    }
    /* LoopNest 2 */
    for (int i_6 = 2; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            {
                var_23 ^= ((!((min((arr_21 [i_6 + 2] [i_6 + 1]), var_4)))));
                var_24 = ((!((!(((~(arr_23 [i_6] [6]))))))));
                var_25 = (~274877906943);
                var_26 = (((((arr_22 [i_7] [i_7]) ? var_10 : -5481552937704387255))));
            }
        }
    }
    var_27 = var_9;
    var_28 = ((min((var_15 >= 144115187002114048), var_9)));
    #pragma endscop
}
