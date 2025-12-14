/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    var_14 = var_12;
    var_15 = var_1;
    var_16 += var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 = ((var_4 || ((((((1 ? 15304477099936730335 : var_11))) ? 0 : (min(0, var_4)))))));
                    arr_7 [i_0] [i_2 + 2] |= (arr_4 [6] [i_1] [i_2 - 1]);
                    arr_8 [i_1] = 64;
                }
            }
        }
    }
    #pragma endscop
}
