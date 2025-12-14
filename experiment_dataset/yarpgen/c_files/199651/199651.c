/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 173;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, ((((arr_3 [i_0] [i_0] [6]) ? 6641193655698990348 : (((((~(arr_5 [i_0] [i_0 - 1] [3] [i_0 - 1])))) | ((~(arr_0 [i_2]))))))))));
                    var_18 = ((!(((-(arr_4 [i_0]))))));
                }
            }
        }
    }
    var_19 = (max(var_19, 1274441676));
    #pragma endscop
}
