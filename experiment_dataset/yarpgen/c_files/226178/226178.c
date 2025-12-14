/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, ((max(var_5, 18446744073709551609)))));

    for (int i_0 = 1; i_0 < 18;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_18 = ((((((!(arr_0 [i_0]))))) & (max(var_9, (arr_9 [i_0] [i_2] [1] [i_2])))));
                    var_19 = (min(var_19, (((29 ? 1 : ((-5 ? ((-(arr_9 [i_2] [12] [12] [6]))) : (((64 ? 1 : 8))))))))));
                    var_20 = (((((arr_7 [i_0 + 1] [i_2] [i_2] [10]) >= 2275776673)) ? (arr_7 [i_0 - 1] [i_2] [i_0 - 1] [i_2]) : (((arr_7 [i_0 + 1] [i_2] [10] [i_0]) % (arr_7 [i_0 - 1] [i_2] [i_2] [i_2])))));
                }
            }
        }
        arr_10 [i_0] [i_0] |= ((((587028897 ? (arr_4 [i_0 + 1]) : var_4)) > ((~(arr_4 [i_0 - 1])))));
        var_21 = ((var_8 ? var_0 : (((arr_1 [i_0 - 1]) ? (~var_16) : (-59 | 4975631140098195236)))));
        arr_11 [i_0] [16] = ((max(((var_16 ? var_5 : (arr_2 [i_0]))), 4294967288)));
    }
    for (int i_3 = 1; i_3 < 18;i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] = ((((min(268434432, -48))) ? (4294967288 * 1) : ((((((arr_1 [i_3]) ? (arr_9 [i_3] [i_3] [i_3] [i_3]) : 1))) ? (min(12, 3750549597)) : (64 + 96)))));
        var_22 = (var_6 ^ 12837);
    }
    for (int i_4 = 1; i_4 < 18;i_4 += 1) /* same iter space */
    {
        arr_19 [i_4] = 1;
        arr_20 [i_4] = (((min((min(-1120127056, var_2)), var_9)) != (((((9223372036854775807 < (arr_13 [i_4] [12]))))))));
        var_23 = (max(var_23, ((((((arr_2 [i_4]) && 62299)) ? (arr_8 [i_4 + 1] [i_4 + 1]) : (min(59040, (arr_8 [i_4] [i_4 - 1]))))))));
        arr_21 [9] = ((((-39 + 2147483647) << (((433126138 && 4294967288) - 1)))));
    }
    var_24 = (min(var_24, (var_9 ^ var_13)));
    #pragma endscop
}
