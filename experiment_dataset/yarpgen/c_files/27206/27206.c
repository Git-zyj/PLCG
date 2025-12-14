/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_16 = arr_1 [i_0];
                var_17 = (((~(arr_3 [i_1 + 2] [i_0] [i_0 - 2]))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        arr_8 [12] = 14;
        var_18 = (((arr_5 [i_2 - 1]) ? (!562867375) : (arr_6 [i_2 - 1])));
        var_19 = (arr_5 [i_2]);
    }
    var_20 = ((((((((1 ? 590765603 : var_5))) ? (~var_11) : (max(var_0, 4))))) ? (((min(var_2, -12986)) & var_13)) : -1562823567));
    #pragma endscop
}
