/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_0] = 1112524436;
                var_10 -= min(396572529, -1112524437);
                var_11 = (min(var_11, ((((-90 ? ((min(204, (-9223372036854775807 - 1))) : 7757319132858802947)))))));
            }
        }
    }
    var_12 = (min(var_2, var_1));
    var_13 = ((!((((var_9 <= 3522594948432633117) * ((var_2 ? var_1 : 56)))))));
    #pragma endscop
}
