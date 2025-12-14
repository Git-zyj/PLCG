/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (+(((var_9 >= var_8) ? (var_6 / var_1) : (~0))));
    var_15 &= ((6346851077696913583 ? 6584211148168339544 : 1));
    var_16 = ((var_8 ? var_3 : var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                arr_5 [2] &= (min((((0 - (arr_1 [1])))), (~0)));
                arr_6 [i_0] = ((var_13 >= (((arr_2 [9]) ? 45033 : var_11))));
                var_17 ^= (((((var_5 ? (min(2785492386, (arr_4 [i_0]))) : var_3))) ? (min(((~(arr_1 [2]))), var_6)) : (min((58 & var_11), ((127 ? var_1 : -199939782))))));
            }
        }
    }
    #pragma endscop
}
