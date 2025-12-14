/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_3, ((min(var_4, var_1)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_13 = (max(var_13, (((max(var_4, var_10))))));
            arr_4 [i_0] [i_1] [i_0] = (min(var_0, ((((max(1394, var_11))) ? var_6 : ((var_5 ? 2213403211594586745 : var_8))))));
        }
        arr_5 [i_0] = (+-0);
        var_14 = -107;
        arr_6 [i_0] [i_0] = ((var_7 - ((~(arr_1 [i_0])))));
        var_15 = -123;
    }
    for (int i_2 = 2; i_2 < 24;i_2 += 1)
    {
        var_16 = ((((arr_9 [i_2 + 1]) || var_11)) ? (arr_8 [i_2 - 2]) : (((!(arr_8 [i_2 - 1])))));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
        {
            arr_14 [i_2] = ((var_9 ? ((-(arr_10 [7]))) : ((-(arr_7 [i_2])))));
            arr_15 [7] [7] = (((arr_11 [i_2 + 1]) ? (arr_9 [i_2 - 1]) : (!var_10)));
            arr_16 [i_2] [i_2] = var_5;
            arr_17 [i_2] [i_2] [16] = (((arr_7 [i_2 - 2]) ? var_5 : var_0));
        }
        for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
        {
            var_17 = (((((29701 + (-108 != var_5)))) ? ((max((arr_13 [i_2 - 2]), (max((arr_19 [i_2]), var_5))))) : var_0));
            arr_21 [i_4] [i_2] = (max((((var_3 ? (arr_20 [i_4] [8]) : (arr_20 [i_2 - 2] [i_4])))), (min((arr_13 [i_2 - 2]), ((var_7 ? var_6 : (arr_8 [i_2])))))));
        }
    }
    #pragma endscop
}
