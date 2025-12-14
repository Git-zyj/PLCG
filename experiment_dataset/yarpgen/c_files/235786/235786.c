/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_9, -4431016724319264229));
    var_20 += var_14;
    var_21 &= (((var_4 == var_13) == var_4));
    var_22 = 1;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_23 = (!((183 == (arr_1 [i_0] [i_0]))));
        arr_2 [i_0] [1] |= ((((max(0, (arr_0 [22])))) ? (max((1 ^ 3433742896876540181), var_11)) : ((((-8826853754809888928 == (((17903177370044809657 ? 7 : -13)))))))));
        arr_3 [24] |= -112;
    }
    #pragma endscop
}
