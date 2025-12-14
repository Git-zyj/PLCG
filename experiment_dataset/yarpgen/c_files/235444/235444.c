/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((~(((var_1 + 2147483647) << (var_6 - 8802))))) ^ ((((((var_1 ? var_3 : var_7))) == ((var_3 ? var_2 : var_9))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [11] = ((((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [1]))) & (~65535)))) ? ((~(arr_0 [i_0]))) : (((((((arr_1 [i_0]) ? (arr_1 [10]) : (arr_0 [i_0])))) ? (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [9]))) : (arr_1 [i_0]))))));
        var_12 -= (arr_1 [i_0]);
        var_13 = ((57344 ? 18446744073709551615 : 195));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 10;i_1 += 1) /* same iter space */
        {
            arr_6 [4] = arr_1 [i_1];
            var_14 = (arr_1 [i_0]);
        }
        for (int i_2 = 1; i_2 < 10;i_2 += 1) /* same iter space */
        {
            var_15 = (min(var_15, (((((((((-(arr_7 [13] [i_0] [i_0])))) ? (((arr_1 [i_2]) ? (arr_3 [i_0] [i_2]) : (arr_3 [i_2 + 1] [i_0]))) : (((arr_1 [i_2]) ? (arr_9 [i_2] [i_2 - 1] [i_2]) : (arr_9 [i_0] [i_0] [i_0])))))) ? (arr_4 [i_0]) : ((-(((arr_7 [i_2] [i_0] [i_0]) ? (arr_7 [2] [i_2] [i_2]) : (arr_5 [i_0]))))))))));
            var_16 = (((((((((arr_8 [i_0] [i_0] [i_2]) ? (arr_4 [i_0]) : (arr_9 [i_0] [i_0] [9])))) ? ((((arr_8 [i_0] [i_0] [i_2]) ? (arr_8 [i_0] [i_2] [i_2]) : (arr_8 [i_0] [i_0] [i_2])))) : (((-127 - 1) ? 18446744073709551613 : -756196964))))) ? (arr_5 [i_0]) : (((((arr_7 [i_0] [i_0] [i_0]) - (arr_8 [i_0] [7] [i_2]))) * (((arr_1 [i_2]) >> (((arr_7 [i_2 + 2] [8] [i_0]) - 124))))))));
        }
        var_17 = ((((((605158168 ? 2097024 : (arr_0 [i_0]))) / (((-(arr_8 [i_0] [i_0] [i_0])))))) * ((((arr_1 [i_0]) ? (((arr_4 [i_0]) ? (arr_4 [i_0]) : (arr_8 [i_0] [10] [i_0]))) : (arr_3 [i_0] [i_0]))))));
    }
    #pragma endscop
}
