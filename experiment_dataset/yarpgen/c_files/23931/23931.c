/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [11] = ((((((((arr_0 [i_0]) < var_1)) ? (~var_10) : ((((arr_3 [i_0] [i_1]) <= var_12)))))) ? (min(((((arr_4 [i_0]) > (arr_3 [i_0] [i_1])))), (arr_1 [i_0]))) : var_15));
                arr_7 [i_0] = var_9;
                var_20 = (((max((arr_2 [i_0]), var_14)) > (((((arr_1 [i_1]) == var_9))))));
                var_21 = (arr_3 [i_0] [i_0]);
            }
        }
    }
    var_22 = (min(var_22, 4318594645599365788));
    #pragma endscop
}
