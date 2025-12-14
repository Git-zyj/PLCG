/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_1 ? ((-(-32767 - 1))) : ((-(!var_4)))));
    var_19 = 1;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 = ((((((((-1 ? 1 : 0))) ? -32756 : 473))) ? (arr_1 [i_0] [14]) : (max((var_7 != var_9), ((2316639501 ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0])))))));
        arr_3 [2] [i_0] = ((((~(arr_1 [i_0] [i_0]))) / (arr_1 [i_0] [3])));
        var_21 = (min(var_21, (((-(!51511))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_2 + 1] = (min((((-9223372036854775807 - 1) ? var_15 : (max(1040187392, 2229)))), (arr_6 [i_0] [i_0])));
                    var_22 = 65535;
                    var_23 = ((((max((((!(arr_6 [i_0] [i_1])))), ((var_5 ? var_14 : var_9))))) ? (((4294967295 % -1) | (arr_4 [i_2 + 1] [i_2 + 1] [i_2]))) : (((((-2147483647 - 1) > -25916))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 14;i_3 += 1)
    {
        arr_14 [i_3] = 65535;
        var_24 = (arr_9 [i_3] [i_3 - 2] [i_3 - 3] [i_3 - 1]);
    }
    for (int i_4 = 1; i_4 < 13;i_4 += 1)
    {
        var_25 = (!-var_2);
        var_26 -= var_15;
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_27 = ((((min(6318863469776253092, var_5))) ? 1 : (((((var_0 ? 0 : 1))) ^ (arr_16 [i_5] [i_5])))));
        var_28 = (min(var_28, (((var_15 ? ((-(arr_18 [i_5] [i_5]))) : var_13)))));
        var_29 ^= (!(((1 ? var_3 : (((arr_11 [i_5] [i_5]) ? (arr_2 [i_5] [i_5]) : (arr_1 [i_5] [i_5])))))));
    }
    var_30 *= max(var_16, -var_5);
    #pragma endscop
}
