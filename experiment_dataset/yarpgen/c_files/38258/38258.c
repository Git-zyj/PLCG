/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_1] = (max((~1), ((min((arr_1 [i_0] [i_0 - 2]), (min(1, (arr_4 [i_0] [i_0] [i_1]))))))));
                arr_6 [i_1] [i_1] = (((((arr_4 [i_0 + 1] [i_0 - 3] [i_1 - 1]) | (arr_4 [i_0 - 1] [i_0 - 2] [i_1 + 1]))) >> ((((5851246804220902731 + (arr_4 [i_0 + 1] [i_0 - 1] [i_1 - 1]))) - 5851246804220902727))));
            }
        }
    }
    var_13 = var_0;
    var_14 &= (((var_10 ? (((1 << (var_11 + 678301393369376213)))) : (max(var_10, 9223301668110598144)))) != (1 * var_2));
    var_15 = ((+(min((!var_5), var_0))));
    #pragma endscop
}
