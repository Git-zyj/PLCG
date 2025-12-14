/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((min(((var_11 ? (9223372036854775807 || var_9) : var_1)), (((44371 ? 255 : -26523))))))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_15 = ((((((~var_10) ? (!14) : (1 >= var_13)))) ? (arr_1 [i_0 - 1]) : (((((min((arr_1 [i_0 - 1]), var_0))) && (arr_0 [i_0]))))));
        arr_2 [i_0] = ((~(arr_1 [i_0])));
        var_16 = ((~((~((4294967283 ? var_7 : (arr_0 [i_0])))))));
        var_17 = ((((min((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1])))) ? ((var_3 - (arr_1 [i_0 + 1]))) : ((((arr_1 [i_0 + 1]) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 + 1]))))));
        var_18 = ((var_4 ? (~2924) : (~14069)));
    }
    #pragma endscop
}
