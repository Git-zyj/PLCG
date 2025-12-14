/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_4 [i_0] = (((1 & 1) ? 2094089161 : 33));
            arr_5 [i_0] [i_1] = (((((7541 ? 22 : (arr_2 [i_0 + 1] [i_0] [i_0 + 1])))) ? (arr_2 [i_0 + 1] [i_0] [i_0 + 1]) : (((max((arr_2 [i_0 + 1] [i_0] [i_0 + 1]), (arr_2 [i_0 + 1] [i_0] [i_0 + 1])))))));
            var_16 |= ((-((25704 ? (arr_0 [i_0]) : (arr_0 [i_0 + 1])))));
        }
        arr_6 [i_0] [i_0] = (((arr_3 [i_0] [i_0] [i_0]) * (((((var_7 ? -1 : (arr_0 [i_0])))) ? (arr_1 [i_0 + 1]) : var_8))));
        arr_7 [i_0] = (((((arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? 33 : 72057576858058752)) - ((((~-22706) * 1)))));
    }
    var_17 = (((~var_5) & (max((((32704 ? var_13 : 20726))), ((var_3 ? 20727 : var_14))))));
    var_18 = (((25704 == -24) < var_8));
    #pragma endscop
}
