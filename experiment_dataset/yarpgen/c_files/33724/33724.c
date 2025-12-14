/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= var_13;
    var_19 = (min(var_19, var_14));
    var_20 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = (min(34220, (var_8 < 2920)));
                var_21 = (max(var_21, ((max(0, 62616)))));
                arr_8 [i_0] = (max(((-(min(var_1, 14524602703738886124)))), ((((!0) ? -39 : ((var_12 ? 34406 : 4138)))))));
                var_22 -= ((!((max((var_8 || -84), (min(4078910452, -4096)))))));
            }
        }
    }
    #pragma endscop
}
