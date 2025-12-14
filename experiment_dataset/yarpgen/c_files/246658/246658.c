/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= ((2163195629 || var_1) ? (((var_8 || var_9) | ((var_7 ? 2131771653 : var_5)))) : ((((2590706318 ? var_8 : 1704260985)) - (min(var_9, var_7)))));
    var_12 += ((((!(var_8 <= 1046835011)))));
    var_13 = min((~var_6), (((2590706324 < 2163195622) % var_8)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = max((((var_1 ? 262143 : 3203551460))), (((((3257147398 ? var_4 : 4294967295))) ? var_7 : ((62914560 ? var_8 : 3420900865)))));
                var_14 = 260284951;
                var_15 -= ((((((((262168 ? 0 : 2590706300)) > ((3294493604 ? var_8 : 4294967290)))))) <= (arr_2 [i_1])));
            }
        }
    }
    var_16 = 0;
    #pragma endscop
}
