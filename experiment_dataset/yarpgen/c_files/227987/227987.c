/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = (min(var_13, (((min(4294967295, -16808))))));
                var_14 = (((((~((52427 ? var_6 : var_7))))) ? (((((var_2 - var_0) || (arr_2 [i_1]))))) : -var_1));
            }
        }
    }
    var_15 = (min(29163, 16808));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    var_16 -= (((((((arr_9 [i_2]) / -486781272855397335)) * var_4)) * ((max(37, ((var_11 ? var_11 : var_12)))))));
                    var_17 -= ((1 ? 1 : 234));
                }
            }
        }
    }
    var_18 = ((var_0 ? (((~((3879345295421193038 ? 55 : -501408748151505828))))) : (((max(var_9, var_8)) ^ ((min(var_5, var_4)))))));
    #pragma endscop
}
