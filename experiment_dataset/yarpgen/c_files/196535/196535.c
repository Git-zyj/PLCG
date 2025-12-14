/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (((!(((((var_3 ? 57725 : 3701743301)) * (var_9 != var_4)))))))));
    var_12 += var_1;
    var_13 = var_3;
    var_14 = ((!(((var_1 ? -18122 : (min(12611729918302152573, 33)))))));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_4 [1] = var_3;
        arr_5 [i_0] = (((((((arr_1 [i_0]) ? var_9 : var_9))) <= ((var_0 ? var_2 : 12611729918302152573)))) ? 12611729918302152573 : ((((((arr_0 [i_0]) < var_7)) ? ((var_7 ? 57733 : var_0)) : (((134 + (arr_2 [i_0]))))))));
        var_15 ^= (min((((min(19882, 57700)))), (((249 ? var_7 : (arr_2 [i_0]))))));
        arr_6 [i_0] = ((((min((arr_3 [i_0 + 3]), (arr_3 [i_0 + 1])))) ? ((-9566 ? 4420 : 17964250888210188614)) : ((((var_9 == (arr_3 [i_0 - 1])))))));
        var_16 = (((arr_1 [i_0]) ? ((124 * ((0 ? 12611729918302152573 : var_7)))) : (arr_2 [i_0 + 2])));
    }
    #pragma endscop
}
