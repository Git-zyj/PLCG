/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_1] = -7777062689160555525;
                    var_10 = (max(var_10, 1056312703551305882));
                    var_11 = ((((!((((arr_0 [i_0] [i_1]) ? (arr_5 [i_0] [i_0] [i_2]) : var_5))))) ? ((((((arr_6 [i_0] [i_0] [i_0] [3]) ? (arr_4 [i_0] [i_1] [i_1]) : var_0))) ? (min(var_5, (arr_2 [i_0]))) : ((7661 ? (arr_1 [i_0]) : -24900)))) : ((((var_7 ? 65535 : (arr_5 [i_0] [8] [i_2])))))));
                }
            }
        }
    }
    var_12 = 20;
    var_13 = var_3;
    #pragma endscop
}
