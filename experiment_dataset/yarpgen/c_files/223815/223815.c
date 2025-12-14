/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((~((max((min(var_8, var_9)), (!var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 ^= (((((var_3 ? (1 != 1) : ((((arr_6 [i_0] [i_1]) != 1)))))) ? ((max(1, (arr_3 [i_1] [i_1] [i_0])))) : ((~((min(var_5, 1)))))));
                var_13 = (0 >> 1);
                var_14 *= arr_1 [i_0] [i_1];
            }
        }
    }
    #pragma endscop
}
