/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += (min(((var_15 ? var_14 : var_12)), (max(1308709354, var_16))));
    var_19 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_20 -= 21271;
                arr_5 [i_1] = var_5;
                var_21 |= ((((!(((-21271 ? var_16 : 9223372036854775807))))) ? (((min((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_1 - 1]))))) : ((var_3 ? (((var_10 ? var_14 : 21271))) : -6086856155579759978))));
                var_22 *= (var_5 >= var_12);
                var_23 &= -1;
            }
        }
    }
    #pragma endscop
}
