/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((min(0, var_8)) * (((min(var_5, var_9))))))) ? ((((((var_4 ? var_3 : var_5)) + 2147483647)) >> var_5)) : (((((var_7 ? var_7 : var_5))) ? -var_4 : var_9))));
    var_16 |= ((1 >> (4294967289 - 4294967280)));
    var_17 = 6844087834673068473;

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = (min((max((min(var_13, (arr_1 [i_0]))), var_7)), ((((var_5 ? 4294967295 : 1383005628)) << (var_11 < var_1)))));
        arr_5 [i_0] = (arr_1 [i_0]);
        var_18 = (max((((var_13 > (arr_1 [i_0 - 2])))), (((arr_1 [i_0 - 2]) ? (arr_1 [i_0 - 2]) : var_13))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_19 = ((6272 ? -5 : 2638286929600523536));
        var_20 = (((((var_0 / ((var_8 ? var_2 : var_13))))) || (arr_7 [i_1])));
        arr_8 [i_1] = ((((-(arr_7 [i_1])))) ? ((((~1) ? var_6 : var_4))) : (min((min(8026913048152562721, var_1)), (arr_2 [i_1] [i_1]))));
        var_21 = ((-(((arr_6 [i_1]) * var_10))));
    }
    #pragma endscop
}
