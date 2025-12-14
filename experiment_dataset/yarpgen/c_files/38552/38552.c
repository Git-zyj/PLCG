/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 = (arr_0 [i_1] [i_2]);
                    var_18 ^= (max(8734048057974419102, (((-1461797447 ? 12 : (arr_2 [i_2 - 1]))))));
                    var_19 *= (((((var_3 ? var_12 : var_10)) ? ((8734048057974419102 ? var_8 : var_13)) : (var_8 | var_6))));
                    arr_7 [i_2] = (min((min((min(8734048057974419102, var_8)), (((var_5 ? -125 : 0))))), 1062952862));
                    var_20 = ((-(min(((var_1 ? (arr_6 [i_0] [i_1] [i_2]) : 16402202322845839791)), ((max((arr_5 [i_0] [1] [1]), var_5)))))));
                }
            }
        }
    }
    var_21 = -var_10;
    var_22 -= var_4;
    #pragma endscop
}
