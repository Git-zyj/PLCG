/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = arr_0 [i_2];
                    var_12 = (min((max((min(var_5, var_6)), ((((arr_3 [i_1]) != var_5))))), ((((((var_3 ? 1828560334 : 56534))) ? ((var_8 ? var_7 : var_3)) : (arr_6 [i_0]))))));
                }
            }
        }
    }
    var_13 = (max(var_13, ((max((!var_2), ((var_6 != (var_1 != var_3))))))));
    var_14 = var_10;
    var_15 = var_10;
    #pragma endscop
}
