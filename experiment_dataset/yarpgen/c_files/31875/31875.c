/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!((var_9 >= (var_5 && var_1)))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((((((arr_1 [i_0]) ^ (min(8482099289382657050, var_1))))) || -29));
        arr_3 [i_0] = (min((((((-9223372036854775807 - 1) & (arr_0 [i_0]))) & (min(var_9, 1478106372212414055)))), ((~(var_3 | 1214421265)))));
        arr_4 [i_0] [i_0] = ((-45 == ((-29 ^ ((var_1 ? (arr_0 [i_0]) : 7669303188809794818))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_12 = (max(var_12, ((((124 - 10777440884899756797) + ((-10777440884899756780 ? var_5 : 10777440884899756765)))))));
        arr_8 [1] = ((!(arr_6 [i_1] [i_1])));
    }
    var_13 = (min(9223372036854775807, (min(((-25 ? 7669303188809794818 : var_10)), ((min(0, 58224)))))));
    var_14 = (((-25 ? 10880202698815734368 : 3289439320)));
    #pragma endscop
}
