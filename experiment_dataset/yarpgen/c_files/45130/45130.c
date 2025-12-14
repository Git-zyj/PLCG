/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((23356 ^ var_16) & (max(((min(124, 0))), (~29348)))));
    var_19 = var_17;
    var_20 = (max(var_16, ((var_13 ? var_16 : (110 & -29349)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_21 += ((!(((((min(18446744073709551615, 9550238069445025623))) ? ((18446744073709551615 ? (arr_2 [i_1]) : 1)) : ((max(29337, (arr_6 [i_0] [i_1] [i_2])))))))));
                    arr_7 [3] [i_1] [i_0] = 11651487895234844110;
                }
            }
        }
    }
    #pragma endscop
}
