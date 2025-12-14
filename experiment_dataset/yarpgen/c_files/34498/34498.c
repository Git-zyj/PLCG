/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_1] = (((((8710699303855683922 >= var_9) >= var_4)) ? (((((arr_4 [i_0] [i_1]) >= var_9)))) : ((-((-8710699303855683922 - (arr_5 [i_0] [10] [i_2] [i_1])))))));
                    arr_7 [i_1] = (((arr_4 [i_0] [i_2]) ^ (42592 | 42500)));
                    arr_8 [i_1] [i_1] [i_2] = (min((64 & 0), ((34877 ? 192 : 1))));
                }
            }
        }
    }
    var_12 = var_8;
    #pragma endscop
}
