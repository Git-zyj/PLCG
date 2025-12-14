/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += ((-10201 ? (((((((-32767 - 1) % 10220)) <= 1)))) : var_10));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = (((!485912760795197829) ? (!var_11) : (arr_0 [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_13 = (var_9 ? (-9223372036854775807 - 1) : 1);
                        var_14 = ((var_4 <= (arr_13 [i_1] [i_2 - 3] [i_3] [3] [i_1 + 1] [6])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
