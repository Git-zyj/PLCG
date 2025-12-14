/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((507904 && (var_11 << var_5)));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (max(0, 4294967290));
        arr_3 [i_0] = 4294967277;
        var_14 = (((max((((arr_0 [i_0]) ? var_11 : (arr_0 [23]))), (((-32767 - 1) & var_3)))) >> (((max((!var_11), (((arr_0 [i_0]) ? var_4 : var_9)))) - 4168545483))));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        arr_6 [i_1] = 2035328132;
        var_15 = (min(var_15, (((+((((~var_3) < 184))))))));
    }
    var_16 = (max(var_1, (((((max(6038406668455945219, var_6))) ? ((-26 ? 3439039456 : var_3)) : (~-1))))));
    #pragma endscop
}
