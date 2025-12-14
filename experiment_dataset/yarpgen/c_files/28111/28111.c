/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_11 = ((min((arr_0 [i_0]), var_3)));
        arr_2 [i_0] [i_0] = 1093022011636687908;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((((min(var_1, ((((arr_4 [i_1]) ? var_3 : 32640)))))) ? var_5 : ((((((-7650239047036154118 + 9223372036854775807) >> var_1))) ? var_7 : (min(15196930902470842742, 2147483647))))));
        var_12 = (max((((-2147483647 != ((-2147483647 ? 5173289103168659083 : 0))))), (max(((var_0 ? var_6 : var_5)), (~2147483647)))));
        var_13 = 16502787553336276476;
    }
    var_14 += ((-((~((-1 ? 3 : -1375779495680351694))))));

    for (int i_2 = 2; i_2 < 10;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
        {
            var_15 = ((+((~((179 ? (-2147483647 - 1) : 16777184))))));
            arr_11 [i_2] = ((!(((((9113952446391954591 ? (arr_9 [i_2] [i_2] [i_3]) : (arr_10 [i_2]))) + (var_7 & 15))))));
        }
        for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
        {
            arr_15 [i_4] [i_4] = (max(((7493544298703703556 ? (arr_7 [i_2] [i_2]) : ((var_10 ? 77 : 21411)))), ((((((127 / (arr_13 [i_2 + 2] [i_2 - 2] [i_4])))) || (((var_6 ? var_4 : 7650239047036154097))))))));
            var_16 = (min(2047, ((12331568732027471919 ? 1011481037 : (var_7 / var_10)))));
            var_17 *= (((((arr_14 [i_2 + 2] [i_2 - 2]) || var_9)) ? (arr_7 [i_2 + 2] [i_2 - 2]) : (arr_7 [i_2 + 2] [i_2 - 2])));
        }
        var_18 = (((((var_4 ? (min(var_1, 18446744073709551597)) : (3125571331 ^ var_4)))) ? 60 : 255));
    }
    #pragma endscop
}
