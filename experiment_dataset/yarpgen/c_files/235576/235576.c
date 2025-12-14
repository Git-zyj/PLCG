/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_0] [i_1] = ((((20 <= (arr_2 [i_1])))));
                    var_14 -= ((((((15 | (arr_5 [3]))))) & (2 <= -8925098910229689406)));
                    var_15 = (min(var_15, ((((((4294967278 | (arr_7 [10] [5] [10] [i_2]))) < (arr_2 [i_0])))))));
                }
            }
        }
    }
    var_16 = var_3;
    #pragma endscop
}
