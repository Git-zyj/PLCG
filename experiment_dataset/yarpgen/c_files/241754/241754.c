/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((var_6 || 2147483633), (((-1707422793 - 1) + 24))));
    var_16 = ((!37) >> (((((!var_13) + var_3)) + 348)));
    var_17 = ((((min(((24 ? 1 : 144110790029344768)), var_14))) ? (min(var_6, var_6)) : (((min(65535, (-127 - 1)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = (min((((~(-1684524265552541692 <= 1)))), ((((min(4, var_3))) ? (~144110790029344768) : ((min(1, -1)))))));
                    var_18 = (((min((min(1, 0)), -2349748324229796028)) < ((((-2147483630 ? var_10 : (arr_3 [i_0] [i_0])))))));
                }
            }
        }
    }
    #pragma endscop
}
