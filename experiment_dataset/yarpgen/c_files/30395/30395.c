/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 = (((min(((var_8 ? var_1 : var_4)), var_8)) < var_7));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_12 -= (((((-(arr_2 [i_0 + 2] [i_0 + 1])))) > ((6227784458463600930 ? -1 : (((arr_2 [i_0] [i_0]) ? 0 : (arr_0 [7] [7])))))));
        arr_3 [i_0] &= (((524284 ? 239 : 7610263982296456120)));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_13 = (((min(var_1, 903706282)) * ((min((arr_2 [i_1] [i_1]), (arr_2 [18] [i_1]))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            {
                                var_14 = (((((arr_9 [14] [i_4] [i_4 - 1]) ? (arr_9 [i_4 + 1] [i_4] [i_4 - 2]) : (arr_9 [11] [11] [i_4 - 2]))) % ((~(arr_9 [i_4] [i_4 - 3] [i_4 - 2])))));
                                arr_17 [i_5] [i_4] [i_2] [i_2] [i_1] = ((+(((arr_11 [i_1] [i_4] [i_4 - 1] [i_4 - 1]) ? (arr_11 [i_1] [i_1] [i_4 - 2] [i_4 - 2]) : -6227784458463600930))));
                                arr_18 [i_1] [i_2] [i_1] [i_4 - 2] [i_5] = (min(var_8, ((((((arr_0 [i_1] [i_2]) ? var_4 : -524276))) ? (12592836509342342034 % 16) : (-524263 ^ -6227784458463600940)))));
                            }
                        }
                    }
                    arr_19 [i_1] [i_2] [i_3] = (min(((((arr_8 [i_1]) > (arr_6 [i_1])))), (min(239, 1666284518))));
                }
            }
        }
        var_15 = var_6;
    }
    #pragma endscop
}
