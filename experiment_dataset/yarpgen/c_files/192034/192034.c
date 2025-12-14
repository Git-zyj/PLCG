/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((15532 & (max(var_1, var_14)))))));
    var_17 = ((-(((var_4 || (var_8 & var_5))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 = (min(var_18, (((!(arr_1 [i_0]))))));
        arr_2 [i_0] [i_0] = (((!-79) ? ((var_0 ? -7 : 220)) : 11));
        arr_3 [i_0] = ((((((max(var_14, 17))) == 7355)) ? (arr_1 [i_0]) : ((((((arr_0 [i_0] [i_0]) << (4191490042315784608 - 4191490042315784604))) << (!106))))));
    }
    var_19 = ((var_8 / ((~(max(1, 0))))));
    #pragma endscop
}
