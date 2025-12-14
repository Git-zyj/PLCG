/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = ((!((max((max((arr_1 [i_0]), var_7)), (arr_1 [i_0]))))));
        var_20 -= (max(var_4, (max(var_18, (((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))))));
        arr_3 [i_0] = (min(((((max(1, 0))) * (!var_10))), (!var_18)));
    }
    var_21 = ((((-103 ? 15 : 11385760)) == 105));
    #pragma endscop
}
