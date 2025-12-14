/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((var_3 ? (min(268434432, 4294967295)) : (max(var_8, var_6))))) ? var_8 : (((((var_6 ? var_7 : -268434432))) ? (162 || var_0) : (max(268434448, var_0)))));
    var_12 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_13 ^= ((!(((((((arr_5 [i_0] [i_0]) ? 2438 : 0))) ? ((max(var_1, 19303))) : (max(18446744073709551615, (arr_1 [i_0] [i_1]))))))));
                    var_14 -= 0;
                }
            }
        }
    }
    #pragma endscop
}
