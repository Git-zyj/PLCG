/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((((arr_0 [i_0]) ? (!var_5) : (((arr_1 [i_0]) ? 127 : (arr_1 [i_0])))))) ? (-127 - 1) : (((!(var_6 && -124))))));
        var_18 = ((-(arr_1 [i_0])));
        var_19 -= ((((((-124 ? 37726 : -2511931347326740459)) ? 26 : 33))));
        arr_4 [i_0] = ((~(((arr_1 [i_0]) ? -var_3 : ((2511931347326740459 ? (arr_1 [i_0]) : (arr_2 [i_0])))))));
        arr_5 [i_0] = 114;
    }
    var_20 = ((var_0 <= (min(853277550348629896, var_0))));
    var_21 = var_4;
    #pragma endscop
}
