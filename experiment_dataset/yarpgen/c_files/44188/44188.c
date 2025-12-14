/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~var_6);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_14 = (max((arr_2 [i_1]), ((((max((arr_5 [i_0] [4]), (arr_5 [1] [1]))) <= (max(var_10, (arr_5 [i_0] [4]))))))));
                var_15 = (max((((~(arr_3 [i_0] [i_0] [i_0])))), (arr_1 [i_0])));
                var_16 = (min(var_16, (arr_0 [i_0])));
                var_17 = var_4;
            }
        }
    }
    var_18 = (~var_2);
    #pragma endscop
}
