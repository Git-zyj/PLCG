/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((var_2 ? (arr_1 [i_0] [i_0]) : var_7));
        var_13 = var_0;
        var_14 = ((((((((var_4 ? var_12 : var_12))) ? (~var_4) : ((var_11 ? var_1 : var_11))))) ? (((arr_1 [i_0] [i_0]) ? var_6 : (arr_0 [i_0]))) : ((-(arr_0 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_15 = (((arr_7 [i_1] [i_1] [i_2]) ? ((((!(arr_7 [1] [i_2] [i_2]))))) : ((var_7 ? var_7 : var_0))));

            for (int i_3 = 2; i_3 < 11;i_3 += 1)
            {
                var_16 = var_3;
                var_17 = (((arr_0 [i_3]) ? var_4 : var_3));
                var_18 = (~var_1);
            }
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_19 = (~var_8);
            var_20 = ((var_3 ? (((arr_7 [i_1] [i_4] [i_1]) ? var_9 : var_9)) : ((var_4 ? (arr_5 [i_1]) : (arr_13 [i_1])))));
            var_21 -= var_3;
            var_22 = ((((((arr_9 [i_1] [i_1] [i_1] [i_1]) ? var_5 : var_11))) ? var_8 : (~var_0)));
            var_23 -= (~var_6);
        }
        var_24 = (((((var_3 ? var_1 : var_12))) ? var_4 : var_12));
        var_25 = (((!var_8) ? (arr_5 [i_1]) : (arr_3 [i_1])));
    }
    var_26 |= ((var_0 ? 1 : 524287));
    #pragma endscop
}
