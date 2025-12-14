/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_19 = (min((min(var_12, (arr_6 [i_0] [i_0] [i_2]))), (min(407706805, (arr_5 [i_0] [i_0])))));
                    arr_7 [i_1] |= (((((((((arr_6 [i_0] [1] [i_0]) ? (arr_6 [i_0] [i_1] [i_2]) : (-127 - 1)))) ? (!127) : ((8034928131675535681 ? 4050351694268920077 : 8034928131675535681))))) ? (((((((arr_6 [0] [i_1] [i_1]) ? 8956 : var_4))) ? (min(-117, (arr_5 [i_0] [i_2]))) : ((max((arr_0 [i_0]), 14029)))))) : (max(var_12, 1681490803))));

                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        var_20 = var_17;
                        var_21 = (((~(arr_2 [13] [i_3]))));
                        var_22 = (((arr_0 [i_3 + 1]) ? 14029 : (arr_10 [7] [i_3] [i_0] [i_3 - 1])));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            {
                                var_23 = (arr_12 [i_0] [i_1] [i_0] [i_4] [i_5]);
                                var_24 = ((85 ? -6 : (max((arr_1 [i_0]), 127))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = ((max(var_6, 0)));
    #pragma endscop
}
