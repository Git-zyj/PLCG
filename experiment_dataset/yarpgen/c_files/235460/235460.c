/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((((((arr_0 [i_0] [i_0]) + 2147483647)) >> (((arr_0 [i_1] [i_0]) + 702941333)))) > (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_1]) : (arr_0 [i_0] [i_1])))));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] = (((!1) ? (~1061228415) : (((((max(985779469, 1))) ? ((var_3 ^ (arr_3 [i_0] [i_1]))) : 1)))));
                    arr_10 [0] [0] = (((((arr_6 [i_0] [i_1] [5] [11]) ? var_2 : (arr_8 [i_0] [i_0]))) % ((~(-9223372036854775807 - 1)))));
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    arr_14 [i_0] [i_0] [7] = ((~(((max((arr_7 [i_0] [i_0]), var_3)) | var_2))));
                    arr_15 [i_0] [i_1] [i_3] = 208;
                }
            }
        }
    }
    var_20 = ((((max(((max(1, var_13))), var_8))) ? var_1 : (((~var_12) + (var_9 - var_12)))));
    var_21 = var_14;
    #pragma endscop
}
