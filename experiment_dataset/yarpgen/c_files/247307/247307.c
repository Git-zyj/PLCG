/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_17 = (max(var_17, (((-(arr_1 [i_0]))))));
        var_18 = (max(var_18, ((((((114 ? (arr_1 [i_0]) : (arr_0 [i_0])))) ? (arr_0 [i_0]) : (!0))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_19 = (min((min(((((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_1])))), ((-(arr_2 [i_1]))))), (arr_3 [i_1])));
        var_20 = max(-4294967294, (((!(arr_2 [i_1])))));
        arr_4 [i_1] [i_1] = ((((max((arr_3 [i_1]), (arr_3 [i_1])))) ? (((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_1]))) : ((min((arr_3 [i_1]), (arr_3 [i_1]))))));
        var_21 = (max(var_21, (((((((((396236812 & (arr_2 [i_1])))) ? (max(396236812, (arr_2 [i_1]))) : (arr_3 [i_1])))) ? ((max((((arr_3 [i_1]) << (((arr_2 [i_1]) + 7621956000518864900)))), (((!(arr_2 [i_1]))))))) : (max(((((arr_3 [i_1]) ? 11274 : (arr_3 [i_1])))), (min(-396236803, 10641950245174421747)))))))));
    }
    var_22 = var_15;
    var_23 = var_14;
    var_24 = var_11;
    #pragma endscop
}
