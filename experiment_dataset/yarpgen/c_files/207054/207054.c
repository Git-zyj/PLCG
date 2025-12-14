/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= ((+(((var_0 + 2147483647) << (195 - 195)))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_17 = (max((min(-1, (((arr_2 [i_0]) ? 61 : (arr_1 [i_0 - 1] [i_0 - 1]))))), (arr_2 [5])));
        arr_3 [i_0] = ((!((!(arr_0 [i_0])))));
        arr_4 [i_0 - 1] = (var_3 - 1);
        arr_5 [i_0 - 1] = ((1 & ((max(0, (min(199, -6912)))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_18 = (((((((min(1, var_11))) - (max(var_0, 0))))) ? ((max(1, 102))) : ((max(var_3, ((min((arr_6 [1]), 1))))))));
        arr_8 [i_1] [i_1] = (min((arr_7 [i_1] [i_1]), 3674994217));
        var_19 = (min(var_19, (((-(arr_7 [i_1] [i_1]))))));
        var_20 = (max(var_20, (((((((arr_6 [i_1]) + (arr_7 [i_1] [i_1]))) == ((0 ? 15112 : 1)))) ? ((((1 << (var_6 - 2960261483))))) : (((((arr_7 [i_1] [i_1]) ? (arr_7 [i_1] [i_1]) : 9007199252643840)) | ((((arr_7 [i_1] [i_1]) & 220)))))))));
    }
    var_21 = (min(((max(((var_0 ? var_8 : var_8)), 1))), (min((var_0 / 24576), var_6))));
    #pragma endscop
}
