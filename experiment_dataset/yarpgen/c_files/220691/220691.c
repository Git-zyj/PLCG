/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-(max((!2147483633), ((var_4 >> (var_10 + 14215)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = (((var_1 > var_4) || (var_0 ^ -2997045141)));
                arr_5 [i_1] = var_9;
                var_12 = (((((arr_3 [i_1]) || (((arr_3 [i_1]) && var_7)))) ? var_2 : ((((var_4 >= (arr_1 [i_1])))))));
                var_13 *= max(((((max(var_0, var_7))) ? (~8794530804880774400) : (arr_3 [i_0]))), (((var_2 ? ((18446744073709551615 ? 749110969 : 4194303)) : (arr_0 [i_0 + 3])))));
            }
        }
    }
    #pragma endscop
}
