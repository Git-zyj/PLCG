/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 = (min(var_18, ((max(-var_8, (((arr_0 [i_0]) % var_8)))))));
        arr_2 [i_0] = (min(906954831, 15882324250355046681));
        var_19 = var_7;
        arr_3 [i_0] = (max((arr_0 [i_0]), ((((max(906954814, var_4))) ? ((((arr_0 [i_0]) & (arr_0 [i_0])))) : (max(906954831, var_14))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    var_20 = (arr_6 [i_3] [i_2]);
                    var_21 = (((!1313195365) ? (((!(arr_0 [i_3])))) : -1));
                    var_22 = var_8;
                    var_23 = (arr_5 [i_2]);
                }
            }
        }
        var_24 = (arr_7 [i_1]);
        var_25 = (max(var_25, (arr_5 [i_1])));
        arr_10 [i_1] = (arr_6 [i_1] [i_1]);
        var_26 = -var_9;
    }
    var_27 = var_4;
    #pragma endscop
}
