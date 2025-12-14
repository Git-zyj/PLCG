/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((((var_1 ? var_4 : var_6))), ((18446744073709551610 >> (-9015127617245232788 + 9015127617245232831)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 = var_9;
                    var_13 = ((((((var_4 + (arr_0 [i_0]))) % (min((arr_2 [i_0] [i_2]), -24757))))));
                    arr_6 [i_2] [i_0] [i_0] = (((((!var_7) ^ ((448311998703332155 ? -9015127617245232761 : (arr_1 [i_1]))))) | (arr_0 [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
