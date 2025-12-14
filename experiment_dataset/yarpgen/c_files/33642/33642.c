/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_1 ? (var_7 / var_9) : var_16));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (((((149 <= 83) ? (min(var_16, var_5)) : ((max((arr_3 [i_0] [i_1]), var_19))))) == (((((min(var_9, var_12)) != (arr_1 [i_0] [i_0])))))));
                arr_7 [i_0] [i_0] [i_0] = ((~((~(-7610800559657126649 | var_4)))));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_21 ^= (arr_5 [i_0 + 2] [i_0 - 3]);
                    var_22 = (min(var_22, (((23 ? 1 : 1)))));
                    arr_10 [i_0] [i_1] [i_2] = (min(((((-7514022204919935570 && (arr_9 [i_0] [i_1] [i_0]))) ? (max((arr_5 [i_2] [i_2]), (arr_1 [i_0] [i_0]))) : (((arr_8 [i_2] [i_0]) ? (arr_5 [i_1] [i_2]) : -1)))), 1));
                }
            }
        }
    }
    #pragma endscop
}
