/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = (((69 < 181) ? (arr_1 [0]) : -1234674286));
                    arr_7 [i_0] [i_1] [1] = (arr_3 [6]);
                    var_15 = ((!((((arr_5 [1] [i_0] [i_0] [0]) ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : 27757)))));
                }
            }
        }
    }
    var_16 = ((((((max(var_8, var_5))))) ? -var_3 : ((var_11 ^ ((max(187, var_10)))))));
    var_17 += var_0;

    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_18 -= var_6;
        var_19 = (max((min((((9058727917985101415 ? (arr_8 [6] [13]) : (arr_8 [16] [1])))), 9058727917985101410)), (1376915466 * 1)));
        arr_10 [i_3] [i_3] = ((+((var_3 ? -1 : ((((arr_9 [14] [i_3]) || 9058727917985101415)))))));
        arr_11 [19] = ((((!(arr_8 [i_3] [2]))) ? ((-(arr_9 [i_3] [i_3]))) : (!-1376915466)));
    }
    #pragma endscop
}
