/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [9] [i_1] = (((((arr_3 [i_0]) + 2147483647)) >> (((min((arr_3 [i_0]), (arr_1 [i_1]))) + 38))));
                var_20 = (arr_0 [i_1]);
                arr_6 [1] = ((-(min((((arr_2 [6] [i_1]) - 2620185122)), (arr_4 [i_0])))));
                arr_7 [2] = ((-(arr_1 [i_1])));
            }
        }
    }
    var_21 ^= -1;
    #pragma endscop
}
