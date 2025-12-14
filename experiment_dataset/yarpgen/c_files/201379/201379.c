/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_11 = min(((max(((max(0, 1))), (min((arr_1 [i_0] [i_0]), var_0))))), (((max(var_10, 9145215887071981760)) * (1 == 4604984602598848323))));
                var_12 = (((((((min(var_8, 0))) || (1 || 1))))) % (max((max(18446744073709551607, 17350856548151858971)), 12)));
                var_13 = (max(18446744073709551610, 18446744073709551609));
            }
        }
    }
    var_14 = ((((((min(var_6, var_6))) % (max(var_0, var_2)))) + (((((var_1 + var_4) || ((max(-1, 1)))))))));
    #pragma endscop
}
