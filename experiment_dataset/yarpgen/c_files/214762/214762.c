/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((max(var_2, var_0))) ? var_10 : (-9223372036854775784 & var_10))) ^ var_2));
    var_18 = var_9;

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] [i_0 + 1] = ((((((0 * 11813) ? var_5 : (arr_2 [i_0] [i_0 - 2])))) ? (((((max((arr_1 [i_0] [i_0 - 2]), var_0))) * ((var_16 ? 1 : var_11))))) : -9223372036854775784));
        var_19 = (!(((((var_3 || (arr_3 [i_0])))) <= 9223372036854775784)));
        var_20 = 56551;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_7 [i_0] = (((arr_1 [i_0 + 1] [i_0]) < (arr_5 [i_0 - 1])));
            var_21 &= ((var_4 ? ((((arr_1 [i_1] [i_0]) > var_0))) : (~var_2)));
            var_22 = (arr_3 [i_0 - 2]);
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_23 = ((arr_1 [i_0 - 2] [i_0 - 2]) ? ((((max((arr_6 [i_0] [3] [i_2]), var_0))) ? ((((849 && (arr_1 [i_0] [i_2]))))) : ((var_1 ? (arr_9 [i_0] [i_0 - 1] [i_0]) : var_12)))) : (arr_3 [i_2]));
            var_24 = 2299324493176241806;
            arr_10 [i_0] = (-1343753486135767226 ? (~-9223372036854775776) : ((((!(arr_0 [i_0] [i_2]))) ? 34077 : ((1343753486135767234 ? var_8 : (arr_0 [i_0] [i_2]))))));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_25 = (max(var_25, ((((var_16 << 1) ^ (arr_1 [i_0] [i_3]))))));
            arr_13 [i_0] [i_0] = var_1;
            var_26 &= var_0;
            arr_14 [i_0] [i_3] = ((((((((arr_1 [i_0] [i_3]) ^ (arr_5 [i_0 - 2])))) ? ((1 ? (arr_9 [i_0] [i_0] [1]) : -2793454208583354385)) : (arr_1 [i_0] [i_0])))) ? -9223372036854775784 : (((1 ? (!9223372036854775784) : var_5))));
            var_27 = ((var_11 ? (min(-3252693289955869705, (((-(arr_6 [i_0] [5] [i_3])))))) : (((var_2 ? (arr_8 [2] [i_0 - 2] [16]) : ((min(65535, 65523))))))));
        }
    }
    for (int i_4 = 1; i_4 < 13;i_4 += 1)
    {
        var_28 = var_10;
        arr_19 [i_4] = ((((arr_0 [i_4 + 3] [i_4 - 1]) | (arr_0 [i_4 + 3] [i_4 - 1]))) > (max(((-(arr_16 [i_4]))), var_15)));
        arr_20 [i_4] = var_0;
    }
    #pragma endscop
}
