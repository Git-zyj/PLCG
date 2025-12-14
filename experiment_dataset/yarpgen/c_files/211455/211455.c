/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((min(var_2, (!var_2)))) + 2147483647)) << (var_0 - 2122373469));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (arr_2 [i_0] [i_0 + 2]);
        var_12 = ((((min(((0 ? (arr_0 [2] [2]) : 12077389146700199669)), (arr_2 [i_0] [i_0])))) ? var_8 : ((((min((arr_1 [i_0 + 1] [i_0]), (arr_2 [i_0] [i_0])))) ? (((arr_0 [i_0 + 1] [i_0]) << (6129010888010829792 - 6129010888010829783))) : (((max(var_4, (arr_1 [4] [i_0 + 2])))))))));
        var_13 = ((((((((arr_0 [i_0] [i_0]) ? var_2 : 12077389146700199665))) || (((var_6 ? var_9 : var_1))))) && 1));
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        arr_6 [i_1] |= ((-(arr_4 [i_1 - 1] [i_1 - 1])));
        var_14 = (min(var_14, (((!var_5) != ((-(12077389146700199665 * -2691454677212031799)))))));
    }
    for (int i_2 = 3; i_2 < 15;i_2 += 1)
    {
        var_15 ^= ((0 ? ((max(var_8, var_2))) : ((-(arr_8 [i_2 + 4])))));
        var_16 = (arr_8 [i_2 + 4]);
        arr_10 [i_2] = ((((arr_8 [i_2]) % ((max(var_5, -2147483631))))));
    }
    #pragma endscop
}
