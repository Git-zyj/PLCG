/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_17 = (~-117);
                        var_18 = (i_0 % 2 == 0) ? (((((var_15 * ((30 & (arr_9 [i_0]))))) & (((((((((arr_1 [i_0]) + 9223372036854775807)) << (var_11 - 46)))) == 117)))))) : (((((var_15 * ((30 & (arr_9 [i_0]))))) & (((((((((((arr_1 [i_0]) - 9223372036854775807)) + 9223372036854775807)) << (((var_11 - 46) - 2))))) == 117))))));
                        arr_12 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3] = 109;
                    }
                }
            }
        }
        var_19 = ((7260570068266538268 ? (((((((var_13 ? (arr_2 [i_0]) : (arr_10 [i_0] [i_0] [i_0] [i_0])))) < ((5093481380160957238 ? 272678883688448 : 1)))))) : ((-11 ? 1 : 16498544037496076635))));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 13;i_4 += 1)
    {
        arr_15 [i_4] = (((arr_5 [i_4 - 2] [i_4 - 1]) ? 205 : (arr_14 [i_4 - 1])));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    {
                        var_20 = (((23756 & 1) | ((1 << (((arr_8 [i_7]) + 7474308890201889256))))));
                        var_21 = (((arr_2 [i_4 - 2]) == (arr_9 [i_4])));
                    }
                }
            }
        }
    }
    var_22 = var_8;
    #pragma endscop
}
