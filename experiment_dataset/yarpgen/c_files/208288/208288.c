/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_5 & var_4);
    var_15 = (max((!var_10), (((-var_3 + 2147483647) >> (var_3 - 169)))));
    var_16 = var_11;
    var_17 = (-((var_9 ? (~var_5) : (var_12 << var_0))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = ((min(5294596, (arr_7 [i_0] [i_0] [i_2] [i_0 + 1]))));
                    arr_9 [16] &= (min(5294606, (((((min((arr_6 [i_2]), (arr_4 [i_1])))) ? ((min(15, (arr_1 [i_0] [i_0])))) : ((min((arr_1 [i_0] [i_0]), var_7))))))));
                }
            }
        }
    }
    #pragma endscop
}
