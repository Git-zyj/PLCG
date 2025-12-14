/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((1336178734 >> (var_2 + 4209)));
    var_13 = (32756 > 1336178734);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_2] [i_2] = ((((1336178734 ^ (arr_5 [i_0] [i_2] [i_1] [i_2])))) ? (((arr_4 [i_1]) ? ((0 ? 2958788561 : 1)) : (((((arr_5 [i_2] [i_2] [i_2] [i_0]) == var_11)))))) : var_9);
                    arr_8 [i_0] [i_1] [i_2] [i_2] = (min(((min((((arr_3 [12] [12]) + 2958788582)), var_8))), (((arr_5 [i_0] [i_2] [i_2 + 1] [i_2 - 1]) ? (((max((arr_2 [i_1]), var_6)))) : (arr_6 [i_2])))));
                    arr_9 [i_1] [i_2] = var_10;
                }
            }
        }
    }
    #pragma endscop
}
