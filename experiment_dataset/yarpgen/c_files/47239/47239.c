/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_15 = (arr_0 [i_0] [i_0]);
        var_16 = (max(var_16, (arr_1 [14])));
        var_17 = (min(var_17, (((var_8 ? var_9 : var_4)))));
    }
    for (int i_1 = 4; i_1 < 16;i_1 += 1)
    {
        var_18 = (min(var_18, ((min(((((max(1, var_2))) ? ((4611686017353646080 ? var_3 : 13835058056355905535)) : (((-20 ? (arr_5 [i_1 - 2]) : var_1))))), (13798563320975264647 % 19))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_19 = ((!(var_14 != 228)));
                    var_20 = var_3;
                }
            }
        }
    }
    for (int i_4 = 3; i_4 < 14;i_4 += 1)
    {
        var_21 = ((((((((4238521937 | var_3) + 9223372036854775807)) << ((((~(arr_3 [i_4]))) - 12346059416534831639))))) ? (arr_13 [3]) : var_10));
        var_22 = ((var_8 & ((((((var_8 > (arr_2 [i_4] [i_4 - 1])))) >> ((((129569197 >> (var_12 - 7561206936840386021))) - 15786)))))));
    }
    var_23 = (((((-var_14 / (max(233, var_10))))) ? -var_3 : (-var_4 / 1)));
    #pragma endscop
}
