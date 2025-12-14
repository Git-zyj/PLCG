/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((((!(~38977)))), (var_9 / var_10)));
    var_13 &= var_2;

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_1 [i_0 - 4] [i_0 + 2]) ? (min(var_6, ((((arr_1 [i_0] [i_0 + 2]) ^ 8064))))) : (((((min(var_3, (arr_1 [i_0] [i_0 + 2])))) ? ((5 ? (arr_2 [i_0]) : var_5)) : (!var_2))))));
        arr_4 [6] |= (min((arr_0 [i_0 + 2]), (((5689 ? (arr_1 [1] [i_0 - 4]) : (arr_1 [i_0] [i_0 - 1]))))));
        arr_5 [i_0] |= ((~((((((202 ? -6666 : 1)) + 2147483647)) >> (((arr_1 [i_0 - 4] [i_0 - 4]) - 309302776))))));
        var_14 &= (((min((arr_2 [i_0 - 3]), (arr_0 [i_0 - 4]))) + (((((arr_0 [i_0 - 3]) < 92862574749120037))))));
        arr_6 [i_0 - 1] |= ((-(((((arr_0 [i_0]) > (arr_2 [i_0])))))));
    }
    #pragma endscop
}
