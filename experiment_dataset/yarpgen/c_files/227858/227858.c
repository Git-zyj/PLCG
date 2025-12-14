/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_15 *= (((13787876093766754915 ? 97 : var_12)));
                var_16 -= (arr_2 [i_0] [i_0] [4]);
                var_17 = (arr_4 [i_0] [i_0] [i_0]);
                var_18 = (!0);
            }
        }
    }
    #pragma endscop
}
