/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [12] = ((85 ? (arr_3 [i_0] [i_0] [15]) : (var_15 ^ var_12)));
                arr_6 [i_0 + 1] [i_1] = ((((arr_2 [i_0 - 1] [i_0 + 1]) * (max((arr_3 [i_0] [i_1] [i_1]), var_4)))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_18 = ((((-(((arr_7 [i_2] [i_2]) ? (arr_8 [i_2] [i_2]) : -85)))) < (((arr_7 [i_2] [i_2]) ? ((84 ? -20594 : 1399259444)) : (arr_8 [i_2] [i_2])))));
        var_19 ^= (((arr_7 [i_2] [i_2]) ? ((-(arr_7 [i_2] [i_2]))) : (((var_8 * ((-122 / (arr_8 [i_2] [i_2]))))))));
    }
    #pragma endscop
}
