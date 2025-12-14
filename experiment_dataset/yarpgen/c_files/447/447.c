/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((min(((var_0 ? var_8 : 0)), (51 * var_10))) <= (((79 || (((var_3 ? var_11 : var_11))))))));
    var_14 = (max(((var_4 ? (var_11 == -116) : var_2)), var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_0] = ((-(min(((max(140, var_6))), (16 / 168)))));
                var_15 ^= (~var_10);
            }
        }
    }
    #pragma endscop
}
