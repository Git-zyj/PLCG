/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_1] [14] [19] = (((((~0) < (max(var_4, 4294967295)))) ? (arr_3 [i_0]) : ((((3271797492 == (arr_0 [i_1])))))));
                arr_8 [i_1] = (i_1 % 2 == 0) ? ((((var_4 << (((arr_6 [i_1]) + 1788580630)))))) : ((((var_4 << (((((((arr_6 [i_1]) - 1788580630)) + 1062094937)) - 3))))));
                var_10 = ((3 ? 4294967293 : (51551 || 2610170845)));
            }
        }
    }
    var_11 = ((-6508189106129726696 - (((((-2147483634 ? var_2 : var_3))) ? (max(-4313996349786045045, 2769372988)) : -var_4))));
    #pragma endscop
}
