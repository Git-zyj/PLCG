/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((((-11 ? var_8 : var_1)) + ((max(var_0, -58)))))) ? var_10 : var_2));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((arr_2 [i_0]) + (arr_0 [i_0] [i_1])));
                var_15 = ((((76 ? ((max(5, (arr_4 [i_1] [i_0])))) : var_10)) <= var_10));
                var_16 = (max(-126, (128 + 21)));
            }
        }
    }
    var_17 = ((var_3 % (min(((max(var_12, var_13))), var_11))));
    #pragma endscop
}
