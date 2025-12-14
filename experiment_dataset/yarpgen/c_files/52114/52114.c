/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!(2706992455 == 1587974854)));
    var_12 = (((((-((1587974853 ? 51810 : (-9223372036854775807 - 1)))))) ? var_5 : (1719745314 | 1)));
    var_13 = ((2706992462 || ((((var_2 ? var_8 : 51803)) != (!var_0)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((var_9 ? var_10 : (arr_1 [i_0])));
        var_14 = (((arr_0 [i_0]) ? ((var_10 + (var_1 / 51806))) : ((((!(arr_2 [i_0])))))));
        arr_4 [i_0] = ((-var_7 / (51780 <= var_2)));
    }
    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {
        var_15 = (2706992460 >= 4403);
        var_16 = ((((arr_6 [i_1]) % 1)));
    }
    #pragma endscop
}
