/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= ((!var_8) != ((~(var_6 & var_8))));

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_14 = ((((+(max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))) << (min((arr_1 [i_0]), (max((arr_1 [i_0]), var_1))))));
        var_15 = ((((max((arr_1 [i_0]), (var_7 == var_4)))) && ((((((~(arr_0 [i_0 + 1] [i_0])))) ? (!var_7) : (arr_1 [i_0 + 1]))))));
        arr_2 [i_0] = (((((((-(arr_1 [i_0 + 1])))) ? (~var_4) : var_4)) | (((+(((arr_0 [i_0] [i_0 + 1]) - var_11)))))));
        var_16 = (min(((((((var_0 ? var_0 : var_12)) + 2147483647)) << (((((arr_0 [i_0] [i_0]) + var_1)) - 10240121476031975905)))), (((var_2 == var_1) ? var_2 : ((min((arr_1 [i_0 + 1]), var_12)))))));
        var_17 *= (max(((((((var_4 ? (arr_0 [i_0 + 1] [i_0]) : (arr_1 [i_0])))) || ((((arr_0 [i_0 + 1] [i_0 + 1]) ? var_9 : var_1)))))), (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_5 [i_1] = ((!((((!(arr_1 [i_1]))) && (!var_1)))));
        var_18 = ((((((((~(arr_0 [i_1] [i_1])))) ? ((((arr_0 [i_1] [i_1]) >> (var_6 - 2521856713195678691)))) : (((arr_0 [i_1] [i_1]) ? var_1 : (arr_3 [i_1] [i_1])))))) ? ((-124 ? var_10 : ((min(1, 1))))) : ((max(var_7, (((!(arr_3 [i_1] [i_1])))))))));
    }
    var_19 = var_1;
    #pragma endscop
}
