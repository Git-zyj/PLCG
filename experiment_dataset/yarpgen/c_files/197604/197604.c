/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((~((~(1075532470 ^ var_3)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] = ((-(1075532463 && 1)));
        var_12 = ((((((arr_1 [i_0]) ? var_1 : 1182145451))) || (var_10 != var_3)));
        var_13 = arr_0 [i_0];
        var_14 = (min(var_14, -3219434811));
        var_15 += (((arr_0 [i_0]) ? (arr_2 [i_0] [i_0]) : ((33554431 ? 3219434825 : (arr_3 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
        {
            var_16 = (arr_10 [i_1]);
            var_17 = (max(var_17, 1075532461));
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
        {
            arr_14 [i_1] [i_1] = (arr_12 [i_1] [i_3]);
            var_18 = (min(var_18, ((((~147) ^ (arr_6 [i_1]))))));
            var_19 = (arr_7 [i_1] [i_3]);
        }
        arr_15 [i_1] [i_1] = -3112821817;

        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            arr_19 [i_1] [i_4] = ((1182145446 ? (arr_5 [i_1]) : 1));

            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                var_20 = 3112821861;
                arr_22 [i_1] [i_4] [i_1] = var_6;
            }
            for (int i_6 = 3; i_6 < 16;i_6 += 1)
            {
                var_21 += (((arr_7 [6] [i_6 - 1]) ? (arr_7 [14] [i_6 - 2]) : (arr_7 [14] [i_6 - 3])));
                var_22 -= ((!(arr_10 [i_6 + 1])));
                arr_25 [i_1] [i_4] [i_6 + 2] [i_1] = (((arr_9 [i_1] [i_6 - 3]) || (~1)));
            }
            arr_26 [i_1] = (1 ? -6738908962373872828 : 1182145449);
        }
        var_23 |= (((~(arr_7 [1] [i_1]))));
        var_24 = (max(var_24, ((var_10 && (arr_24 [i_1] [12] [i_1] [i_1])))));
    }
    var_25 = ((-((~((var_2 ? var_10 : var_8))))));
    #pragma endscop
}
