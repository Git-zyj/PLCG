/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(((2727602284 ? var_1 : 59136)), (2727602276 % 2727602280)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_12 = ((((-96 >= (arr_3 [i_0] [i_0]))) ? (((arr_3 [i_1] [i_0]) % 9910209231701709527)) : ((((arr_1 [i_0] [i_1]) << (((-127 - 1) + 137)))))));
                arr_4 [i_0] [i_0] = ((-((1 ? var_6 : (~var_9)))));
            }
        }
    }
    var_13 = ((((min((((var_5 ? var_4 : 1))), (max(12897956321976707738, var_5))))) || 9223372036854775807));
    #pragma endscop
}
