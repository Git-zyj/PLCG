/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_0 | ((((var_4 - 23261) != var_13)))));

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = ((((16009751547142316002 != var_15) ? (1547280111 || var_15) : ((((arr_2 [i_0]) != -23262))))));
        var_18 &= ((((arr_1 [i_0 + 1]) ? ((max((arr_1 [i_0 - 1]), -23263))) : ((var_0 ? (arr_0 [i_0] [i_0 + 1]) : var_2)))));
        arr_4 [16] &= (((((var_11 ? var_4 : ((((arr_0 [i_0 - 1] [i_0 + 1]) || var_2)))))) ? (23248 % 2436992526567235593) : (max(15025453703423513892, 14336))));
    }
    var_19 = ((51973 ? var_1 : var_1));
    var_20 *= ((((23275 ? 65535 : 23260)) | ((min((var_7 && 51199), (var_12 < var_16))))));
    #pragma endscop
}
