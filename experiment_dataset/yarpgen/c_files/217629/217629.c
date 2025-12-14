/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_12 |= 114;
                var_13 = (min(var_13, (!var_4)));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 3; i_2 < 16;i_2 += 1)
    {
        arr_7 [10] [i_2] = ((~(~44986)));
        var_14 = ((-((-(arr_6 [i_2])))));
    }
    var_15 = ((-(+-1685621120)));
    #pragma endscop
}
