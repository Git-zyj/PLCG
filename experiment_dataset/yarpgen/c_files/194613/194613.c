/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_21 += (((((var_3 + var_17) ? var_4 : var_8)) / var_5));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_10 [i_2] [8] [1] = (((var_19 % var_15) * (~4294967295)));
                    var_22 = (-(((24669 ^ 4294967268) & (~var_9))));
                }
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    var_23 += (((((((((var_9 ? var_3 : var_19))) || (((var_13 ? var_8 : var_13))))))) < (((((var_5 ? var_7 : var_10))) - ((var_13 ? var_15 : var_17))))));
                    arr_13 [8] [i_0] [i_1] [i_0] = var_3;
                }
            }
        }
    }
    #pragma endscop
}
