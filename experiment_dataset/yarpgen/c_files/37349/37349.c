/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= var_4;

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_21 = (((((arr_1 [i_0] [i_0]) && (arr_2 [i_0]))) ? (min((arr_0 [i_0]), var_14)) : (((var_16 & (arr_0 [i_0]))))));
        arr_3 [i_0] = var_0;

        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                var_22 ^= (arr_6 [i_1]);
                var_23 = ((((min(((min(var_4, var_14))), 3680246043))) ? (((min(644074173, (arr_5 [i_0]))) + var_4)) : (min((min(var_6, var_8)), (arr_8 [i_0] [13] [i_2 - 1])))));
            }
            var_24 = (max(var_24, ((max(((max((arr_7 [i_1] [i_1 - 1] [i_1] [i_1 - 2]), var_18))), ((644074173 ^ (arr_7 [i_1] [i_1 - 2] [i_1] [i_1 + 1]))))))));
            var_25 = (((min(((var_8 ? (arr_8 [i_1 + 1] [i_0] [i_0]) : (arr_9 [i_1] [i_1] [i_1 - 2] [11]))), (arr_1 [i_1 + 1] [i_0]))) & (~var_18)));
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {
        var_26 = ((((arr_8 [i_3] [i_3] [i_3]) >> (var_15 - 109))) & (arr_9 [i_3] [i_3] [i_3] [i_3]));
        arr_13 [i_3] [5] = 1;
        var_27 = var_7;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_28 *= ((var_7 * ((((!(arr_6 [2])))))));
            var_29 = (max(var_29, (arr_8 [i_4] [i_5] [i_5])));
            var_30 = ((((!(arr_15 [i_4]))) || (((757 ? (arr_14 [i_4]) : 614721253)))));
        }
        for (int i_6 = 2; i_6 < 14;i_6 += 1)
        {
            arr_23 [i_4] [i_4] = (((var_7 ? var_13 : var_13)));
            arr_24 [i_4] [i_4] = ((~(arr_9 [i_6] [i_6] [i_6 + 1] [i_6])));
            var_31 -= (arr_18 [6] [6]);
            var_32 = var_4;
        }
        arr_25 [i_4] = (arr_20 [i_4]);

        for (int i_7 = 1; i_7 < 14;i_7 += 1)
        {
            arr_28 [i_4] [i_7 + 1] [12] = var_10;
            arr_29 [i_4] [i_4] = ((-(arr_18 [i_4] [i_4])));
        }
        arr_30 [i_4] = (var_9 >> var_5);
    }
    #pragma endscop
}
