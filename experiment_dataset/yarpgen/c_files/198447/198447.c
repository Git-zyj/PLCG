/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [6] = ((((-(arr_2 [i_0 + 1] [i_1]))) * (((var_7 != (((arr_3 [i_0 + 1] [i_0] [10]) | (arr_2 [i_0] [i_0]))))))));
                var_11 = (!4579);
                var_12 = (arr_0 [i_0 - 1]);
            }
        }
    }
    var_13 = ((3930918880 ? var_8 : (!var_10)));
    var_14 = (max(var_14, -var_6));
    var_15 = (((10 != 149) | (var_3 - var_9)));
    #pragma endscop
}
