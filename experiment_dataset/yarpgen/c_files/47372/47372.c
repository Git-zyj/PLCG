/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_2 ? (((((var_2 == var_15) != -var_11)))) : (max((((0 ? var_6 : 1580950749))), var_17))));
    var_20 = ((~((((~var_1) >= (min(var_17, var_5)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((~(arr_4 [i_0])));
                arr_6 [i_0] [i_0] = ((-((((max((arr_3 [i_0] [i_0]), 1580950757))) ? var_8 : -1580950749))));
            }
        }
    }
    #pragma endscop
}
