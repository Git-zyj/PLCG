/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_2] = (min(((5 + (214 ^ -119))), (((150 != (((arr_4 [i_0] [i_1]) ? var_11 : 171)))))));
                    arr_8 [i_0] [i_2] [i_2 - 1] = min((((!((min((arr_0 [i_1]), (arr_0 [i_1]))))))), ((((((arr_4 [i_2] [i_0]) ^ var_10))) ? ((min(var_18, (arr_1 [i_0])))) : ((min((arr_1 [1]), 16))))));
                }
            }
        }
    }
    var_19 = ((((var_11 == var_1) ? var_1 : ((var_14 ? var_17 : var_18)))) | var_1);
    var_20 += ((((1 | ((var_16 << (var_7 - 16794530052746870124))))) >> (((max(var_8, (min(var_4, 89)))) - 1413635371))));
    #pragma endscop
}
