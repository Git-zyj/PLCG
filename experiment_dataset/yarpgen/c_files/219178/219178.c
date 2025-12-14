/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= (max((((var_1 && var_11) << ((min(1, 1))))), (max((var_6 <= var_3), (var_18 & var_10)))));
    var_20 = (max(var_20, ((min((!1), var_5)))));
    var_21 = ((min(var_2, var_4)) >= var_12);

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_22 *= ((((((!(arr_0 [i_0] [i_0]))))) & ((-(arr_1 [i_0])))));
        arr_2 [i_0] [i_0] = (((((arr_0 [i_0] [13]) >> ((((arr_1 [i_0]) > var_12)))))) || ((((((((arr_1 [i_0]) == (arr_1 [i_0]))))) * ((var_1 ^ (arr_1 [i_0])))))));
        var_23 = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_6 [i_1] = (arr_5 [i_1] [i_1]);
        arr_7 [i_1] = (1 ^ 19);
        var_24 = ((((!(max(1, var_14))))) & ((-691431867 / (arr_1 [i_1]))));
        var_25 = min(9223372036854775807, 252);
    }
    #pragma endscop
}
