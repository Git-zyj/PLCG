/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 -= (((((1711571066 % 1711571038) == ((((!(arr_1 [10]))))))) ? (!var_4) : ((min((arr_0 [i_0]), (arr_0 [i_0]))))));
        arr_3 [i_0] [7] = (-32767 - 1);
        var_12 = (((((~(max((arr_1 [i_0]), var_8))))) ? (((!var_7) ? var_4 : (!1533414322))) : (arr_2 [i_0])));
        arr_4 [i_0] = 0;
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        var_13 = (min(var_13, (((!((((((~(arr_5 [i_1])))) ? 4294967295 : ((var_9 ? (arr_5 [i_1]) : var_9))))))))));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_14 -= ((((((arr_6 [i_1 - 2] [i_2]) / (arr_6 [i_2] [i_1 - 1])))) ? (arr_6 [i_1] [i_1 - 2]) : ((var_1 / (arr_6 [i_1] [i_2])))));
            var_15 = (min((arr_8 [i_1 - 1] [i_1 + 1]), (((var_3 ? 1 : (arr_6 [i_2] [i_2]))))));
            arr_9 [i_1] [i_2] [i_2] = ((((((((arr_5 [i_1]) ? (arr_7 [i_1] [i_1]) : (arr_8 [i_1] [i_2])))) ? (((var_0 ? 1711571066 : 0))) : (~var_10))) ^ (((arr_7 [i_1 - 1] [i_1 + 1]) - (((((arr_5 [i_1]) <= var_2))))))));
            arr_10 [i_2] [i_2] = ((((((~var_4) ? (arr_7 [i_1 + 1] [i_1]) : ((1711571090 + (arr_7 [i_1] [21])))))) ? (((max((arr_8 [i_1] [i_2]), 5749205324564832596)))) : ((~(((arr_7 [i_1 + 1] [i_1]) | var_6))))));
            var_16 = (max(var_16, var_0));
        }
        var_17 = ((-6924241209250236537 ? (arr_8 [i_1] [i_1 + 1]) : -var_1));
    }
    var_18 = ((var_9 + var_3) | ((((var_6 & var_1) - var_3))));

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_19 = (max(var_19, (((+((((((arr_11 [i_3] [i_3]) / (arr_11 [i_3] [i_3])))) ? ((134217727 ? (arr_5 [i_3]) : var_3)) : ((((((arr_7 [i_3] [21]) + 9223372036854775807)) << (2583396230 - 2583396230)))))))))));
        arr_13 [i_3] = ((+((~((((arr_8 [i_3] [i_3]) >= (arr_5 [i_3]))))))));
    }
    #pragma endscop
}
