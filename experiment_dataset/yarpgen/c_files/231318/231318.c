/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((-(max((arr_2 [12] [12] [1]), (arr_0 [i_0] [9]))))) <= (arr_1 [i_0])));
                var_14 = (arr_0 [i_1 + 1] [2]);
            }
        }
    }
    var_15 = -1730044071;
    var_16 = 1730044094;
    #pragma endscop
}
