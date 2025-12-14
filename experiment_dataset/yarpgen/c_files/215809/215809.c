/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_10 ? var_0 : var_10));
    var_17 = ((~(((((max(-7577, -67108864))) == (min(1729382256910270464, 4294967295)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [0] [1] = (min((min(((2235739768719818136 ? (arr_3 [i_0] [i_1] [i_1]) : (arr_6 [i_0] [i_1] [i_1]))), ((-(arr_6 [i_0] [i_1] [i_1]))))), (!var_14)));
                    var_18 = (((((-((1 ? (arr_3 [i_0] [i_1] [i_0]) : var_4))))) ? (-32767 - 1) : (((~1729382256910270464) ? 2235739768719818136 : ((max((arr_4 [i_0]), var_14)))))));
                    arr_8 [i_2] [i_0] [i_0 - 1] = ((88 > (-9223372036854775807 - 1)));
                    arr_9 [i_0] [i_1] [i_2 - 1] = (arr_4 [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
