/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((var_7 < 1211805445) ? ((max(1, var_3))) : ((143 ? var_3 : var_0))))) ? 48 : (max(-6805633334521481398, 274844352512))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_14 = (arr_2 [i_0]);
                    var_15 = (((((((arr_2 [i_1]) || var_11)))) ? (((arr_2 [i_0]) ? (((arr_7 [i_0] [i_1] [i_2] [i_0]) ? (arr_4 [i_0] [i_2]) : var_8)) : (arr_8 [i_2]))) : (((47 > (arr_7 [i_0] [i_1] [i_1] [i_1]))))));
                    arr_9 [2] [2] [i_0] = ((((min(var_7, 454684196))) ? (((arr_0 [i_2]) ? (arr_0 [i_0]) : (arr_5 [i_1]))) : (((arr_0 [i_2]) ? (arr_0 [i_0 + 1]) : 26184))));
                }
            }
        }
    }
    var_16 = (((!6805633334521481404) ? ((113240675 ? (-1789256439 < -6805633334521481398) : 1211805441)) : 20));
    #pragma endscop
}
