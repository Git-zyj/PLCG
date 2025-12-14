/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = min(var_2, var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (arr_4 [i_0] [i_0] [i_1]);
                var_12 = min(var_4, (arr_2 [i_0]));
            }
        }
    }
    var_13 = ((var_3 ? var_2 : ((~((var_5 ? var_8 : var_1))))));
    var_14 ^= (min(((min(var_5, var_2))), var_8));
    #pragma endscop
}
