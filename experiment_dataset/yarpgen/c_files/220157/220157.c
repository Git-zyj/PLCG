/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_10 = (min(var_10, ((((((((var_8 ^ 116) <= (min(260625001, var_0)))))) * (var_1 / 4034342294))))));
        var_11 = (((((var_8 / (arr_1 [i_0])))) && (((arr_0 [i_0]) == var_5))));
        arr_2 [i_0] [i_0] = (((max((min(452163954103175002, (arr_0 [i_0]))), ((((arr_0 [3]) % 4034342294))))) / (((((arr_1 [i_0]) != 260625001))))));
    }
    var_12 = (((((((min(482080830, 65531))) || (var_3 >= var_6)))) & ((((max(36785879076106251, var_7)) >= (max(var_2, 1087728594)))))));
    #pragma endscop
}
