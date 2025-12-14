/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    arr_10 [i_0] = (((arr_3 [i_0]) ? (((max((arr_2 [i_0] [20]), 1073741823)) << (var_5 - 2941102319))) : (arr_7 [16] [i_1] [i_2])));
                    arr_11 [i_0] [i_0] [i_0] = (((((((~(arr_4 [i_0]))) + 9223372036854775807)) >> (((arr_7 [i_2] [i_2 - 2] [i_1]) - 55)))) == (((arr_6 [i_0] [i_1] [i_2 - 1]) ^ var_8)));
                    arr_12 [i_0] [i_1] [i_0] = (((arr_1 [i_0]) & (((arr_9 [i_0]) ? (arr_6 [i_2 - 1] [i_2 + 1] [i_2 - 2]) : (!var_8)))));
                }
            }
        }
    }
    var_14 = ((((((var_3 ? var_10 : -11395)))) ? 3221225472 : ((((~var_7) < var_13)))));
    #pragma endscop
}
