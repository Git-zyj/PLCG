/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_13 ^= ((((0 ? 1 : ((1 ? var_7 : 1))))) ? var_6 : ((min(1, 1))));
                    arr_8 [i_0] [i_1] [1] = (((((min(var_6, 1)) == ((1 ? var_11 : 1)))) ? 1 : (max(((var_0 ? 1 : var_7)), (min(1123397255, var_3))))));
                }
            }
        }
    }
    var_14 = (1 >= 1);
    var_15 = ((((((var_9 <= var_9) ? var_12 : var_7))) ? (((1 / 255) ? (min(var_4, -1048464350)) : 1)) : ((((252 ? 22 : var_0))))));
    var_16 = (max(1123397258, 0));
    #pragma endscop
}
