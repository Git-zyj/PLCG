/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= min((((((max(var_8, var_8))) & ((var_1 << (var_1 - 114)))))), var_2);
    var_11 -= ((((max((var_5 || var_8), var_8))) || (2577011232 && 24823)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [4] [6] [i_0] |= ((+(((arr_2 [i_0]) ^ var_4))));
                var_12 = (max(var_12, (((47 && 1717956063) != (((arr_0 [i_0]) + (var_1 * var_1)))))));
            }
        }
    }
    var_13 = var_7;
    #pragma endscop
}
