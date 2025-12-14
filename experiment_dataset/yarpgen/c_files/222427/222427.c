/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= var_5;
    var_17 = (max((((-(max(var_5, 2147483647))))), (max((((1080631975 ? var_2 : var_14))), (min(var_3, var_15))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_18 |= ((var_3 << ((((var_12 ? (arr_0 [i_0 - 1] [i_0 + 1]) : 25319)) - 4294967260))));
                var_19 = (max((max((arr_3 [i_0] [i_0 - 2] [i_0 - 1]), (arr_3 [i_0] [i_0 + 1] [i_0]))), (((arr_3 [i_1] [i_0 - 2] [i_0]) >> (((arr_3 [i_1] [i_0 - 3] [i_0]) - 1878072968))))));
            }
        }
    }
    var_20 = (min(((((!127) + ((min(25299, var_13)))))), (min(((max(-119, var_9))), var_15))));
    #pragma endscop
}
