/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, -64));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_21 = ((((max(-83, (arr_4 [i_1])))) ? (((arr_1 [i_0]) ? (((118 ? -64 : 61))) : (arr_4 [i_2]))) : (max(var_7, (min(var_2, 3252771545785568786))))));
                    arr_9 [i_0] [i_1] = (((max((((7828693423607725091 ? (arr_0 [i_1] [i_2]) : 240))), ((~(arr_3 [i_0] [i_1]))))) - ((((!(!32759)))))));
                }
            }
        }
    }
    var_22 = var_12;
    #pragma endscop
}
