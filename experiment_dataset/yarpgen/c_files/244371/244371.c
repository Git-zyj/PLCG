/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 += 16718;
        var_17 = ((-(((arr_1 [i_0]) & 48817))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_18 |= (((~53758) <= 65145));
        var_19 = (((((var_15 | (arr_3 [i_1])))) || (((arr_0 [i_1] [i_1]) || ((max(var_14, -7)))))));
        var_20 = 53758;
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] [12] |= (-6978 | 7);
        arr_9 [i_2] = ((var_4 ? (min((var_9 && var_12), var_8)) : ((((-25729 && (arr_3 [i_2])))))));
        arr_10 [i_2] = -25729;
    }
    var_21 = (58695 & 39381);
    var_22 -= (((max((-1 + var_1), (var_6 != var_15)))) >= (((((48802 ? 6990 : 4294967290))) | var_6)));
    var_23 = var_12;
    var_24 = ((-var_3 > ((((var_6 ? var_10 : var_13)) * 11778))));
    #pragma endscop
}
