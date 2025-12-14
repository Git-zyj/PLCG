/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((0 ? var_6 : (!var_13)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((0 ? var_11 : (arr_0 [i_0])));
        var_18 = ((~(3 + 0)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] = (min(((var_2 ? (((arr_3 [i_1]) + 19)) : 0)), ((((21378 << (-1 + 5))) << ((var_0 ? 0 : 5))))));
        arr_6 [i_1] [i_1] = (min(((((!-5) << (41746 && 23789)))), (max(((min(-27018, 41747))), var_7))));
        arr_7 [i_1] [i_1] = (arr_0 [i_1]);
        arr_8 [i_1] = (min(((((2047 ? 0 : 12)))), ((var_14 >> (((102 >> 0) - 77))))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_12 [i_2] = (((((-20 ? -20 : 2))) / (min(((3965700780 ? 18446744073709551615 : 86)), 3965700784))));
        var_19 = ((((((((arr_9 [i_2]) / var_1)) + 2147483647)) << (255 - 255))));
    }
    var_20 = var_2;
    var_21 = (min(var_21, (((var_8 ? (min((~6127663038411806599), var_4)) : 27)))));
    var_22 = (min(var_15, 1023));
    #pragma endscop
}
