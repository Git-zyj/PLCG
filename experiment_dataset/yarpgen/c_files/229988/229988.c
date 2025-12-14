/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_12 = (max(var_12, (arr_2 [i_0])));
                var_13 += (var_1 - 0);
                arr_4 [i_0] [i_1] = (arr_0 [i_1] [i_0]);
            }
        }
    }
    var_14 ^= var_6;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {

                    for (int i_5 = 3; i_5 < 9;i_5 += 1)
                    {
                        arr_18 [i_4] [i_5] = ((4113453321474533321 * ((-(0 / var_4)))));
                        arr_19 [i_5 + 1] [i_5] [i_4] [i_5 + 1] [i_5 - 2] = 1;
                        arr_20 [i_3] [i_3] [i_3] [i_5] = ((((((arr_17 [i_5 - 1] [i_5 - 3] [i_5 - 2] [i_5 + 1] [i_5 - 2]) ? (arr_17 [i_5 + 1] [i_5 - 2] [i_5 - 1] [i_5 - 3] [i_5 - 1]) : (arr_17 [i_5 - 3] [i_5 - 3] [i_5 - 3] [i_5 - 1] [i_5 + 1])))) ? (max((arr_17 [i_5 - 3] [i_5 - 2] [i_5 - 2] [i_5 + 1] [i_5 - 2]), var_9)) : ((~(arr_17 [i_5 - 2] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 - 2])))));
                        var_15 = (max(var_15, (((-var_8 ? ((min(88, (max(167, var_5))))) : (((arr_17 [i_5 - 3] [i_5 - 2] [i_5 + 1] [i_5 - 2] [i_5 - 2]) ? 0 : (arr_11 [i_4]))))))));
                    }
                    var_16 = (max(var_16, ((((var_4 & var_4) >> (min(var_4, ((((arr_0 [i_3] [i_3]) != (arr_13 [i_2] [i_2] [i_2] [i_2])))))))))));
                }
            }
        }
    }
    var_17 = var_8;
    #pragma endscop
}
