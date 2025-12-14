/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [14] = ((((arr_0 [2]) ? (arr_0 [14]) : (arr_0 [12]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] = ((((((arr_4 [i_2] [i_0]) ? ((-(arr_5 [i_0] [i_0] [i_2] [1]))) : (!-1)))) ? ((((var_8 + (arr_6 [i_2]))) - (!var_2))) : ((((arr_3 [i_0] [i_1] [i_2]) ? -8550 : 1042826991)))));
                    arr_8 [i_0] [i_1] [12] [i_0] = ((-(arr_1 [i_0] [i_2])));
                    arr_9 [i_0] [i_1] [i_2] = ((1295404760 ? ((47 ? -900355234 : 2413372584) : (532573025 - 65535))));
                }
            }
        }
        arr_10 [i_0] [i_0] = (-(((((65535 - (arr_6 [i_0])))) ? (arr_0 [i_0]) : -var_7)));
    }
    var_15 = var_11;
    var_16 = (((-32767 - 1) ? var_1 : var_4));
    var_17 = (((-1295404761 - 4057119219) ? ((((max(var_9, 11))))) : ((var_6 ? (4057119219 || 31615) : -3253389725102390249))));
    #pragma endscop
}
