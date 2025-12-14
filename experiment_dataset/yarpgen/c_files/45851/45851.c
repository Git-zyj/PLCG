/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -2147483646;
    var_18 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = (((arr_5 [i_1 - 1] [i_1] [i_1 - 1]) ? (((!(arr_4 [i_1] [i_0] [i_0])))) : ((min((arr_4 [i_1 - 1] [i_0] [i_0]), 5080926320874680838)))));
                var_20 = (((((((13365817752834870778 ? (arr_0 [i_0]) : 13365817752834870793))) ? ((28 ? (arr_1 [18]) : (arr_5 [i_0] [19] [i_1]))) : 27))) ? 1642658851 : (arr_3 [i_0]));
            }
        }
    }
    var_21 = max((!37), var_0);
    #pragma endscop
}
