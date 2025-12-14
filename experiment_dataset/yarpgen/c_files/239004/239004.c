/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_0));
    var_19 = var_12;

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = ((((((arr_2 [i_0 - 1]) ? (arr_2 [i_0 + 2]) : (arr_2 [i_0 + 2])))) && (arr_2 [i_0 + 2])));
        var_20 = ((-((((((-97 + 2147483647) << (((((arr_2 [i_0 + 3]) + 117)) - 25))))) ? var_4 : (arr_2 [i_0 + 2])))));
        var_21 = (max((max((max(9223372036854775802, (arr_2 [i_0]))), ((-32760 ? -8409423124641951122 : (arr_2 [i_0]))))), ((((((!(arr_2 [i_0])))) + (4294967295 >= var_10))))));
    }
    var_22 = var_9;
    #pragma endscop
}
