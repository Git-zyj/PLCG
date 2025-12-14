/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (((((max(1309456357, 4978922747840073860)) ^ -1753029130)) ^ ((min((~-1309456361), (((arr_3 [i_0] [i_1]) / var_14)))))));
                arr_6 [i_0] = (((((((((arr_3 [i_0] [i_0]) - -2064915847))) ? (arr_0 [i_0 - 2]) : (((2575122906 >= (arr_3 [1] [i_0]))))))) ? ((max((((var_6 != (-9223372036854775807 - 1)))), (arr_2 [i_0])))) : (((-9223372036854775807 - 1) | 2064915846))));
                arr_7 [i_0] = (arr_4 [18]);
                var_15 = (min((((((arr_3 [i_0 - 3] [i_1]) ? var_12 : 1753029130)) ^ (arr_0 [i_0 + 1]))), (arr_4 [i_0])));
            }
        }
    }

    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    {
                        arr_17 [i_5] [i_4] [13] [i_2] |= (((((arr_8 [i_2]) ? (arr_8 [i_5]) : -1309456365)) / (arr_8 [i_2])));
                        var_16 = (((~-1753029130) ? (((((((arr_16 [i_3] [i_3]) && 9223372036854775807)))) % ((14077779723779659516 >> (((arr_8 [i_2]) + 461496732)))))) : (!-9223372036854775807)));
                    }
                }
            }
        }
        var_17 = (((arr_12 [i_2] [1]) ? (~13467821325869477765) : (min((arr_12 [i_2] [i_2]), (arr_8 [i_2])))));
        var_18 = min((min(7, 13467821325869477767)), var_1);
        arr_18 [i_2] [i_2] = (268435456 & 2281262872);
    }
    #pragma endscop
}
