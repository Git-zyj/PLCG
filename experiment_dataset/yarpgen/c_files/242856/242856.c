/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= (((((max(var_12, -20))) ? var_10 : -16)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = (!var_0);
                var_18 |= (-32 ^ -5495638940529661631);
                var_19 = max((((252 ? ((((arr_0 [0]) != (arr_3 [i_1] [i_1])))) : ((var_9 ? var_4 : -20))))), (-var_10 % var_4));
            }
        }
    }
    var_20 = (min(var_20, ((((!1) && var_5)))));

    for (int i_2 = 3; i_2 < 19;i_2 += 1)
    {
        arr_10 [13] [3] = var_12;

        /* vectorizable */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            var_21 = (max(var_21, 133693440));
            var_22 = (max(var_22, (((9 ? -5495638940529661631 : 2097151)))));
        }
        var_23 ^= (arr_2 [i_2]);
    }
    for (int i_4 = 3; i_4 < 15;i_4 += 1)
    {
        var_24 = ((-5495638940529661631 ? 133693440 : 32749));
        var_25 = 8;
    }
    #pragma endscop
}
