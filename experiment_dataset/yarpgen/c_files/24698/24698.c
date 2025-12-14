/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (max(var_3, (~var_4)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((max(var_8, (max((((arr_3 [i_0] [i_1 + 1] [i_0]) ^ 5455959286163371886)), (arr_3 [i_0] [i_1 - 3] [i_0]))))))));
                var_16 = var_13;
                arr_6 [i_0] &= ((-(arr_2 [i_1 - 2])));
            }
        }
    }
    var_17 = (min(var_17, (((var_0 ? -1503908775398781661 : var_2)))));
    #pragma endscop
}
