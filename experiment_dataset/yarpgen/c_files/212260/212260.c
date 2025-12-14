/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (127 - var_11);
        arr_5 [i_0] [5] = (arr_3 [i_0]);
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        var_18 -= 16391;
        var_19 &= (~(var_13 * 1984));
        var_20 = (((((!(arr_6 [i_1]))))) < (((~(arr_8 [i_1])))));
        var_21 = ((((((arr_6 [i_1]) ? (arr_7 [i_1 + 3]) : (arr_6 [i_1 + 1])))) ? ((((!(arr_8 [12]))))) : ((~(((arr_6 [19]) ? (arr_7 [1]) : 3709686957))))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 19;i_3 += 1)
            {
                {
                    var_22 = (min(var_22, 72));
                    var_23 = (max(56, ((((arr_13 [i_1 + 2] [i_1 - 2]) ? (arr_6 [i_1 + 1]) : var_8)))));
                }
            }
        }
    }
    var_24 = var_4;
    var_25 = var_6;
    #pragma endscop
}
