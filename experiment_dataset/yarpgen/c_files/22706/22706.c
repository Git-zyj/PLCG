/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((var_3 & (var_8 | 2032))) + 758883193));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
        {
            var_12 = arr_1 [i_0];
            arr_5 [i_1] [4] = (((((var_6 ? 36028659580010496 : (min((arr_0 [i_0] [9]), var_7))))) ? (((((758883201 & (arr_3 [i_1])))) ? ((min(-21713, (arr_1 [i_0])))) : 7180872888053489345)) : (((-7131744270790033373 ? (arr_0 [i_0] [i_1]) : 1173288798)))));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
        {
            arr_10 [i_2] [i_2] [i_0] = (arr_3 [i_2]);
            var_13 &= ((!((min(3443, -1)))));
            var_14 = (min(var_2, ((var_4 >> (((arr_0 [i_0] [i_2]) - 984726921))))));
        }
        var_15 = max((arr_4 [8]), (((((min((arr_8 [4] [i_0] [i_0]), (arr_8 [i_0] [12] [i_0]))))) * ((-13859 ? -3274240254725943930 : 3171171238896192763)))));
        var_16 = var_6;
        var_17 = (((arr_3 [i_0]) ? (((((arr_4 [i_0]) + 9223372036854775807)) >> (((arr_3 [i_0]) - 3278290044)))) : (arr_4 [i_0])));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_13 [i_3] &= (min(((3426 ? var_7 : 735001649)), ((((arr_11 [i_3]) - 3945103445042299496)))));
        arr_14 [11] [i_3] = (arr_12 [i_3] [i_3]);
        var_18 &= (arr_11 [i_3]);
        var_19 = (max(16536674110981465625, (arr_11 [i_3])));
    }
    #pragma endscop
}
