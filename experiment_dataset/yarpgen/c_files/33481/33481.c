/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;
    var_13 ^= var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_0] = (((((((255 & (arr_0 [i_1]))) % 24576))) < (((arr_6 [i_2 + 3] [i_2 + 2]) ^ (arr_3 [i_2] [i_2 + 3] [i_2 - 1])))));
                    var_14 ^= ((-(((arr_5 [i_2 + 1]) ? (arr_5 [i_2 + 2]) : (arr_5 [i_2 - 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_2] [i_3] [i_4 - 2] = (((10640253025441003184 ? (arr_1 [i_2 - 1]) : (arr_1 [i_2 + 2]))));
                                var_15 = (((((arr_11 [i_1] [i_2 + 2] [i_4 + 2] [i_4] [i_2 + 2] [i_1]) == var_4)) ? (max((arr_11 [i_0] [i_2 - 1] [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_4]), 32768)) : (arr_11 [i_0] [i_2 + 2] [i_4 - 2] [i_4] [i_4 - 1] [i_4 - 1])));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = 32768;
                                var_16 = ((!(((((((arr_2 [i_2] [i_1] [i_0]) - (arr_2 [i_0] [i_1] [i_1])))) ? ((11597753994907151452 ? var_7 : 47521)) : ((var_4 ? (arr_6 [i_3] [i_2 - 1]) : var_3)))))));
                                var_17 *= (min(47521, (((((57624 * (arr_7 [i_0] [i_1] [i_0]))) > (arr_7 [i_0] [i_1] [i_2]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = ((((var_5 ? (7924 % var_9) : var_0)) - -245934688700773233));
    #pragma endscop
}
