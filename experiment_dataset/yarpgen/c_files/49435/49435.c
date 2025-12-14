/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_11 = (min(var_11, (arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 6;i_2 += 1)
            {
                {
                    var_12 ^= (((var_7 % var_0) % (((25102 < ((-25102 ? var_8 : var_2)))))));
                    arr_8 [i_0] [i_0] [i_0] [7] = ((!((((arr_2 [i_0] [i_1] [i_2]) / (max(var_10, var_9)))))));
                }
            }
        }
        var_13 = (arr_4 [i_0] [i_0]);
    }
    var_14 ^= ((-var_10 < ((((min(var_1, var_1)) > (((255 ? var_4 : 1239905432))))))));
    var_15 = var_7;
    #pragma endscop
}
