/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= -18446744073709551595;

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_19 += (((173 | 82) / 74));
        var_20 ^= ((~((max((arr_3 [i_0]), (arr_3 [i_0]))))));
        var_21 = (min(var_21, 65524));
        var_22 = (min((var_7 <= 60), ((~(arr_0 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((+((((arr_1 [i_1] [i_1]) < (arr_0 [i_1] [i_1]))))));
        arr_8 [10] [0] = (max(var_13, ((((((25 ? var_10 : var_14))) && 1)))));
        var_23 |= var_13;
        var_24 &= arr_2 [5];
        var_25 = ((((((!var_8) ? (9223372036854775805 && var_15) : (arr_3 [i_1])))) || (arr_4 [i_1])));
    }
    var_26 = (((((0 ? var_10 : ((3 ? var_8 : var_7))))) ? ((max((88 || var_17), (!128)))) : (~var_4)));
    #pragma endscop
}
