/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221362
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
                arr_5 [i_1] [i_0] [i_0] = var_10;
                var_20 = ((var_8 ? ((~(arr_2 [i_0]))) : ((1533051429 ? ((((arr_3 [i_0]) ? 31 : var_14))) : (1125899906842623 - 13674617426945646525)))));
                var_21 = (arr_3 [i_0]);
                var_22 = (~51985);
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_23 = (arr_9 [i_2]);
        arr_10 [16] [16] = ((arr_6 [i_2]) ? (arr_9 [i_2]) : (arr_9 [i_2]));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 18;i_4 += 1)
            {
                {
                    var_24 = (~227);
                    var_25 = ((var_5 ? (((var_8 ? (arr_13 [i_3]) : var_10))) : -3456886145467647689));
                }
            }
        }
        var_26 = (min(var_26, (((~(arr_7 [i_2]))))));
        var_27 = ((~(arr_6 [i_2])));
    }
    #pragma endscop
}
