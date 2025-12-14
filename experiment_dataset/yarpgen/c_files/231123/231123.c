/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_20 = (min(var_20, (((((6630 ? ((3374353832 ? var_19 : (arr_1 [i_0 - 2]))) : (var_10 <= var_5))) != (arr_2 [i_0] [i_0 - 2]))))));
        arr_3 [i_0] [i_0] = var_1;
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        arr_6 [i_1] = ((((127 < (((arr_4 [i_1]) ? (arr_5 [i_1]) : 1618)))) ? ((((!(var_17 >= 920613463))))) : (min((min((arr_4 [i_1]), (arr_4 [i_1]))), 56154))));
        var_21 = ((min(3669, 4294705152)));
        var_22 = -109;
        var_23 = (max(var_23, ((min((min((arr_4 [i_1 - 1]), (arr_5 [i_1 - 2]))), ((-(arr_5 [i_1 - 1]))))))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_24 = (min(920613472, -1188655317086052163));
        var_25 = (arr_4 [i_2]);
    }
    var_26 = (min(var_26, (((-((min((max(-123, -2958)), -16618))))))));
    var_27 = var_0;
    #pragma endscop
}
