/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_2 << (((var_9 - -var_7) - 14625846985867482048))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 = ((((((((var_14 ? var_7 : var_6))) ? (arr_2 [1]) : (~var_2)))) ? 576460752303423487 : ((-(arr_1 [i_0] [i_0])))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [10] = ((var_14 ? 1 : ((((arr_2 [i_0]) != var_5)))));
            arr_6 [i_0] [i_0] [7] = ((-(((!(((var_13 ? 8560015885960535077 : (arr_0 [i_0])))))))));
        }
    }
    #pragma endscop
}
