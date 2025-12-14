/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    arr_11 [i_0] = var_10;
                    arr_12 [i_1] [i_1] = ((50 - (arr_1 [i_1])));
                    arr_13 [i_0] [i_0] [i_0] [i_1] = (min(((min(var_15, (arr_3 [i_1 + 2])))), (((min(1, (arr_7 [i_0] [i_0] [i_2]))) % var_11))));
                }
            }
        }
    }
    var_16 = (min(var_1, ((min(0, 1)))));
    var_17 = var_2;
    #pragma endscop
}
