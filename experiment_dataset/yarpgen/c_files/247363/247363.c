/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = arr_2 [i_0] [i_1] [i_1 - 1];
                var_21 = (arr_0 [i_0 + 1]);
                var_22 *= (((arr_3 [i_1 - 1] [i_0]) & (((((((arr_1 [i_0]) & (arr_1 [i_0 + 1]))) == (arr_4 [i_0 - 2])))))));
            }
        }
    }
    var_23 = (max(var_23, (((var_9 << ((((var_7 | (var_5 * var_8))) - 8437408270102610227)))))));

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_7 [i_2] = (arr_6 [i_2]);
        arr_8 [i_2] = (arr_0 [i_2]);
        var_24 = (arr_5 [3]);
    }
    #pragma endscop
}
