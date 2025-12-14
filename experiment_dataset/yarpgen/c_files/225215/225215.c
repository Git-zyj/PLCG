/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (min(((min(-2, -1084380713))), var_3));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 = ((max(var_3, var_10)));
        var_17 = max(((((((arr_0 [i_0]) - -361861113265793355))) ? ((var_8 ? var_2 : (arr_1 [i_0] [i_0]))) : 1084380712)), ((max((((var_6 ? (arr_0 [i_0]) : 23099))), ((1010367708580639527 ? 13929 : 3064886501))))));
        var_18 = (max(var_18, ((((((~(((var_8 <= (arr_0 [i_0]))))))) ? (~var_10) : ((((-var_13 + 2147483647) << (((max(-361861113265793356, 127)) - 127))))))))));
        arr_2 [i_0] |= (((((~(arr_1 [i_0] [i_0])))) ? (arr_1 [i_0] [1]) : (((~(1084380725 ^ 0))))));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_19 = max((min(23082, 13252034560228546426)), ((max((arr_3 [i_1 + 1] [i_1 + 3]), (arr_3 [i_1 + 4] [i_1 + 4])))));
        var_20 |= ((((((((arr_3 [13] [i_1 - 1]) ? var_9 : var_0))) ? -1258645783 : -var_3)) / (((((arr_3 [i_1 + 1] [i_1]) >= (arr_3 [i_1 + 1] [i_1 + 4])))))));
        var_21 = (((max((((arr_3 [i_1] [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_1]))), -4020)) <= ((3221225472 ? (min(203, var_13)) : (!var_0)))));
        arr_5 [6] = (((((max((arr_3 [i_1 + 1] [i_1 + 3]), (arr_3 [i_1 - 1] [i_1 + 4]))))) * var_9));
    }
    #pragma endscop
}
