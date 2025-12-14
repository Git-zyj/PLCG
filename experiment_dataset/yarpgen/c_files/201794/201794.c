/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_12 |= (arr_4 [i_0 - 1]);
                var_13 = var_1;
                arr_5 [1] [1] |= (max(((((arr_3 [i_0 + 1]) && (arr_4 [i_0 - 3])))), (arr_3 [1])));
                var_14 = (((7 && 3067226653) && ((max(((1 ? 9 : 255)), (((var_1 && (arr_2 [i_1] [i_0])))))))));
            }
        }
    }
    #pragma endscop
}
