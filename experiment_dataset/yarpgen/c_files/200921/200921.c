/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 *= (max((((arr_0 [i_1 - 2] [i_1 + 1]) * (arr_3 [i_1 - 2] [i_1 + 1]))), ((max((arr_3 [i_1 - 2] [i_1 + 1]), (arr_3 [i_1 - 2] [i_1 + 1]))))));
                    var_16 = var_5;
                }
            }
        }
    }
    var_17 = ((((((~((max(-1, 32767))))) + 2147483647)) << ((((var_2 - ((105 ? var_6 : var_0)))) - 4294967071))));
    #pragma endscop
}
