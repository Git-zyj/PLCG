/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_15 = ((!(((((2690454168 ? var_13 : var_6))) >= (((arr_1 [i_0 - 3] [i_0]) ? (arr_3 [i_0 - 2]) : (arr_4 [i_0] [i_1])))))));
                var_16 = 63619;
            }
        }
    }
    var_17 = -29683;

    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_18 = (-1027212658899430661 ? (((max(var_12, (arr_8 [15] [15]))))) : 2690454168);
        arr_9 [i_2] = max(((((((var_3 ? 1125924672 : var_7))) ? 2690454139 : var_5))), ((max(32767, (arr_8 [8] [i_2])))));
        var_19 = ((!(~-6150353770376015675)));
    }
    #pragma endscop
}
