/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_8 | ((((!11894316735205912543) >> (var_12 - 805477802))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 = (((~(arr_2 [i_0]))));

        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            var_18 = (((arr_0 [i_1 - 1]) ? (!1) : (arr_5 [i_1] [i_0] [i_0])));
            var_19 = (min((((!(arr_5 [i_1 - 1] [i_1 - 4] [i_1 - 1])))), (((arr_5 [i_1 - 3] [i_1 - 1] [i_1 - 2]) ? (arr_5 [i_1 - 2] [i_1 - 3] [i_1 - 2]) : (arr_5 [i_1 - 2] [i_1 - 4] [i_1 - 1])))));
            arr_6 [i_0] [i_1] [i_1] = (arr_3 [i_0]);
            arr_7 [i_0] [i_1] [21] = (arr_3 [i_1]);
            arr_8 [i_0] [i_0] [i_0] = 8388592;
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_20 = (max(((~(arr_4 [i_0]))), (~10804763809578766472)));
            var_21 = (((arr_0 [i_2]) ? (!1) : (((((~(arr_2 [i_2])))) ? ((1 ? (arr_11 [i_2] [i_2]) : 1)) : (~1)))));
        }
        arr_13 [i_0] = (arr_12 [i_0] [i_0] [i_0]);
    }
    #pragma endscop
}
