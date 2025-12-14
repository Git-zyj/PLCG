/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += (-3880047260405140942 + 3107696209);
    var_20 = ((var_1 > ((~(max(var_14, var_12))))));
    var_21 = ((var_11 ? ((var_10 - (min(2147253812, 1211184953)))) : ((~((var_14 ? var_2 : 0))))));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_22 = 93;
        var_23 *= ((var_8 * (((var_5 <= (arr_0 [i_0 + 1]))))));
        var_24 -= ((((((arr_1 [i_0 - 2]) + 1))) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 1])));
        arr_2 [i_0] = (min(var_1, ((((((!(arr_0 [i_0 - 1])))) * (var_17 <= var_1))))));
    }
    var_25 = ((var_10 < (144 | 1)));
    #pragma endscop
}
