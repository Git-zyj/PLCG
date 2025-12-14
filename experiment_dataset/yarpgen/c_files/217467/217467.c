/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;
    var_16 &= -8462977926015011797;
    var_17 = 255;
    var_18 = var_13;

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0 + 1] = (((((((1811480635778904885 ? -8462977926015011770 : 0))) ? (4339 && 116) : ((0 ? (arr_0 [i_0]) : (arr_0 [i_0]))))) * (((((arr_1 [i_0] [i_0]) - (arr_1 [i_0] [i_0]))) / (arr_1 [i_0 - 3] [i_0 + 2])))));
        arr_3 [i_0] = (((min((min(3840, (arr_0 [i_0 - 1]))), 127)) % (18446744073709547776 && 12048197811772900230)));
        var_19 = (min(158, 2634003316));
        var_20 = (arr_0 [i_0 - 1]);
    }
    for (int i_1 = 4; i_1 < 10;i_1 += 1)
    {
        var_21 *= ((var_12 & (~0)));
        arr_8 [6] = ((+(((arr_4 [i_1 + 1] [i_1 - 1]) ? (arr_4 [i_1 - 2] [i_1 + 2]) : (arr_4 [i_1 - 2] [i_1 - 3])))));

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            arr_11 [i_1] [i_1] = (min(((0 ? (arr_10 [i_1 + 2]) : 0)), (((!(-127 - 1))))));
            arr_12 [i_1 + 2] [i_2] = (min((!0), (arr_4 [i_1 + 1] [i_1 + 1])));
            arr_13 [i_1] [i_2] [1] = ((var_5 ? ((((-1 / -1201570080) & 97))) : (min(-8462977926015011770, ((max(-127, 193)))))));
            var_22 = (min(65535, (((((42 ? (arr_10 [i_1]) : (arr_4 [i_1 - 2] [i_1 - 4])))) ? (max((-9223372036854775807 - 1), 11472)) : ((((arr_0 [1]) ? (arr_6 [i_1] [4]) : 0)))))));
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 8;i_3 += 1)
        {
            var_23 = (min(var_23, var_2));
            var_24 &= 97;
        }
        var_25 = (min((((arr_0 [i_1 + 1]) ? var_2 : (arr_0 [i_1 - 3]))), var_9));
    }
    #pragma endscop
}
