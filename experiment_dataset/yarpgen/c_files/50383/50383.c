/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [7] [7] [i_1] [i_1] = ((max(0, (arr_0 [i_0 + 3]))));
                    var_13 -= (~10237371889620085126);
                    arr_8 [i_1] [i_2] [1] = ((~((((~(arr_4 [i_0]))) % 2927180898))));
                    var_14 = min((((-((2927180885 ? 0 : var_8))))), (min((max(0, (arr_4 [i_0 + 2]))), var_1)));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_1] [i_4] = var_11;
                                var_15 = (min(var_15, (((-(((arr_2 [i_0] [i_3] [1]) ? -124 : 511)))))));
                                arr_16 [6] [8] [6] [i_3] |= min((var_9 * var_7), ((min(31, 18005602416459776))));
                                var_16 = ((~((~(arr_11 [i_0 + 1] [i_1] [i_1 - 1] [i_3 + 1] [i_3] [i_1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
