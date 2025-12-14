/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 = (min(18446744073709551615, ((min((arr_0 [i_0]), (arr_0 [8]))))));
        arr_2 [i_0] = (min((((arr_0 [i_0]) ^ (min(-9775, (arr_1 [i_0]))))), ((((max((arr_1 [i_0]), (arr_1 [i_0])))) ? (((arr_1 [i_0]) * (arr_0 [i_0]))) : (arr_1 [i_0])))));
        arr_3 [i_0] = -5;
        arr_4 [i_0] [11] = 1;
        arr_5 [14] = min(var_8, (arr_0 [14]));
    }
    var_11 *= ((var_0 ? -var_6 : 5346));
    var_12 = ((17685590159648313138 ? ((((((var_4 ? var_8 : 9223372036854775807))) || -1244825318918125007))) : ((((var_2 ? 89 : -2444513390605813093))))));
    var_13 = max((min(-1, var_7)), ((max(1, (max(var_3, var_4))))));
    #pragma endscop
}
