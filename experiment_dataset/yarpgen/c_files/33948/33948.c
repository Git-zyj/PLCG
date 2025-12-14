/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_6 ? ((((var_12 > ((min(-17, var_18))))))) : (((var_13 & var_19) & (9223372036854775807 + 18446744073709551603)))));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = ((-(arr_0 [i_0])));
        var_21 = arr_1 [i_0 - 1];
        arr_3 [i_0] = (~-2515268672820328324);
        var_22 = (max(var_22, (arr_1 [i_0 - 2])));
        var_23 += ((((((144 | (arr_0 [i_0])))) ? ((16 ? (arr_0 [i_0]) : 1)) : 0)));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_24 = (max(var_24, (((5 ^ (((arr_6 [i_1]) ? (arr_6 [i_1]) : (arr_6 [i_1]))))))));
        arr_8 [i_1] = ((-19 + (((arr_4 [i_1]) + 1))));
    }
    for (int i_2 = 3; i_2 < 8;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            arr_14 [i_2] [i_2] = ((!(~251)));
            var_25 ^= 25;

            /* vectorizable */
            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                arr_19 [i_2] [i_2] [10] [i_2] = (arr_0 [i_3]);
                var_26 = (((((-10272 ? (arr_11 [i_2 - 3]) : (arr_1 [i_2 + 3])))) ? (arr_12 [i_2 - 2]) : -9475));
            }
        }
        var_27 = -1;
        var_28 = (arr_15 [i_2]);
    }

    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
    {
        var_29 ^= (max((max((max(8212591619097309475, (-127 - 1))), ((((arr_5 [i_5] [i_5]) ? (arr_7 [i_5]) : 33609))))), ((max((((arr_7 [i_5]) && (arr_7 [i_5]))), ((-28509 && (arr_4 [i_5]))))))));
        arr_23 [i_5] = (((1 << ((1 >> (-57 + 67))))));
        var_30 -= ((-((((16 > 65535) > (arr_22 [i_5]))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
    {
        var_31 = (arr_21 [i_6]);
        arr_26 [i_6] = ((~(((arr_5 [i_6] [i_6]) ? (arr_20 [i_6]) : (arr_6 [i_6])))));
        arr_27 [i_6] |= -13306;
        var_32 = (-10 | 14856);
    }
    #pragma endscop
}
