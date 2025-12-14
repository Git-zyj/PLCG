/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [5] [i_0] = var_4;
                var_11 &= (((arr_3 [i_1]) ? -5338250489671888404 : (((((min(55409, (arr_1 [8])))) ? (((arr_1 [8]) * var_8)) : var_7)))));
            }
        }
    }
    var_12 = 101;
    var_13 = ((((min(0, 14))) > ((max(var_9, (min(var_3, 5)))))));
    #pragma endscop
}
