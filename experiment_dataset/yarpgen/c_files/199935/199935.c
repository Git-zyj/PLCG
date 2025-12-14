/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= ((~(max(var_0, var_12))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 = ((~((~(arr_5 [i_1])))));
                    arr_6 [i_0] = (((((max(778989675, 3515977621))) ? 67108863 : (((9617886498285142710 ? -6946 : var_9))))) * (arr_1 [i_0] [i_1]));
                    var_16 -= (((((~(arr_1 [i_2 + 1] [i_2 - 1])))) ? ((((max((arr_1 [i_0] [i_1]), 192))) ? (7545436304524734053 & var_9) : ((484641781585598760 ? 2656503211 : (arr_2 [i_0] [i_1] [i_2]))))) : (min(17949723659790529624, (arr_3 [i_1])))));
                    var_17 = arr_2 [i_2 - 1] [i_2 - 1] [i_2 + 1];
                    arr_7 [0] &= (-778989672 - (arr_4 [i_2] [i_2 - 1] [i_2 + 1] [i_2]));
                }
            }
        }
    }
    #pragma endscop
}
