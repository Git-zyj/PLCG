/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_6));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_14 = (max(49791, 2141368299));
        arr_3 [i_0] &= (max((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))), (min(var_7, (-2147483647 - 1)))));

        for (int i_1 = 1; i_1 < 24;i_1 += 1) /* same iter space */
        {
            arr_7 [i_1 + 1] [i_0] [i_0] &= ((-1418750436 >= (~7688)));
            var_15 = arr_0 [i_1];
        }
        for (int i_2 = 1; i_2 < 24;i_2 += 1) /* same iter space */
        {
            var_16 = ((27050 ? 1 : 1418750426));
            var_17 &= ((2676778604120207115 << (((max((((var_9 ? var_2 : 1))), 9223372036854775805)) - 9223372036854775751))));
            arr_10 [i_2] [i_2] [i_2] = (~1082142715);
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_18 = (min(var_18, ((((((var_2 >= (arr_12 [i_0])))) >= 0)))));

            for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
            {
                arr_16 [i_0] [i_0] [i_3] [i_4] = 62;
                var_19 = ((~((~(arr_12 [i_3])))));
            }
            for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
            {
                arr_19 [i_0] [i_5] [i_5] &= (((arr_13 [i_0]) ? var_6 : 8171488058511556253));
                var_20 = ((var_2 >= (((117 >> (190 - 176))))));
            }
        }
        var_21 = (min(var_21, 1));
        arr_20 [i_0] [i_0] = var_1;
    }
    var_22 = var_7;
    var_23 = ((var_12 + (max((1418750467 + 9793806682273738061), (((18446744073709551615 ? var_4 : 1)))))));
    var_24 &= var_7;
    #pragma endscop
}
