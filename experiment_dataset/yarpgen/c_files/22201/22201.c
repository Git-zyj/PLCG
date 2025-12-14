/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_19 = (-76 + -62);
                var_20 = var_11;
            }
        }
    }
    var_21 = var_11;

    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_8 [i_2] = ((((((arr_7 [i_2]) ? ((max((arr_7 [i_2]), (arr_6 [i_2])))) : (arr_7 [i_2])))) ? (arr_7 [i_2]) : (((var_5 && (arr_7 [i_2]))))));
        var_22 = (!var_5);
    }
    for (int i_3 = 1; i_3 < 17;i_3 += 1)
    {
        var_23 = ((-62 ? -59 : (arr_9 [i_3] [i_3])));
        var_24 = 50;
        var_25 = ((((min(var_7, var_4))) ? ((max(((min((arr_10 [i_3 + 2]), (arr_10 [i_3])))), (arr_11 [i_3 - 1])))) : (((-117 <= (((arr_11 [i_3 - 1]) ? (arr_9 [i_3] [i_3 - 1]) : var_3)))))));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    var_26 = (min(var_26, ((((((var_6 ? ((max((arr_16 [i_3] [12] [i_5]), (arr_13 [i_3] [i_4 - 1] [6])))) : -99))) ? (arr_10 [i_3 + 2]) : ((min(var_8, 56))))))));
                    arr_17 [6] [i_4] [4] [i_5] = (arr_9 [i_3 - 1] [i_4 - 1]);
                }
            }
        }
    }
    #pragma endscop
}
