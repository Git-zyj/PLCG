/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_12 ? var_9 : var_5));
    var_19 = (((((var_2 ? ((var_1 ? -1 : var_6)) : var_5))) ? var_14 : var_3));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 *= (((((var_9 ? (((arr_2 [i_0]) ? 4611404543450677248 : var_14)) : var_7))) ? ((146 ? var_4 : (arr_1 [i_0] [i_0]))) : (((-18862 ? (arr_2 [i_0]) : (arr_2 [i_0]))))));
        var_21 = (((((201 ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? ((251 ? 1 : (arr_1 [i_0] [i_0]))) : ((((arr_1 [i_0] [13]) ? var_7 : 1)))));
        var_22 = ((((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0])))) ? ((((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))) ? ((-1 ? -1 : (arr_1 [11] [11]))) : (((var_10 ? 20502 : 0))))) : ((((((arr_1 [i_0] [7]) ? var_0 : (arr_0 [i_0])))) ? (((var_11 ? 933555067 : 151))) : ((66 ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0])))))));
        var_23 -= ((((((((115 ? 216 : -26314))) ? var_5 : (((arr_1 [i_0] [6]) ? 161 : (arr_1 [i_0] [i_0])))))) ? (((20510 ? 21809 : (arr_2 [i_0])))) : (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : var_10))));
        var_24 = (((((var_14 ? var_2 : (arr_0 [i_0])))) ? (((201 ? (arr_0 [i_0]) : (arr_0 [i_0])))) : ((var_6 ? (arr_2 [i_0]) : (arr_2 [i_0])))));
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        var_25 = (((((4611404543450677253 ? -16794 : var_8))) ? (((var_1 ? ((13954 ? (arr_5 [14] [1]) : 2645287947)) : (arr_6 [i_1 + 1] [i_1])))) : (((arr_6 [i_1 - 1] [i_1 + 2]) ? ((0 ? var_8 : (arr_5 [i_1] [5]))) : (arr_3 [i_1 - 2] [i_1 + 3])))));
        var_26 |= (((((4611404543450677248 ? var_0 : 122))) ? ((((((4611404543450677250 ? var_7 : (arr_3 [1] [1])))) ? ((var_10 ? -22022 : (arr_6 [i_1] [6]))) : var_16))) : (((((var_4 ? (arr_6 [i_1] [i_1]) : (arr_6 [0] [0])))) ? 42615 : var_8))));
    }
    #pragma endscop
}
