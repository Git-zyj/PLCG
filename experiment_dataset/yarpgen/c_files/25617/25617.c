/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((min((var_3 - var_1), -var_8)), 69));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [13] = (arr_4 [i_1]);
                    var_17 = (min(((9223372036854775807 ? 0 : ((0 ? (arr_6 [i_0] [i_1] [i_1] [i_2]) : (arr_6 [i_0] [i_0] [i_0] [i_0]))))), (((var_3 ? var_2 : (((arr_3 [i_1]) ? var_3 : var_4)))))));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = var_3;
                }
            }
        }
    }
    var_18 = (var_3 + (min(((var_12 ? var_0 : 9011947887693819715)), (var_8 - var_4))));
    #pragma endscop
}
