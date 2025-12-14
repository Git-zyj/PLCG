/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_18 = (max(var_18, 295));
        var_19 = (min((!var_8), ((var_11 ? (arr_1 [i_0]) : -889932539582893357))));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        arr_5 [i_1] = (~170);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        arr_14 [i_2] = ((!(arr_4 [i_3 - 1])));
                        arr_15 [i_4] [i_2] [i_3 + 3] = ((-1 ? ((var_2 ? 4 : 16196936263870211422)) : (((var_7 * (arr_7 [i_1]))))));
                    }
                    var_20 = (arr_13 [i_1] [i_2] [i_3 - 1] [i_3]);
                    var_21 = (((arr_7 [i_1 + 4]) ? (97 | 1180197561) : (max((arr_4 [i_1 + 2]), ((1180197561 ? 8 : 0))))));
                    arr_16 [i_2] [i_2] [i_2] [i_3] = ((max(227, 115)));
                }
            }
        }
    }
    var_22 = var_4;
    #pragma endscop
}
