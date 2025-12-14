/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = max((((((9371 ? 32767 : 1960287979))) ? (-2128498928 >= var_14) : var_8)), var_8);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0]));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_18 = arr_1 [i_0];
                    arr_7 [14] [i_1] [i_1] [i_0] |= ((-507625320 ? -970577835 : (((arr_0 [i_1]) ? (arr_4 [i_0] [i_1]) : (arr_6 [i_0] [i_1] [i_2])))));
                    arr_8 [i_0] [i_0] [i_0] = ((2101675812 ? var_3 : (arr_6 [i_0] [i_0] [i_2])));
                    arr_9 [i_0] = ((((var_15 / (arr_4 [i_0] [i_0]))) * (arr_0 [i_0])));
                    arr_10 [i_1] [i_0] = (((arr_6 [i_0] [i_0] [i_0]) + (arr_1 [i_0])));
                }
            }
        }
        var_19 -= var_9;
    }
    #pragma endscop
}
