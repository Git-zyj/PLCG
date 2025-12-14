/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_0 ? (min(9, ((var_16 ? 10562086366005847504 : var_9)))) : (((var_7 ? var_11 : (var_6 + -1))))));
    var_18 = var_13;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            arr_4 [i_0] [i_1] [i_1] |= (((arr_2 [6] [i_1] [i_0]) != 0));
            var_19 = arr_3 [i_0] [i_1] [i_0];
            arr_5 [i_0] [i_0] = (((arr_1 [i_0]) ? var_2 : ((2 ? (arr_0 [i_0]) : 1))));
        }
        var_20 = 54567;
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_21 = (arr_7 [i_2]);

        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_22 = (min(4, (((var_13 & var_6) ? var_6 : ((1 ? (arr_8 [i_2]) : 14494))))));
            arr_12 [0] [0] = (!1);
        }
        var_23 = (min(var_23, ((((((((((var_11 >= (arr_11 [i_2]))))) - ((1 ? 39255 : (arr_9 [21])))))) ? ((min(1, 0))) : (min((((var_5 ? -119 : (arr_6 [i_2])))), ((var_11 ? (arr_6 [i_2]) : 13665341436895806068)))))))));
    }
    var_24 = (max(var_24, (((((max(16406951849659880687, var_12))) ? var_15 : (((((-1809574246865870903 || var_15) == -24065)))))))));
    var_25 = ((268435455 ? 0 : 127));
    #pragma endscop
}
