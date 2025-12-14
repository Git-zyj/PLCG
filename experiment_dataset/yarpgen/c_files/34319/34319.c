/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;
    var_19 = (((((((max(var_0, var_4))) ? ((var_16 ? var_3 : var_0)) : ((var_10 ? var_8 : var_4))))) ? (max(((var_1 ? var_13 : var_11)), var_8)) : (((((var_3 ? var_1 : var_2)))))));
    var_20 = ((var_13 ? ((var_14 ? ((var_5 ? var_4 : var_14)) : (((var_8 ? var_6 : var_11))))) : (((32767 ? 1000563558 : 90596666)))));
    var_21 = (((-9223372036854775807 - 1) ? (((-32766 ? -31220 : -1))) : (((((var_4 ? var_13 : var_14))) ? (((var_5 ? var_11 : var_10))) : var_1))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_22 = (((((((arr_1 [i_0]) ? (arr_0 [14]) : (arr_0 [i_0])))) ? (arr_0 [i_0]) : (arr_1 [i_0]))));
        var_23 = (((((((min((arr_1 [i_0]), (arr_0 [i_0])))) ? (((arr_1 [3]) ? (arr_0 [3]) : (arr_0 [i_0]))) : (((arr_0 [i_0]) ? (arr_0 [1]) : (arr_1 [i_0])))))) ? (((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : ((((((arr_0 [i_0]) ? (arr_1 [1]) : (arr_0 [i_0])))) ? (arr_0 [8]) : (arr_0 [10])))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_24 = ((min((((arr_0 [1]) ? (arr_2 [i_1] [i_1]) : (arr_0 [3]))), (((arr_1 [i_1]) ? (arr_2 [i_1] [i_1]) : (arr_0 [i_1]))))));
        var_25 = (((min((arr_1 [i_1]), (arr_1 [5])))));
        arr_4 [i_1] [i_1] = (max((((arr_3 [i_1] [i_1]) ? (min((arr_0 [i_1]), (arr_1 [16]))) : (arr_2 [i_1] [11]))), 1));
        var_26 = (min(var_26, (arr_2 [i_1] [i_1])));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_27 = (max(-32767, ((((max((arr_1 [i_2]), (arr_1 [i_2])))) ? (((0 ? 26905 : -32767))) : (((arr_6 [i_2]) ? (arr_5 [3]) : (arr_1 [i_2])))))));
        var_28 = ((-32761 ? 141 : -28648));

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            arr_10 [i_2] [i_2] = max(-54, 32780);
            var_29 = (arr_9 [i_2] [i_2] [i_2]);
        }
        var_30 = (min(127, 32765));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        arr_13 [i_4] = (((((-32768 ? 101 : 141))) ? (((((-1 ? 3968 : -32784))) ? -8533420034100980120 : -26)) : ((1 ? 31219 : (arr_12 [i_4])))));
        var_31 = (((((197 ? 332078497 : -32781))) ? ((((((arr_1 [i_4]) ? (arr_12 [11]) : (arr_7 [i_4])))) ? (arr_8 [i_4] [i_4]) : (arr_8 [i_4] [i_4]))) : (arr_1 [i_4])));
        var_32 = (arr_9 [i_4] [i_4] [i_4]);
    }
    #pragma endscop
}
