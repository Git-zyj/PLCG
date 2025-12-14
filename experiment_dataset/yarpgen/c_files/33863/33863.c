/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= -1;
    var_17 = var_11;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_18 = var_12;
            var_19 = ((4063838191 ? (((arr_3 [i_1]) ? (arr_4 [i_1] [11] [i_0]) : (arr_3 [i_0]))) : ((((!(((var_5 * (arr_3 [i_0]))))))))));
            var_20 = (((arr_1 [i_0]) ? 374936763828885554 : ((((((~(arr_1 [i_1])))) ? (min((arr_2 [i_1]), (arr_1 [1]))) : (arr_0 [22]))))));
        }

        for (int i_2 = 4; i_2 < 22;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                var_21 = 18446744073709551615;
                arr_9 [i_3] = 2339469070335586651;
                arr_10 [i_3] = (max((-9223372036854775807 - 1), (((((1 ? (arr_1 [i_0]) : 31549))) ? (~var_5) : (((arr_8 [i_0]) ? var_15 : (arr_6 [0] [i_2])))))));
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                arr_15 [11] = (arr_13 [i_2 - 3] [i_2 - 4] [i_2 - 4] [i_2]);
                var_22 = (((arr_4 [i_4] [i_2 - 4] [i_0]) ? (arr_11 [i_4]) : (((arr_13 [i_0] [i_2] [i_2] [i_4]) ? var_15 : 17690))));
                arr_16 [i_0] = var_9;
                var_23 |= (((1696707638 ? var_8 : 18446744073709551608)));
            }
            var_24 = (max((((arr_6 [i_0] [i_0]) ^ (((-(arr_11 [i_0])))))), (arr_13 [i_0] [i_2] [i_2] [i_2 - 1])));
        }
        var_25 = (((171 ? -9009051441787793832 : var_12)));
        var_26 = ((+(((arr_1 [i_0]) ? (arr_5 [i_0]) : 1))));
    }
    var_27 = (max(var_27, (((-var_1 ? var_8 : ((min(-9009051441787793832, 245))))))));
    var_28 = (~var_7);
    #pragma endscop
}
