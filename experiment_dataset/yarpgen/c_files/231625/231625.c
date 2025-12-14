/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;
    var_12 = ((~(((var_3 ^ var_10) ? ((min(-16384, var_8))) : (~var_2)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 -= (((((-7 ? -10 : 17419616046294112591))) ? (((~(arr_0 [i_1])))) : ((((min(15, var_3))) & (max(7189424416459835184, -18))))));
                    arr_6 [6] [i_1] [i_2] = (((((((arr_2 [13] [i_1 + 1] [i_1]) ? 1628431548474539815 : (arr_3 [1]))))) ? ((var_9 ? (1628431548474539817 ^ 16818312525235011801) : (((max(-104, (arr_2 [i_2] [i_1 + 1] [i_1 + 1]))))))) : (max(5699384397842161582, -16384))));
                    var_14 = var_5;
                }
            }
        }
    }
    #pragma endscop
}
