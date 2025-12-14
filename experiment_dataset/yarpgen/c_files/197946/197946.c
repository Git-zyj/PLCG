/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= (min(var_2, (~var_3)));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] = (arr_2 [i_0]);
            var_12 = (((~1479097848773520559) ? (arr_4 [i_1] [i_0]) : (arr_4 [i_0] [16])));
            arr_7 [16] [i_1] [16] = (((arr_1 [i_1]) ? var_10 : var_2));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
        {
            arr_11 [i_0] [i_2] = (!((((arr_8 [i_0]) ? (arr_9 [i_0]) : 1125899873288192))));
            arr_12 [i_2] [i_2] [i_0] = (((var_6 * var_7) ? ((-(arr_10 [i_2] [i_0] [i_0]))) : (arr_9 [i_2])));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
        {
            arr_15 [i_0] [5] [i_0] |= -1;
            var_13 = (min(var_13, (arr_3 [1] [1] [1])));
        }
        arr_16 [i_0] [i_0] = (min((min(var_5, (arr_4 [i_0] [17]))), (((((min(var_10, 3195046535))) && (((1 ? (arr_13 [i_0] [i_0]) : (arr_5 [i_0] [i_0] [12])))))))));

        for (int i_4 = 1; i_4 < 17;i_4 += 1) /* same iter space */
        {
            arr_19 [i_4] = ((var_8 ? (((((arr_4 [i_4 - 1] [i_4 - 1]) >= (arr_18 [i_4 + 1]))))) : (min((arr_1 [i_0]), var_3))));
            var_14 = (max(var_14, ((min((arr_0 [i_0]), (arr_9 [i_4]))))));
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 17;i_5 += 1) /* same iter space */
        {
            var_15 = (max(var_15, 1942665786490651983));
            arr_24 [i_5] [i_0] = (((-23701 + 65535) ? 1893 : var_6));
        }
        var_16 = ((((min((arr_20 [i_0] [i_0]), (arr_5 [i_0] [i_0] [i_0])))) ? (min((arr_1 [i_0]), (((var_10 ? (arr_20 [i_0] [i_0]) : (arr_14 [12])))))) : (((min((!var_1), (min(0, 44))))))));
    }
    #pragma endscop
}
