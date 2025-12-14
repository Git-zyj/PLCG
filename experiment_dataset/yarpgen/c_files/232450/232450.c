/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((max(var_13, var_3))) >= var_0)) ? var_2 : ((var_8 ? (max(var_8, var_9)) : var_10)));
    var_15 = (((((var_2 ^ ((var_1 ? var_13 : 130))))) || 2047));
    var_16 = var_6;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_17 = (arr_4 [i_0] [i_0] [i_1]);
            var_18 = ((-(min((min(3235297090, var_9)), (4095 | var_9)))));
        }

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_19 = ((((min((min(var_12, 9)), 5995591552948448355))) ? 5995591552948448350 : var_6));
            var_20 = var_12;
        }
        for (int i_3 = 2; i_3 < 21;i_3 += 1)
        {
            var_21 = (((var_7 & ((var_7 ? (arr_0 [i_3 - 1]) : var_1)))));
            var_22 = (arr_7 [i_0] [20]);
        }
        for (int i_4 = 1; i_4 < 22;i_4 += 1)
        {
            var_23 = ((var_3 ? (min(155, (arr_4 [i_4] [i_4] [20]))) : var_10));
            var_24 = -14016;
            var_25 = (-13991 == -13979);
        }
    }
    #pragma endscop
}
