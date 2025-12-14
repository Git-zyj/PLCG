/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~var_5);
    var_14 = 99;
    var_15 = (((((((512 ^ 512) >= -1835695753)))) < ((~((var_11 ? var_7 : var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            {
                var_16 = ((((~var_2) / (arr_0 [i_0 + 1] [i_0 - 1]))) * (((var_2 <= (!51342)))));
                var_17 = min((arr_0 [i_0 - 1] [i_1 + 4]), ((-var_9 / (arr_1 [i_0 + 1]))));
            }
        }
    }
    #pragma endscop
}
