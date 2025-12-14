/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;
    var_19 = (!(min((16166175977148784157 < var_11), (1761615405 && 1761615403))));
    var_20 = var_0;

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0 - 2] = ((((((16166175977148784166 || (arr_2 [i_0]))) && (arr_1 [i_0]))) && ((!((((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0]))))))));
        var_21 = ((((((-29213 && 1) ? (min(1761615405, 635820857)) : (((max(-81, -3064))))))) || ((((min((arr_1 [i_0]), -6628509857368367729))) && -83))));
        var_22 = ((max((arr_1 [i_0 - 3]), (arr_2 [i_0 - 3]))) + ((((!(arr_2 [i_0 - 2]))))));
        var_23 = arr_2 [i_0];
    }
    #pragma endscop
}
